//Copyright (C) 2007-2013 Realtek Semiconductor Corporation.
#include <linux/interrupt.h>
#include <asm/io.h>
#include "rbus/sb2_reg.h"
#include "rbus/emcu_reg.h"
#include "rbus/pll27x_reg_reg.h"
#include "rbus/stb_reg.h"
#include "rbus/misc_i2c_reg.h"
#include "rbus/iso_i2c_reg.h"
#include <linux/sched.h>
//#include <linux/ptrace.h>
#include <asm-generic/irq_regs.h>
#include <linux/nmi.h>
#include <rtk_kdriver/RPCDriver.h>
#include <rtk_sb2_callback.h>
#include "rtd_logger.h"
#include "rtk_sb2.h"
#include <linux/of_irq.h>
#include <linux/platform_device.h>
#include <linux/module.h>
#include <linux/version.h>
#include <linux/pageremap.h>

#ifdef CONFIG_REALTEK_RPC_KCPU
static struct semaphore send_sb2_emergency_intr_sem[(RPC_NR_KERN_DEVS+RPC_NR_KERN_KCPU_DEVS)/RPC_NR_PAIR + 1];
#else
static struct semaphore send_sb2_emergency_intr_sem[(RPC_NR_KERN_DEVS)/RPC_NR_PAIR + 1];
#endif

#ifdef CONFIG_ARM64
#include <mach/io.h>
#include <asm/system_misc.h>
#define hook_fault_code hook_debug_fault_code
#endif
#define FRED_START "\033[1;31;40m"
#define FGREEN_START "\033[1;32;40m"
#define FYELLOW_START "\033[1;33;40m"
#define FBLUE_START "\033[1;34;40m"
#define FCOLOR_END "\033[0m"

#include <linux/module.h>
#include <rtk_dc_mt.h>
MODULE_AUTHOR("Jun Xiao, Realtek Semiconductor");
MODULE_LICENSE("Dual BSD/GPL");

#define SB2DBG_LOG 1
#if SB2DBG_LOG
#define DBG_DFT(format, ...) printk(format, ##__VA_ARGS__)
#define DBG_YELLOW(format, ...) printk ( FYELLOW_START format FCOLOR_END, ##__VA_ARGS__)
#else
#define DBG_DFT(format, ...)
#define DBG_YELLOW(format, ...)
#endif

static unsigned int sb2dbg_tmp_reg[5];
static sb2dbg_status_store sb2dbg_reg_status[16];
//BIT 
static unsigned int sb2dbg_tmp_dbg3_reg;
static sb2dbg3_status_store sb2dbg_reg_dbg3_status[4];
//static sb2block_status_store sb2block_reg_status;
static unsigned int dbg_flag = 0;
static unsigned int str_support_flag = 0;
static unsigned int str_support_dbg3_flag = 0;
static unsigned int sb2hack_intr_bit = 0;
static unsigned int sb2hack_dbg3_intr_bit = 0;
int sb2_dbg_kernel_trap_warning = 1;  // change default to 1
static sb2_timeout_info timeout_info;
int sb2_set_id = 1;
struct atomic_notifier_head sb2_notifier_list;
struct atomic_notifier_head sb2_notifier_list_cat;      //show register modules

extern int need_monitor_range_dft;
#if 0
//debug need delete===========================================
#define  SB2_DBG3_0_0_reg                                                        0xB801AB10
#define  SB2_DBG3_1_0_reg                                                        0xB801AB20
#define  SB2_DBG3_2_0_reg                                                        0xB801AB30
#define  SB2_DBG3_CTRL_0_reg                                                  0xB801AB40
#define  SB2_DBG3_INT_reg                                                        0xB801AB70

#define  SB2_DBG3_WDATA_0_reg                                               0xB801AB50//a
#define  SB2_DBG3_WDATA_1_reg                                               0xB801AB54//v
#define  SB2_DBG3_WDATA_2_reg                                               0xB801AB58//s
#define  SB2_DBG3_CPU_0_reg                                                    0xB801AB60//a
#define  SB2_DBG3_CPU_1_reg                                                    0xB801AB64//v
#define  SB2_DBG3_CPU_2_reg                                                    0xB801AB68 //scpu

unsigned int rtd_inl_ctrl[4];
unsigned int rtd_inl_0[4];
unsigned int rtd_inl_1[4];
unsigned int rtd_inl_2[4];
#endif
//==============================================================
static const t_sb2_timout_moudle module_sb2_info[] = {
//1800_000  - 1800_ffff
        {0x18000000, 0x18000fff, "Main Top System"},
        {0x18001000, 0x18001fff, "vde"},
        //{0x18001800, 0x18001fff, "rng"},
        {0x18002000, 0x18002fff, "Audio Engine(AE/ADE)"},
        //{0x18003000, 0x18003fff, "DC2_SYS"},
        //{0x18004000, 0x18004fff, "DC2_PHY"},
        {0x18005000, 0x18005fff, "VODMA"},
        {0x18006000, 0x18006fff, "AIO"},
        {0x18007000, 0x18007fff, "DC_SYS"},

        {0x18008000, 0x18008fff, "DC_PHY"},
        {0x18009000, 0x18009fff, "ME"},
        //{0x1800A000, 0x1800Afff, "CBUS/ECBUS"},
        {0x1800B000, 0x1800Bfff, "MD"},
        {0x1800c000, 0x1800cfff, "SE"},
        {0x1800D000, 0x1800D9ff, "HDMI"},
        {0x1800DA00, 0x1800Dfff, "HDMIEX"},
        {0x1800e000, 0x1800ffff, "VE"},

//1801_000  - 1801_ffff
        {0x18010000, 0x180107ff, "nand flash"},
        {0x18010800, 0x18010bff, "emmc"},
        //{0x18010c00, 0x18010fff, "SD"},
        {0x18012000, 0x18012fff, "USBEX"},
        {0x18013000, 0x18013fff, "USB"},

        {0x18014000, 0x18014fff, "TP"},
        {0x18015000, 0x18015fff, "CP"},
        {0x18016000, 0x18016fff, "ETN"},
        //{0x18017000, 0x18017fff, "DP"},

        {0x18018000, 0x18018fff, "Video Decorder"},
        {0x18019000, 0x18019fff, "Video Decorder"},
        {0x1801A000, 0x1801Afff, "SB2"},
        {0x1801B000, 0x1801Bfff, "MISC"},
        {0x1801C000, 0x1801Cfff, "System Bridge"},
        {0x1801D000, 0x1801Efff, "ARM"},
        //{0x1801F000, 0x1801Ffff, "TVE"},

//1802_000  - 1802_ffff
        {0x18020000, 0x18025fff, "DISPIM"},
        {0x18026000, 0x18026fff, "LVDS"},
        {0x18027000, 0x18027FFF, "DISPIM"},
        {0x18028000, 0x1802Cfff, "DISPD"},
        {0x1802D000, 0x1802Dfff, "LVDS"},
        {0x1802E000, 0x1802ffff, "DISPD"},

//1803_000  - 1803_ffff
        {0x18030000, 0x18030fff, "VBI Slicer"},
        //{0x18031000, 0x18031FFF, "OSD_COMP"},   //1200 ~ 1fff : reserved

        {0x18032000, 0x18032fff, "IF DEMOD(Digital)"},
        {0x18033000, 0x18033fff, "IF DEMOD(Analog)"},
        //{0x18034000, 0x180343ff, "VP9"},
        //{0x18035000, 0x18036FFF, "VE2"},
        //{0x18037000, 0x18037FFF, "VDE2"},

        {0x18038000, 0x18038fff, "efuse"},
        {0x18039000, 0x18039FFF, "MISC"},
        //{0x1803A000, 0x1803AFFF, "Audio Engine(AE2/ADE2)"},
        {0x1803B000, 0x1803CFFF, "HDMI"},
        //{0x1803D000, 0x1803D7FF, "hdmitx"},
        //{0x1803D800, 0x1803DFFF, "disp2tve"},
        {0x1803E000, 0x1800EFFF, "SE"},
        //{0x1803F000, 0x1803FFFF, "ib(inter bridge)"},

//1804_000  - 1804_ffff
        //reserved

//1805_000  - 1805_ffff
        {0x18050000, 0x18058FFF, "USB"},
        //{0x18059000, 0x18059FFF, "DRAM Control"},
        {0x1805A000, 0x1805AFFF, "USB"},
        {0x1805B000, 0x1805BFFF, "ARM(secure)"},
        {0x1805C000, 0x1805CFFF, "ARM(non-secure)"},
        //{0x1805D000, 0x1805DFFF, "MIPS"},
        /* E000-Efff  reserved*/
        {0x1805F000, 0x1805FFFF, "USB"},

//1806_000  - 1806_ffff
        {0x18060000, 0x18060FFF, "Satndby Top/system"},
        {0x18061000, 0x18062FFF, "ST PERI"},
        /* 3000-3fff  reserved*/
        //{0x18064000, 0x18067FFF, "DI_DMA"},
        {0x18068000, 0x18068FFF, "LZMA"},
        /* 9000-Afff  reserved*/
        {0x1806B000, 0x1806BFFF, "DOLBY_V"},
        //{0x1806C000, 0x1806CFFF, "certid"},
        //{0x1806D000, 0x1806DFFF, "KT"},
        {0x1806E000, 0x1806EFFF, "RSA(CP)"},
        //{0x1806F000, 0x1806FFFF, "SCE"},

//1807_000  - 1807_ffff
        //{0x18070000, 0x18072FFF, "demod wrapper"},
        {0x18073000, 0x18076FFF, "NNIP"},
        /* 7000-Ffff  reserved*/

//1808_000  - 1808_ffff
        {0x18080000, 0x1808FFFF, "GIC"},

//1809_000  - 1809_ffff
        //{0x18090000, 0x18098FFF, "USB_OTG"},
        {0x18099000, 0x1809FFFF, "MEMC"},

//180A_000  - 180A_ffff
        {0x180A0000, 0x180AFFFF, "CCI"},

//180B_000  - 180B_ffff
        {0x180B0000, 0x180B07FF, "DC_PHY_SECU"},
        //{0x180B0800, 0x180B0FFF, "DC2_PHY_SECU"},
        {0x180B1000, 0x180B1FFF, "PST"},    //IMD scaler
        {0x180B2000, 0x180B2FFF, "HDMI"},
        {0x180B3000, 0x180B3FFF, "DC_PATGEN"},
        {0x180B4000, 0x180B4FFF, "HDMIEX"},
        /* 5000-5fff  reserved*/
        //{0x180B6000, 0x180B64FF, "SB3_BLK_WRP"},
        {0x180B6500, 0x180B69FF, "VE_BLK_WRP"},
        //{0x180B6A00, 0x180B6FFF, "VE2_BLK_WRP"},
        {0x180B7000, 0x180B7FFF, "HDMI"},
        {0x180B8000, 0x180B8FFF, "EARC"},
        {0x180B9000, 0x180BAFFF, "HDMI"},
        {0x180BB000, 0x180BBFFF, "DSCD"},
        {0x180BC000, 0x180BDFFF, "HDMI"},
        {0x180BE000, 0x180BEFFF, "DC_PHY_DPI"},
        /* f000-ffff  reserved*/

        //{0x180C0000, 0x180FFFFF, "demod core"},


        {0x18100000, 0x1813FFFF, "gpu"},

        {0x18140000, 0x1815FFFF, "rtk_dtv_demod"},

        {0x18160000, 0x1816FFFF, "atb_demod"},
        {0x18170000, 0x1817FFFF, "hdic_demod"}
};

extern void dump_stacks(void);
int sb2_timeout_handler(unsigned long addr, unsigned int fsr, struct pt_regs *regs);
int sb2_dbg_handler (void);
int sb2_dbg3_handler (void);
extern char* __find_next_str(char* str);
extern int get_arguments(char* str, int argc, char** argv);

//irqreturn_t sb2_block_intr(int irq, void *dev_id);

irqreturn_t sb2_intr(int irq, void *dev_id)
{
        int value_timeout = rtd_inl(SB2_INV_INTSTAT_reg);
        int value_dbg = rtd_inl(SB2_DBG_INT_reg);

        // timeout: System CPU issued an invalid address access
        if(value_timeout & BIT(1)){
                rtd_outl(SB2_INV_INTSTAT_reg, BIT(1));
                return IRQ_HANDLED;
        }

        //debug: SCPU or ACPU,VCPU issued an invalid address access
        if((value_dbg & BIT(10))){
                rtd_outl(SB2_DBG_INT_reg, BIT(10));
                return IRQ_HANDLED;
        }

        return IRQ_NONE;
}

int sb2_buserr (unsigned long addr, unsigned int fsr, struct pt_regs *regs)
{    
    // bit monitor exception
    if(rtd_inl(SB2_DBG3_INT_reg) & BIT(4))
    {
        console_loglevel = 6;
        sb2_dbg3_handler();
        return 1;
    }
    
    // sb2 debug exception
    if(rtd_inl(SB2_DBG_INT_reg) & BIT(10))
    {
        console_loglevel = 6;
        sb2_dbg_handler();
        return 2;
    }
    
    // sb2 timeout exception
    if(rtd_inl(SB2_INV_INTSTAT_reg))
    {
        console_loglevel = 6;
        return sb2_timeout_handler(addr, fsr, regs);
    }
    return -1;
}

int setup_irq(unsigned int irq, struct irqaction *act);

void init_timeout_regs(void)
{
        unsigned int EMCU_wrapper_8051_val=rtd_inl(EMCU_wrapper_8051_reg);

        // use the maximum timeout value. (all are 65535T)
        rtd_setbits(SB2_DEBUG_REG_reg, BIT(8) | BIT(7) | BIT(6) | BIT(5) | BIT(4) | BIT(3) | BIT(2) | BIT(1) | BIT(0));

        //clear Sciva_int
        rtd_outl(SB2_INV_INTSTAT_reg, BIT(1));

        //Enable To_en, To_en1, To_end(disp-relative)
#if 0
        rtd_outl(SB2_INV_INTEN_reg, BIT(8) | BIT(5) | BIT(4) | BIT(1) | BIT(0));
#else
        rtd_outl(SB2_INV_INTEN_reg, BIT(8) | BIT(5) | BIT(4) | BIT(0));
        rtd_outl(SB2_INV_INTEN_reg, BIT(1) ); ////SCPU should hook exception handler, instead of interrupt...
#endif

        //Disable EMCU rbus timeout, and TO cycle = 16384T (bit[7..5] = 0x5).
        /* NOTICE, EMCU TO cycles should be shorter than SB2,
         * otherwise SB2 could be disturbed by occurrence of both faked bus ACK.
         */
        EMCU_wrapper_8051_val = (EMCU_wrapper_8051_val & ~EMCU_wrapper_8051_rbus_timeout_cycle_mask
                & ~EMCU_wrapper_8051_rbus_timeout_enable_mask);
        rtd_outl(EMCU_wrapper_8051_reg, EMCU_wrapper_8051_val | EMCU_wrapper_8051_rbus_timeout_cycle(5));
        printk("@sb2_intr_setup:    enable sb2 interrupt [reserved rbus address]\n");

}

void init_dbg_regs(void)
{
        rtd_outl(SB2_DBG_INT_reg, BIT(10));
        //enable sb2 dbg exception
        rtd_outl(SB2_DBG_INT_reg, (BIT(25) | BIT(7) | BIT(0)));
        printk("@init_dbg_regs:    enable sb2 dbg exception [reserved rbus OR dbus address]\n");

}

void init_sb2_bit_monitor_regs (void)
{
    #if 0
    rtd_outl(SB2_DBG3_INT_reg, SB2_DBG3_INT_acpu_int_en_mask|SB2_DBG3_INT_vcpu_int_en_mask|
        SB2_DBG3_INT_scpu_exception_en_mask|SB2_DBG3_INT_write_data_mask);
    #endif
    rtd_outl(SB2_DBG3_INT_reg, SB2_DBG3_INT_acpu_int_en_mask|SB2_DBG3_INT_vcpu_int_en_mask|
                    SB2_DBG3_INT_scpu_exception_en_mask|SB2_DBG3_INT_write_data_mask);
}



static int rtk_sb2_irq_num = -1;
void __init sb2_intr_setup(void)
{
        /* Request IRQ */
        if(request_irq(rtk_sb2_irq_num,
                       sb2_intr,
                       IRQF_SHARED,
                       "SB2",
                       sb2_intr)) {
                printk(KERN_ERR "SB2: cannot register IRQ %d\n", IRQ_DCSYS);
                return ;
        }

        init_timeout_regs();
        init_dbg_regs();
        init_sb2_bit_monitor_regs();
}

unsigned int  get_SB2_DBG_START_register(int id)
{
        if(id < 8) {
                return (SB2_DBG_START_0_reg + id * 4);
        } else {
                return (SB2_DBG_START2_0_reg + (id - 8) * 4);
        }
}

unsigned int  get_SB2_DBG_END_register(int id)
{
        if(id < 8) {
                return (SB2_DBG_END_0_reg + id * 4);
        } else {
                return (SB2_DBG_END2_0_reg + (id - 8) * 4);
        }
}

unsigned int  get_SB2_DBG_CTRL_register(int id)
{
        if(id < 8) {
                return (SB2_DBG_CTRL_0_reg + id * 4);
        } else {
                return (SB2_DBG_CTRL3_0_reg + (id - 8) * 4);
        }
}

//
unsigned int  get_SB2_DBG3_0_register(int id)
{
    return (SB2_DBG3_0_0_reg + id * 4);
}

unsigned int  get_SB2_DBG3_1_register(int id)
{
    return (SB2_DBG3_1_0_reg + id * 4);
}

unsigned int  get_SB2_DBG3_2_register(int id)
{
    return (SB2_DBG3_2_0_reg + id * 4);
}
unsigned int  get_SB2_DBG3_CTRL_register(int id)
{
    return (SB2_DBG3_CTRL_0_reg + id * 4);
}
//
void string_cpy_coher(char * dst, char * src, int * pOff, int len)
{
        strcpy(&dst[*pOff], src);
        (*pOff) += len - 1; // drop last '\0'
}

static int is_pagebuf_full(int ofst)
{
        //int n= PAGE_SIZE-ofst-len-1;
        int n= PAGE_SIZE-ofst -1;

        if(n<0){
                return -1;
        }
        return 0;
}

static int show_msg(char *buf, int ofst, const char * fmt, ...)
{
        va_list args;
        int ret = 0;

        if(buf != NULL){
                buf += ofst;
                if(is_pagebuf_full(ofst) != -1){
                        va_start(args, fmt);
                        ret = vsnprintf(buf, PAGE_SIZE-ofst-1, fmt, args);
                        va_end(args);
                }
        }else{
                va_start(args, fmt);
                //vprintk(fmt,args);
                vprintk_emit(0, LOGLEVEL_ERR, NULL, 0, fmt, args);
                va_end(args);
        }

        return ret;
}

int dump_help_info(char *buf, int ofst)
{
        int len = 0;
        //int ret = 0;

        len += show_msg(buf,ofst+len,"===sb2 dbg setting===\n");

        len += show_msg(buf,ofst+len,"%s", "1)set range: "FYELLOW_START"set{1-16} monitor {cpu_type1,cpu_type2,...} start_addr-end_addr [rw/r/w,str/nstr]\n"FCOLOR_END
                "\t usable cpu type:"FYELLOW_START"{acpu/vcpu/scpu/vcpu2/kcpu/acpu2}\n"FCOLOR_END
                "\t exp( full mode ): "FGREEN_START"echo \"set1 monitor scpu,acpu 18000000-18000010 rw,str\">/sys/realtek_boards/sb2_dbg\n"FCOLOR_END
                "\t exp(simple mode): "FGREEN_START"echo \"set1 monitor scpu,acpu 18000000-18000010 \">/sys/realtek_boards/sb2_dbg\n"FCOLOR_END);

        len += show_msg(buf,ofst+len,"%s","2)clear range: "FYELLOW_START"set{1-8} clear\n"FCOLOR_END
                "\t exp: "FGREEN_START"echo \"set1 clear\">/sys/realtek_boards/sb2_dbg\n"FCOLOR_END);

        len += show_msg(buf,ofst+len,"%s","3)force enable/disalbe all cpus interrupt: "FYELLOW_START"set{1-8} hack_on/hack_off\n"FCOLOR_END
                "\t exp: "FGREEN_START"echo \"set1 hack_on\">/sys/realtek_boards/sb2_dbg\n"FCOLOR_END
                "\t exp: "FGREEN_START"echo \"set1 hack_off\">/sys/realtek_boards/sb2_dbg\n"FCOLOR_END);

        len += show_msg(buf,ofst+len,"%s","4)block range(only block register write): "FYELLOW_START"set{1-4} block all start_addr-end_addr\n"FCOLOR_END
                "\t exp: "FGREEN_START"echo \"set1 block all 0x18000000-0x18001000\">/sys/realtek_boards/sb2_dbg\n"FCOLOR_END);

        len += show_msg(buf,ofst+len, "%s","5)non-block range(register write): "FYELLOW_START"set{1-4} non-block \n"FCOLOR_END
                "\t exp: "FGREEN_START"echo \"set1 non-block\">/sys/realtek_boards/sb2_dbg\n"FCOLOR_END);

        len += show_msg(buf,ofst+len, "%s","6)trap toggle: "FYELLOW_START"set{1-4} trap-toggle \n"FCOLOR_END
                "\t exp: "FGREEN_START"echo \"set1 trap-toggle\">/sys/realtek_boards/sb2_dbg\n"FCOLOR_END);

        return len;
}
#if 0
void dump_block_info(void)
{
        int i;
        unsigned int start_addr[SB2_BLOCK_SET_NUM] = {0};
        unsigned int end_addr[SB2_BLOCK_SET_NUM] = {0};
        unsigned int ctrl_val = rtd_inl(SB2_RBUS_INVA_ACC_CTRL_reg);
        unsigned int start_convert = 0;
        unsigned int end_convert = 0;

        start_addr[0] = rtd_inl(SB2_RBUS_INVA_ACC_SEC1_START_reg);
        end_addr[0] = rtd_inl(SB2_RBUS_INVA_ACC_SEC1_END_reg);
        start_addr[1] = rtd_inl(SB2_RBUS_INVA_ACC_SEC2_START_reg);
        end_addr[1] = rtd_inl(SB2_RBUS_INVA_ACC_SEC2_END_reg);
        start_addr[2] = rtd_inl(SB2_RBUS_INVA_ACC_SEC3_START_reg);
        end_addr[2] = rtd_inl(SB2_RBUS_INVA_ACC_SEC3_END_reg);
        start_addr[3] = rtd_inl(SB2_RBUS_INVA_ACC_SEC4_START_reg);
        end_addr[3] = rtd_inl(SB2_RBUS_INVA_ACC_SEC4_END_reg);

        printk("===sb2 block setting===\n");
        for(i = 0; i < SB2_BLOCK_SET_NUM; ++i) {
                start_convert = (start_addr[i] << 2) + 0x18000000;
                end_convert = (end_addr[i] << 2) + 0x18000000;
                pr_info("[%02d] [%08x - %08x] check %s\n", i + 1, start_convert, end_convert,
                       (ctrl_val & 1 << (i * 2)) ? "enable" : "disable");
        }
}
#endif

int dump_set_info (char *buf, int ofst)
{
    int i;
    int len=0;
    char cpu_enables[128] = {0};
    int cpu_str_cnt = 0;
    //char* cpu_enable;
    char*read_write[] = {"R/W", "read", "write", "R/W"};
    char*data_instruction[] = {"data and instruction", "data", "instruction", "data and instruction"};
    char*str_support[] = {"non-STR", "STR"};
    unsigned int ctrl_reg;
    unsigned int start_reg;
    unsigned int end_reg;
    unsigned int ctrl_reg_value;
    unsigned int start_reg_value;
    unsigned int end_reg_value;

    len += show_msg(buf,ofst+len,"===sb2 dbg setting===\n");

    for (i = 0; i < 16; i++)
    {
        memset(cpu_enables, '\0', sizeof(cpu_enables));
        cpu_str_cnt = 0;
        ctrl_reg = get_SB2_DBG_CTRL_register(i);
        start_reg = get_SB2_DBG_START_register(i);
        end_reg = get_SB2_DBG_END_register(i);
        //pr_err("%d: ctrl_reg(0x%x): 0x%x, start_reg(0x%x): 0x%x,  end_reg(0x%x): 0x%x\n",  i+1, ctrl_reg,rtd_inl(ctrl_reg), start_reg,rtd_inl(start_reg),end_reg,rtd_inl(end_reg));

        ctrl_reg_value =  rtd_inl(ctrl_reg);
        start_reg_value =  rtd_inl(start_reg);
        end_reg_value =  rtd_inl(end_reg);

        if ((ctrl_reg_value & BIT(12)) && (ctrl_reg_value & BIT(10)) && (ctrl_reg_value & BIT(8)) && (ctrl_reg_value & BIT(16)) && (ctrl_reg_value & BIT(14)) && (ctrl_reg_value & BIT(18)))
        {
            string_cpy_coher(cpu_enables, "[all]", &cpu_str_cnt, sizeof("[all]"));
        }
        else
        {
            if (ctrl_reg_value & BIT(12))
            {
                string_cpy_coher(cpu_enables, "[A]", &cpu_str_cnt, sizeof("[A]"));
            }
            if (ctrl_reg_value & BIT(10))
            {
                string_cpy_coher(cpu_enables, "[V]", &cpu_str_cnt, sizeof("[V]"));
            }
            if (ctrl_reg_value & BIT(8))
            {
                string_cpy_coher(cpu_enables, "[S]", &cpu_str_cnt, sizeof("[S]"));
            }
            if (cpu_str_cnt == 0)
            {
                string_cpy_coher(cpu_enables, "no cpu", &cpu_str_cnt, sizeof("no cpu"));
            }
        }
        cpu_enables[sizeof(cpu_enables) - 1] = '\0';

        len += show_msg(buf,ofst+len,"[%02d] [%08x - %08x] %16s check enable,%8s,monitor %s (%s)\n",  i + 1,
                        rtd_inl(get_SB2_DBG_START_register(i)),
                        rtd_inl(get_SB2_DBG_END_register(i)),
                        cpu_enables,
                        str_support[str_support_flag >> i & 0x1],
                        data_instruction[ctrl_reg_value >> 2 & 0x3],
                        read_write[ctrl_reg_value >> 5 & 0x3]);

    }
    len += show_msg(buf,ofst+len, "\n===sb2 reg===\n");
    len += show_msg(buf,ofst+len, "DBG_CTRL2:(0x%08x) = 0x%08x\n",SB2_DBG_CTRL2_reg,rtd_inl(SB2_DBG_CTRL2_reg));
    len += show_msg(buf,ofst+len, "DBG_INT:(0x%08x) = 0x%08x\n",SB2_DBG_INT_reg,rtd_inl(SB2_DBG_INT_reg));
    return len;
}

int dump_sb2_bit_monitor_set_info (char *buf, int ofst)
{
    unsigned int dbg3_ctrl_reg_value;
    char dbg3_cpuenables[128] = {0};
    int i,len=0;
    int cpu_str_cnt = 0;
    char*str_support[] = {"non-STR", "STR"};

    len += show_msg(buf,ofst+len,"\n===sb2 bit monitor setting===\n");
    for (i = 0; i < 4; i++)
    {
        memset(dbg3_cpuenables, '\0', sizeof(dbg3_cpuenables));
        cpu_str_cnt = 0;

        dbg3_ctrl_reg_value = rtd_inl( get_SB2_DBG3_CTRL_register(i));
        if ((dbg3_ctrl_reg_value & BIT(6)) && (dbg3_ctrl_reg_value & BIT(4)) && (dbg3_ctrl_reg_value & BIT(2)))
        {
            string_cpy_coher(dbg3_cpuenables, "[all]", &cpu_str_cnt, sizeof("[all]"));
        }
        else
        {
            if (dbg3_ctrl_reg_value & BIT(6))
            {
                string_cpy_coher(dbg3_cpuenables, "[A]", &cpu_str_cnt, sizeof("[A]"));
            }
            if (dbg3_ctrl_reg_value & BIT(4))
            {
                string_cpy_coher(dbg3_cpuenables, "[V]", &cpu_str_cnt, sizeof("[V]"));
            }
            if (dbg3_ctrl_reg_value & BIT(2))
            {
                string_cpy_coher(dbg3_cpuenables, "[S]", &cpu_str_cnt, sizeof("[S]"));
            }
            if (cpu_str_cnt == 0)
            {
                string_cpy_coher(dbg3_cpuenables, "no cpu", &cpu_str_cnt, sizeof("no cpu"));
            }
        }
        dbg3_cpuenables[sizeof(dbg3_cpuenables) - 1] = '\0';

        len += show_msg(buf,ofst+len,"[%02d] [%08x] %16s check enable (0x%08x), %8s, 0x%08x | 0x%08x\n",  i + 1,
                        rtd_inl(get_SB2_DBG3_0_register(i)),
                        dbg3_cpuenables,rtd_inl(get_SB2_DBG3_CTRL_register(i)),
                        str_support[str_support_dbg3_flag >> i & 0x1],
                        rtd_inl(get_SB2_DBG3_1_register(i)),
                        rtd_inl(get_SB2_DBG3_2_register(i))
                       );

    }
    len += show_msg(buf,ofst+len, "\n===sb2 bit monitor ctrl reg===\n");
    len += show_msg(buf,ofst+len, "DBG3_INT:(0x%08x) = 0x%08x\n",SB2_DBG3_INT_reg,rtd_inl(SB2_DBG3_INT_reg));
    return len;
}

void dump_sb2dbg_regval(void)
{
        int i;
        pr_err("%08x=%08x SB2_INV_INTEN\n", SB2_INV_INTEN_reg, rtd_inl(SB2_INV_INTEN_reg));
        pr_err("%08x=%08x SB2_INV_INTSTAT\n", SB2_INV_INTSTAT_reg, rtd_inl(SB2_INV_INTSTAT_reg));
        pr_err("%08x=%08x SB2_DEBUG_REG\n", SB2_DEBUG_REG_reg, rtd_inl(SB2_DEBUG_REG_reg));
        pr_err("%08x=%08x SB2_DBG_INT\n", SB2_DBG_INT_reg, rtd_inl(SB2_DBG_INT_reg));
        pr_err("%08x=%08x SB2_DBG3_INT\n", SB2_DBG3_INT_reg, rtd_inl(SB2_DBG3_INT_reg));


        for (i = 0; i < 8; i++) {
                pr_err("------set%02d------\n", i + 1);
                pr_err("[set%02d]%08x=%08x SB2_DBG_START\n", i + 1, SB2_DBG_START_0_reg + i * 4, rtd_inl(SB2_DBG_START_0_reg + i * 4));
                pr_err("[set%02d]%08x=%08x SB2_DBG_END\n", i + 1, SB2_DBG_END_0_reg + i * 4, rtd_inl(SB2_DBG_END_0_reg + i * 4));
                pr_err("[set%02d]%08x=%08x SB2_DBG_CTRL\n", i + 1, SB2_DBG_CTRL_0_reg + i * 4, rtd_inl(SB2_DBG_CTRL_0_reg + i * 4));
        }
        for (i = 8; i < 16; i++) {
                pr_err("------set%02d------\n", i + 1);
                pr_err("[set%02d]%08x=%08x SB2_DBG_START2\n", i + 1, SB2_DBG_START2_0_reg + (i - 8) * 4, rtd_inl(SB2_DBG_START2_0_reg + (i - 8) * 4));
                pr_err("[set%02d]%08x=%08x SB2_DBG_END2\n", i + 1, SB2_DBG_END2_0_reg + (i - 8) * 4, rtd_inl(SB2_DBG_END_0_reg + (i - 8) * 4));
                pr_err("[set%02d]%08x=%08x SB2_DBG_CTRL3\n", i + 1, SB2_DBG_CTRL3_0_reg + (i - 8) * 4, rtd_inl(SB2_DBG_CTRL3_0_reg + (i - 8) * 4));
        }
        //bit
        for (i = 0; i < 4; i++) {
                pr_err("------set%02d------\n", i + 1);
                pr_err("[set%02d]%08x=%08x SB2_DBG3_0\n", i + 1, SB2_DBG3_0_0_reg + i * 4, rtd_inl(SB2_DBG3_0_0_reg + i * 4));
                pr_err("[set%02d]%08x=%08x SB2_DBG3_1\n", i + 1, SB2_DBG3_1_0_reg + i * 4, rtd_inl(SB2_DBG3_1_0_reg + i * 4));
                pr_err("[set%02d]%08x=%08x SB2_DBG3_2\n", i + 1, SB2_DBG3_2_0_reg + i * 4, rtd_inl(SB2_DBG3_2_0_reg + i * 4));
                pr_err("[set%02d]%08x=%08x SB2_DBG3_CTRL\n", i + 1, SB2_DBG3_CTRL_0_reg + i * 4, rtd_inl(SB2_DBG_CTRL_0_reg + i * 4));
        }
        
}


void dump_sb2dbg_bit_monitor_regval (void)
{
    //int i;

    pr_err("\n\n\n");
    pr_err("%08x=%08x SB2_DBG3_INT\n", SB2_DBG3_INT_reg, rtd_inl(SB2_DBG3_INT_reg));
    pr_err("SCPU %08x=%08x VCPU %08x=%08x ACPU %08x=%08x SB2_DBG3_CPU  (monitor set )\n", 
        SB2_DBG3_CPU_2_reg, rtd_inl(SB2_DBG3_CPU_2_reg),
        SB2_DBG3_CPU_1_reg,rtd_inl(SB2_DBG3_CPU_1_reg),
        SB2_DBG3_CPU_0_reg,rtd_inl(SB2_DBG3_CPU_0_reg));
    pr_err("SCPU %08x=%08x VCPU %08x=%08x ACPU %08x=%08x SB2_DBG3_WDATA  (write data )\n", 
        SB2_DBG3_WDATA_2_reg, rtd_inl(SB2_DBG3_WDATA_2_reg),
        SB2_DBG3_WDATA_1_reg,rtd_inl(SB2_DBG3_WDATA_1_reg),
        SB2_DBG3_WDATA_0_reg,rtd_inl(SB2_DBG3_WDATA_0_reg));

#if 0
    for (i = 0; i < 4; i++)
    {
        pr_err("------set%02d------\n", i + 1);
        pr_err("[set%02d] %08x=%08x SB2_DBG3_0\n", i + 1, SB2_DBG3_0_0_reg + i * 4, rtd_inl(SB2_DBG3_0_0_reg + i * 4));
        pr_err("[set%02d] %08x=%08x SB2_DBG3_1\n", i + 1, SB2_DBG3_1_0_reg + i * 4, rtd_inl(SB2_DBG3_1_0_reg + i * 4));
        pr_err("[set%02d] %08x=%08x SB2_DBG3_2\n", i + 1, SB2_DBG3_2_0_reg + i * 4, rtd_inl(SB2_DBG3_2_0_reg + i * 4));
        pr_err("[set%02d] %08x=%08x SB2_DBG3_CTRL\n", i + 1, SB2_DBG3_CTRL_0_reg + i * 4, rtd_inl(SB2_DBG3_CTRL_0_reg + i * 4));
    }
#endif

}


#if 0
void dump_sb2block_regval(void)
{
        int i;
        pr_err("%08x=%08x SB2_RBUS_INVA_ACC_CTRL\n", SB2_RBUS_INVA_ACC_CTRL_reg, rtd_inl(SB2_RBUS_INVA_ACC_CTRL_reg));
        pr_err("%08x=%08x SB2_BL_CPU\n", SB2_BL_CPU_reg, rtd_inl(SB2_BL_CPU_reg));
        pr_err("%08x=%08x SB2_INTSTAT_SCPU\n", SB2_INTSTAT_SCPU_reg, rtd_inl(SB2_INTSTAT_SCPU_reg));

        for (i = 0; i < 4; i++) {
                pr_err("------set%02d------\n", i + 1);
                pr_err("[set%02d]%08x=%08x SB2_BLOCK_START\n", i + 1, SB2_RBUS_INVA_ACC_SEC1_START_reg + i * 8, rtd_inl(SB2_DBG_START_0_reg + i * 8));
                pr_err("[set%02d]%08x=%08x SB2_BLOCK_END\n", i + 1, SB2_RBUS_INVA_ACC_SEC1_END_reg + i * 8, rtd_inl(SB2_DBG_END_0_reg + i * 8));
        }
}
#endif
int dump_sb2dbg_misc_info(char *buf, int ofst)
{
        int len=0;

        len += show_msg(buf,ofst+len,"\nsb2_dbg_kernel_trap_warning toggle to %d\n\n", sb2_dbg_kernel_trap_warning);

        return len;
}

void sb2_rbus_timeout_info(void)
{
        pr_err("\n Reset related settings 0x%08x:0x%08x 0x%08x:0x%08x 0x%08x:0x%08x 0x%08x:0x%08x\n",
               SYS_REG_SYS_SRST0_reg, rtd_inl(SYS_REG_SYS_SRST0_reg),
               SYS_REG_SYS_SRST1_reg, rtd_inl(SYS_REG_SYS_SRST1_reg),
               SYS_REG_SYS_SRST2_reg, rtd_inl(SYS_REG_SYS_SRST2_reg),
               SYS_REG_SYS_SRST3_reg, rtd_inl(SYS_REG_SYS_SRST3_reg));
        pr_err("\n Clock related settings 0x%08x:0x%08x 0x%08x:0x%08x 0x%08x:0x%08x 0x%08x:0x%08x\n",
               SYS_REG_SYS_CLKEN0_reg, rtd_inl(SYS_REG_SYS_CLKEN0_reg),
               SYS_REG_SYS_CLKEN1_reg, rtd_inl(SYS_REG_SYS_CLKEN1_reg),
               SYS_REG_SYS_CLKEN2_reg, rtd_inl(SYS_REG_SYS_CLKEN2_reg),
               SYS_REG_SYS_CLKEN3_reg, rtd_inl(SYS_REG_SYS_CLKEN3_reg));

	if (rtd_inl(SYS_REG_SYS_CLKEN2_reg) & SYS_REG_SYS_CLKEN2_clken_pllreg_mask) {
		pr_err("\n PLL27X_REG. settings 0x%08x:0x%08x 0x%08x:0x%08x 0x%08x:0x%08x 0x%08x:0x%08x\n",
		       PLL27X_REG_SYS_PLL_27X1_reg, rtd_inl(PLL27X_REG_SYS_PLL_27X1_reg),
		       PLL27X_REG_SYS_PLL_27X2_reg, rtd_inl(PLL27X_REG_SYS_PLL_27X2_reg),
		       PLL27X_REG_SYS_PLL_27X3_reg, rtd_inl(PLL27X_REG_SYS_PLL_27X3_reg),
		       PLL27X_REG_SYS_PLL_27X4_reg, rtd_inl(PLL27X_REG_SYS_PLL_27X4_reg));
	}

	pr_err("\n  PLL27X_REG. settings  0x%08x:0x%08x\n",
               PLL27X_REG_SYS_PLL_27X5_reg, rtd_inl(PLL27X_REG_SYS_PLL_27X5_reg));

	pr_err("\n Clock sel. settings  0x%08x:0x%08x\n",
               SYS_REG_SYS_CLKSEL_reg, rtd_inl(SYS_REG_SYS_CLKSEL_reg));

	pr_err("\n Uart clock related register dump  0x%08x:0x%08x\n\n",
               PLL27X_REG_SYS_PLL_AUD3_reg, rtd_inl(PLL27X_REG_SYS_PLL_AUD3_reg));

	return;
}
//get one module
static int get_sb2_module_name(t_sb2_timout_moudle *module_info,  int module_num,unsigned long reg,char* str,int offset)
{
        int i=0;
        //int module_num = sizeof(module_sb2_info)/sizeof(t_sb2_timout_moudle);

        memset(str, 0, MODULE_NAME_LEN_MAX);
        for(i = offset;i < module_num; i++){
                if((reg>= module_info[i].addr_start) && (reg<= module_info[i].addr_end))
                {
                        //pr_err("(%s)[%lx-%lx]\n",module_info[i].name,module_info[i].addr_start, module_info[i].addr_end);
                        snprintf(str,MODULE_NAME_LEN_MAX,"%s",module_info[i].name);
                        offset = i+1;
                        return offset;
                }
        }
        return -1;
}

static int search_sb2_module_name(t_sb2_timout_moudle *module_info, unsigned long reg, char * str, int module_num, int buffsize)
{
        int i,pos = 0;
        int offset = 0;
        int found = 0;
        char sb2_module_name[MODULE_NAME_LEN_MAX] = {0};

        memset(str, 0, buffsize);
        for(i=0;i< module_num;i++){
                offset = get_sb2_module_name(module_info,module_num, reg, sb2_module_name, offset);
                if(offset == -1){
                        break;
                }

                if(pos <  buffsize-1){
                        snprintf(str+pos, buffsize-pos-1, "[%s]", sb2_module_name);     // 1:for string terminate
                        pos = pos + strlen(sb2_module_name) + 2;
                }
                found = 1;      //get module

        }
        if(found == 0){         //no match module
                return -1;
        }

        return 0;

}

//get all mathc  module
static int get_sb2_module_all(unsigned long reg,char* str,int buffsize)
{
        int module_num = sizeof(module_sb2_info)/sizeof(t_sb2_timout_moudle);
        //int module_simple_num = sizeof(module_sb2_info_simple)/sizeof(t_sb2_timout_moudle);

        if(search_sb2_module_name((t_sb2_timout_moudle *)module_sb2_info, reg, str, module_num, buffsize) == 0){
                return 0;
        }
        #if 0
        else if(search_sb2_module_name(module_sb2_info_simple, reg, str, module_simple_num, buffsize) == 0){
                return 1;
        }
        #endif
        snprintf(str, buffsize, "[%s]", "Unknown");
        return -1;
}


unsigned long buserr_ignored_addr = _UNSET_;
#if defined(CONFIG_ARM64)
static int do_rbusto_fake_read(unsigned long addr, unsigned int fsr, struct pt_regs *regs)
{
	return -1;
}
#else //#if defined(CONFIG_ARM64)
extern int do_rbusto_fake_read(unsigned long addr, unsigned int fsr, struct pt_regs *regs);
#endif //#if defined(CONFIG_ARM64)

static int sb2_buserr_ignore(unsigned long addr)
{
	if ((addr == (volatile unsigned long)buserr_ignored_addr) ||
	    (_ANY_ == (volatile unsigned long)buserr_ignored_addr))
		return 1;

	return 0;
}


int sb2_timeout_handler(unsigned long addr, unsigned int fsr, struct pt_regs *regs)
{
        int sb2_intstat = 0;
        //int emcu_to_stat = 0;
        //struct siginfo info;
        char sb2_module_name_all[64] = {0};

        //System CPU issued an invalid address access
        sb2_intstat = rtd_inl(SB2_INV_INTSTAT_reg);
#if 0
        emcu_to_stat = rtd_inl(0xb8060400) & (0xf << 28);

        /* check sb2 timeout or emcu timeout */
        if(!(sb2_intstat & BIT(1)) && (emcu_to_stat == 0))
                return 1;
#endif
        /* check address that could be ignored. */
        if (sb2_buserr_ignore(addr)) {
        	// ack timeout state
        	if (sb2_intstat & BIT(1))
        	{
        		rtd_outl(SB2_INV_INTSTAT_reg, BIT(1)); //write out clear
        	}

        	// return 0xdeaddead for read instruction
        	if ((fsr & BIT(11)) == 0) {
        		if (do_rbusto_fake_read(addr, fsr, regs) != 0)
        			goto bus_err;
        		else
        			return 0;
        	}

        	// ignore OK, and go forward
#ifdef CONFIG_ARM64
        	regs->pc += 4;
#else
        	regs->ARM_pc += 4;
#endif
        	return 0;
        }

bus_err:
        timeout_info.isTimeout = 1;
        timeout_info.timeout_reg = rtd_inl(SB2_INV_ADDR_reg);

        get_sb2_module_all(timeout_info.timeout_reg, sb2_module_name_all, sizeof(sb2_module_name_all));

        pr_err("\nYou have accessed an reserved register address :   \e[1;31m0x%x\e[0m \e[1;34m%s\e[0m\n\n", rtd_inl(SB2_INV_ADDR_reg), sb2_module_name_all);
        pr_err("\n Timeout status 0x%08x:0x%08x \n", SB2_INV_INTSTAT_reg, rtd_inl(SB2_INV_INTSTAT_reg));

	// ack timeout state and print debug info
        if (sb2_intstat & BIT(1)){
		rtd_outl(SB2_INV_INTSTAT_reg, BIT(1)); //write out clear
		sb2_rbus_timeout_info();
        }

        //force to trigger a kernel panic in kernel mode
        panic_on_oops = 1;
        if(panic_on_oops)
        {
                rtd_save_keylog(KERN_ERR,"SB2_TIMEOUT","\n Timeout status 0x%08x:0x%08x, module:%s \n",
                        SB2_INV_INTSTAT_reg, rtd_inl(SB2_INV_INTSTAT_reg),sb2_module_name_all);
        }

        if ((fsr & 0x1800) == 0x1800) { // imprecise write abort
        	addr = rtd_inl(SB2_INV_ADDR_reg) - 0x18000000 + RBUS_BASE_VIRT;
        	///regs->ARM_pc -= 8;
        }

        pr_alert("\n\nrbus timeout:  (0x%03x) at 0x%08lx \n",  fsr, addr);
        if ((fsr & 0x1800) == 0x1800) { // imprecise write abort
        	printk("This imprecise data abort is due to rbus write transaction timeout. \n");
        	printk("Please add a dsb() immediately after each rbus 0x%08lx write transaction, and test again. \n", addr);
        	printk("When exception happening, DSB will stop and indicate which rbus write is invalid. \n\n\n");
        }

        atomic_notifier_call_chain(&sb2_notifier_list, 0, NULL);
        memset(&timeout_info, 0, sizeof(timeout_info));

        return 3;
}

int sb2_dbg3_handler (void)
{
    int loop_cnt = 0;
    int dbg3_wdata_value;
    int dbg3_cpu_value;
    int dbg3_int_value = 0;
    int dbg3_0_value = 0;
    int dbg3_1_value = 0;
    int dbg3_2_value = 0;

    //SCPU issued an invalid address access
    dbg3_int_value = rtd_inl(SB2_DBG3_INT_reg);
    //check bit monitor addr
    dbg3_cpu_value = rtd_inl(SB2_DBG3_CPU_2_reg)&0x3;
    //check bit monitor wdata
    dbg3_wdata_value = rtd_inl(SB2_DBG3_WDATA_2_reg);
    //check dbg3 0 1 2
    dbg3_0_value = rtd_inl(SB2_DBG3_0_0_reg + dbg3_cpu_value*4);
    dbg3_0_value = (dbg3_0_value & 0x1fffff) | 0x18000000;
    dbg3_1_value = rtd_inl(SB2_DBG3_1_0_reg + dbg3_cpu_value*4);
    dbg3_2_value = rtd_inl(SB2_DBG3_2_0_reg + dbg3_cpu_value*4);

    pr_err("\n\n\n\n\n");
    pr_err("\n[Memory trash] (SB2 bit monitor) SCPU invalid write 0x%08x to register \e[1;31m0x%08x\e[0m ! (0x%08x|0x%08x)\n",
           dbg3_wdata_value,dbg3_0_value,dbg3_1_value,dbg3_2_value);
    pr_err("\n\n\n\n\n");

    for(loop_cnt = 0; loop_cnt < 3; ++loop_cnt)
    {
        pr_err("\n\n\n\nLoop dump info %d/%d\n",loop_cnt+1,3);
        dump_sb2_bit_monitor_set_info(NULL,0);
        dump_sb2dbg_bit_monitor_regval();
    }

    pr_err("[Memory trash]dump_stacks (SB2 bit monitor) loop 1/2(may diff with dump_stacks 2/2)\n");
    dump_stacks();//dump stack 1/2
    pr_err("\n\n\n\n\n");
    pr_err("[Memory trash]dump_stacks (SB2 bit monitor) loop 2/2(may diff with dump_stacks 1/2)\n");
    dump_stacks();//dump stack 2/2

    //clear the SB2 scpu dbg interrupt flag
    rtd_outl(SB2_DBG3_INT_reg, BIT(4));
    pr_debug("SB2_DBG3_INT_reg=%x\n", rtd_inl(SB2_DBG3_INT_reg));

    if(sb2_dbg_kernel_trap_warning == 1)
    {
        rtd_save_keylog(KERN_ERR,"SB2_DBG3","\n[Memory trash](%s) (sb2 bit monitor) SCPU invalid write 0x%x to register 0x%08x ! (0x%08x|0x%08x)\n\n",
                        __FUNCTION__,dbg3_wdata_value,dbg3_0_value,dbg3_1_value,dbg3_2_value);
        panic("[Memory trash] SB2 bit monitor detected ... \n");

    }
    return 0;
}

int sb2_dbg_handler (void)
{
        int value = 0;
        unsigned int dbg_addr = 0;
        void* v_addr = NULL;
        unsigned int v_addr_value = 0;
        //unsigned int int_setting = 0;
        int data_instruction;
        int write_read;
        int loop_cnt = 0;

        //SCPU or ACPU,VCPU issued an invalid address access
        value = rtd_inl(SB2_DBG_INT_reg);
#if 0
        //DBG_DFT("rtd_inl(SB2_DBG_INT_reg);: 0x%x", rtd_inl(SB2_DBG_INT_reg));
        if(!(value & BIT(10))) { //TODO:ALL CPU INTR BIT
                return IRQ_NONE;
        }
#endif
        dbg_addr = rtd_inl(SB2_DBG_ADDR_2_reg);

        data_instruction = rtd_inl(SB2_DBG_ADDR1_reg)&BIT(2);
        write_read = rtd_inl(SB2_DBG_ADDR1_reg)&BIT(3);
        pr_err("\n[Memory trash](%s) SCPU have %s %s invalid.  SB2 reserved address is \e[1;31m0x%x\e[0m\n\n",
               __FUNCTION__,write_read ? "write" : "read", data_instruction ? "data" : "instruction",
               dbg_addr);

        pr_err("[Memory trash]dump_stacks loop 1/2(may diff with dump_stacks 2/2)\n");
        dump_stacks();//dump stack 1/2
        pr_err("\n\n\n\n\n");
        pr_err("[Memory trash]dump_stacks loop 2/2(may diff with dump_stacks 1/2)\n");
        dump_stacks();//dump stack 2/2

        v_addr = ioremap(dbg_addr, 4);
        //DBG_DFT(" v_addr :  0x%x\n", v_addr);
        v_addr_value = rtd_inl((long unsigned int)v_addr);
        iounmap(v_addr);

        for(loop_cnt = 0; loop_cnt < 3; ++loop_cnt)
        {
                pr_err("\n\n\n\nLoop dump info %d/%d\n",loop_cnt+1,3);
                pr_err("[Memory trash] grep value:"FYELLOW_START"0x%08x"FCOLOR_END"@"FRED_START"0x%08x"FCOLOR_END"\n", v_addr_value, dbg_addr);
                dump_set_info(NULL,0);
                dump_sb2dbg_regval();
                //sb2_rbus_timeout_info();
        }

        //clear the SB2 scpu dbg interrupt flag
        rtd_outl(SB2_DBG_INT_reg, BIT(10));
        pr_debug("SB2_DBG_INT_reg=%x\n", rtd_inl(SB2_DBG_INT_reg));
        if(sb2_dbg_kernel_trap_warning == 1)
        {
                rtd_save_keylog(KERN_ERR,"SB2_DBG","\n[Memory trash](%s) SCPU have %s %s invalid.  SB2 reserved address is \e[1;31m0x%x\e[0m\n\n",
                        __FUNCTION__,write_read ? "write" : "read", data_instruction ? "data" : "instruction",
                        dbg_addr);
                panic("[Memory trash] SB2 dbg monitor detected ... \n");

        }
        return 0;
}

int find_free_dbg_register (void)
{
        int i;

        for (i = 0; i < 16; i++) {
                if( (dbg_flag >> i & 0x1) == 0) {
                        return i;
                }
        }
        return -1;
}

// cpu_id -->   0:all 1:a 2:v 3:s 4:v2 5:k 6:a2
// 1800_0000~1810_0000  rbus  0000_0000~1800_0000   dbus
int sb2_dbg_clear (sb2_dbg_param *pParam)
{
        int set_id ;
        int id ;
        unsigned int str_id ;

        unsigned int ctrl_reg;
        unsigned int sb2dbg_final_clear = BIT(19) | BIT(17) | BIT(15) | BIT(13) | BIT(11) | BIT(9) | BIT(7) | BIT(4);

        if(!pParam) {
                pr_err("sb2 dbg set failed, pParam is NULL!\n");
                return -1;
        }

        set_id = pParam->set_id;
        id = set_id - 1;
        str_id = pParam->str;
        if(id < 0) {
                pr_err("sb2 dbg set failed, invalid argument - dbg set id is %d\n", set_id);
                return -1;
        }
        
        ctrl_reg = get_SB2_DBG_CTRL_register(id);

        rtd_outl(ctrl_reg, sb2dbg_final_clear);
        rtd_outl(get_SB2_DBG_START_register(id), 0);
        rtd_outl(get_SB2_DBG_END_register(id), 0);

        //DBG_YELLOW("%d: reg(0x%x): 0x%x, sb2dbg_final_clear:0x%x\n",  id + 1, ctrl_reg, rtd_inl(ctrl_reg), sb2dbg_final_clear);
        dbg_flag = dbg_flag & (~(1 << id));
        if(str_id == STR_FLAG_YES) {
                str_support_flag = str_support_flag & (~(1 << id));
        }
        return 0;
}

// cpu_id -->   0:all 1:a 2:v 3:s 4:v2 5:k 6:a2
// 1800_0000~1810_0000  rbus  0000_0000~1800_0000   dbus
int sb2_dbg_monitor (sb2_dbg_param *pParam)
{

        unsigned int start ;
        unsigned int end ;
        unsigned int *cpu_id ;
        int set_id ;
        unsigned int rw_id ;
        unsigned int str_id ;
        int i = 0;
        //debug set 1 for scpu access invalid rbus register test:  0x1805_d000 ~ 0x1805_e000

        unsigned int start_reg;
        unsigned int end_reg;
        unsigned int ctrl_reg;
        unsigned int dbg_recnt = 0x3;

        //unsigned int bitmoni_reg;

        // 0:all 1:a 2:v 3:s 4:v2 5:k 6:a2
        unsigned int cpu_set_bit[7] = {
                BIT(19) | BIT(18) | BIT(17) | BIT(16) | BIT(15) | BIT(14) | BIT(13) | BIT(12) | BIT(11) | BIT(10) | BIT(9) | BIT(8),
                BIT(13) | BIT(12),
                BIT(11) | BIT(10),
                BIT(9) | BIT(8),
                BIT(15) | BIT(14),
                BIT(17) | BIT(16),
                BIT(19) | BIT(18),
        };
        // 0:rw 1:r 2:w
        unsigned int rw_set_bit[3] = {
                BIT(7) | BIT(6) | BIT(5),
                BIT(7) | BIT(5),
                BIT(7) | BIT(6)
        };
        // 0:data&instruction 1:data 2:instruction
        unsigned int di_set_bit[3] = {
                BIT(4) | BIT(3) | BIT(2),
                BIT(4) | BIT(2),
                BIT(4) | BIT(3)
        };

        unsigned int cpu_final_set_bit = 0;
        unsigned int sb2dbg_final_set = 0;
        unsigned int sb2dbg_final_clear = BIT(19) | BIT(17) | BIT(15) | BIT(13) | BIT(11) | BIT(9) | BIT(7) | BIT(4);

#if 0
        int id = find_free_dbg_register();
#else
        int id;
#endif

        if(!pParam) {
                pr_err("sb2 dbg set failed, invalid argment - pParam is NULL\n");
                return -1;
        }

        start = pParam->start;
        end = pParam->end;
        cpu_id = pParam->cpu_flag;
        set_id = pParam->set_id;
        rw_id = pParam->rw;
        str_id = pParam->str;

        id = set_id - 1;
        if((id < 0) || (id > 15)) {
                pr_err("sb2 dbg set failed, invalid argument - dbg set id is %d\n", set_id);
                return -1;
        }

        start_reg = get_SB2_DBG_START_register(id);
        end_reg = get_SB2_DBG_END_register(id);
        ctrl_reg = get_SB2_DBG_CTRL_register(id);


        rtd_outl(ctrl_reg, sb2dbg_final_clear); //clear dbg range first
        rtd_outl(start_reg, start);  //set dbg range
        rtd_outl(end_reg, end);
        //set cpu types
        for(i = 0; i < 7; ++i) {
                //pr_err("[%d] i:%d cpu_set_bit[i]: %x\n", id,i, cpu_set_bit[i]);

                if(cpu_id[i]==1) {
                        cpu_final_set_bit |= cpu_set_bit[i];
                        //pr_err("[%d] i:%d cpu_final_set_bit: %x\n",id, i, cpu_final_set_bit);
                }
        }

        sb2dbg_final_set = cpu_final_set_bit | rw_set_bit[rw_id] | di_set_bit[0] | dbg_recnt;
        //pr_err("[%d] sb2dbg_final_set: %x\n", id,sb2dbg_final_set);
        rtd_outl(ctrl_reg, sb2dbg_final_set);



        //  DBG_YELLOW("%d: sb2dbg_final_set: 0x%x, start: 0x%x,  end:0x%x\n",  id+1, sb2dbg_final_set, start, end);

//    DBG_YELLOW("%d: ctrl_reg(0x%x): 0x%x, start_reg(0x%x): 0x%x,  end_reg(0x%x): 0x%x\n",  id+1, ctrl_reg,rtd_inl(ctrl_reg), start_reg,rtd_inl(start_reg),end_reg,rtd_inl(end_reg));

        dbg_flag = dbg_flag | (1 << id);
        if(str_id == STR_FLAG_YES) {
                str_support_flag = str_support_flag | (1 << id);
        } else {
                str_support_flag = str_support_flag & (~(1 << id));
        }
        sb2_set_id = (set_id%16) +1;
        return 0;
}

int sb2_dbg_bit_clear (sb2_dbg_bit_param *pParam)
{
        int set_id;
        int id;
        //unsigned int str_id = pParam->str;

        unsigned int sb2dbg3_final_clear = SB2_DBG3_CTRL_0_write_en4_mask | SB2_DBG3_CTRL_0_write_en3_mask | 
            SB2_DBG3_CTRL_0_write_en2_mask |SB2_DBG3_CTRL_0_write_en1_mask;

        if(!pParam) {
                pr_err("sb2 dbg set failed, invalid argument - pParam is NULL\n");
                return -1;
        }

        set_id = pParam->set_id;
        id = set_id - 1;
        if(id < 0) {
                pr_err("sb2 dbg set failed, invalid argument - dbg set id is %d\n", set_id);
                return -1;
        }

        rtd_outl(get_SB2_DBG3_CTRL_register(id), sb2dbg3_final_clear);
        rtd_outl(get_SB2_DBG3_0_register(id), 0);
        rtd_outl(get_SB2_DBG3_1_register(id), 0);
        rtd_outl(get_SB2_DBG3_2_register(id), 0);

        //DBG_YELLOW("%d: reg(0x%x): 0x%x, sb2dbg_final_clear:0x%x\n",  id + 1, ctrl_reg, rtd_inl(ctrl_reg), sb2dbg3_final_clear);
        if(pParam->str == STR_FLAG_YES) {
                str_support_dbg3_flag = str_support_dbg3_flag & (~(1 << id));
        }
        
        return 0;
}

//c0108000 T _text IRQ_DCSYS IRQ_SECURE_SB2
extern char _text[], _stext[], _etext[];
extern pgd_t swapper_pg_dir[];
void __init sb2_dbg_intr_setup (void)
{
#if 0
        /* Request IRQ */
        if(request_irq(IRQ_DCSYS,
                       sb2_dbg_intr,
                       IRQF_SHARED,
                       "SB2_DBG",
                       sb2_dbg_intr)) {
                printk(KERN_ERR "SB2 DBG: cannot register IRQ %d\n", IRQ_SECURE_SB2);
                return ;
        }

        //enable sb2 dbg interrupt
        rtd_outl(SB2_DBG_INT_reg, (BIT(7) | BIT(0)));

        printk("@sb2_dbg_intr_setup:    enable sb2 dbg interrupt [reserved rbus OR dbus address]\n");
#endif
        return;
}

void __init sb2_dbg_latch_setup (void)
{
        //only latches first illegal address
        //rtd_outl(SB2_DBG_CTRL2_reg, (BIT(5) | BIT(4) | BIT(3) | BIT(2) | BIT(1) | BIT(0)));

        //latche each illegal address
        rtd_outl(SB2_DBG_CTRL2_reg, 0);
}

int  hw_monitor_get_info(char * buf, int ofst);
//cat /sys/realtek_boards/sb2_dbg
int sb2_dbg_get_info (char * buf)
{
        int len = 0;

        len += hw_monitor_get_info(buf,len);//this line is only use for [ rtd-tool -> hw_monitor ]

#if 0
        len += dump_help_info(buf, len);
#endif

        len += dump_set_info(buf, len);
        len += dump_sb2_bit_monitor_set_info(buf, len);

        len += dump_sb2dbg_misc_info(buf, len);

        return len;
}

void sb2_dbg_get (void)
{
        //dump_help_info();
        //dump_set_info();
#if 0
        dump_block_info();
#endif
        //dump_sb2dbg_misc_info();
}

//echo "10800000,10c97000,no_match_in_range,ALL" > /sys/realtek_boards/sb2_dbg
//echo "18061500,18061600,match_in_range,scpu" > /sys/realtek_boards/sb2_dbg
void dump_sb2_dbg_param(sb2_dbg_param * pParam)
{
        if (!pParam) {
                pr_err("pParam is NULL\n");
                return ;
        }

        DBG_DFT("\ndump sb2 dbg setting cmd:\n");
        DBG_DFT("set_id:%d\n", pParam->set_id);
        DBG_DFT("option:%d (0:monitor 1:clear 2:hack_on 3:hack_off 4:block)\n", pParam->operation);
        DBG_DFT("cpu flag:(all:%d a:%d v:%d s:%d v2:%d k:%d a2:%d)\n",
                pParam->cpu_flag[0], pParam->cpu_flag[1], pParam->cpu_flag[2],
                pParam->cpu_flag[3], pParam->cpu_flag[4], pParam->cpu_flag[5], pParam->cpu_flag[6]);
        DBG_DFT("start addr:0x%08x\n", pParam->start);
        DBG_DFT("end addr:0x%08x\n", pParam->end);
        DBG_DFT("rw flag:%d(0:rw 1:r 2:w)\n", pParam->rw);
        DBG_DFT("str flag:%s\n", (pParam->str == STR_FLAG_YES) ? "Support STR" : "Not support STR");
}

int get_cputype_id(const char * cpu)
{
        int return_id = -1;
        if (!cpu) {
                pr_err("invalid param. cpu is 0\n");
                return -1;
        }

        if (strcmp(cpu, "all") == 0) {
                return_id = CPU_TYPE_ALL;
        } else if (strcmp(cpu, "acpu") == 0) {
                return_id = CPU_TYPE_ACPU;
        } else if (strcmp(cpu, "vcpu") == 0) {
                return_id = CPU_TYPE_VCPU;
        } else if (strcmp(cpu, "scpu") == 0) {
                return_id = CPU_TYPE_SCPU;
        } else {
                pr_err("invalid cpu type - %s\n", cpu);
                return -1;
        }

        return return_id;
}

int split_str(char * str, char split_flag, char out_str[][16], int max_cnt)
{
        int num = 0;
        int i;
        int start;
        int end;
        if((str == NULL) || (out_str == NULL)) {
                return -1;
        }
        //get strings
        for(start = 0, end = 0; str[end] != '\0'; ++end) {
                if(str[end] == split_flag) {
                        if(start < end) { // if any char between start-end range;
                                for(i = 0; start < end; start++, i++) { // copy string
                                        out_str[num][i] = str[start];
                                }
                                start = end + 1; //ignore the split str;
                                num++;
                                if(num >= max_cnt) {
                                        return num;
                                }
                        } else {
                                start = end + 1; //ignore the split str;
                        }
                }
        }
        //get last string
        if(start < end) { // if any char between start-end range;
                for(i = 0; start < end; start++, i++) {
                        out_str[num][i] = str[start];
                }
                num++;
        }

        return num;
}

int parse_set_field(char * field_str, sb2_dbg_param * pParam)
{
        if((field_str == NULL) || (pParam == NULL)) {
                pr_err("set_field is NULL\n");
                return -1;
        }

        if (sscanf(field_str, "set%d", &pParam->set_id) < 1) {
                pr_err("parse set_field fail!\n");
                return -1;
        }
        if((pParam->set_id <= 0) || (pParam->set_id > 16)) {
                pr_err("unexpected set id,expected range[1-16]!\n");
                return -1;
        }

        return 0;
}

int parse_operation_field(char * field_str, sb2_dbg_param * pParam)
{
        if((field_str == NULL) || (pParam == NULL)) {
                pr_err("operation_field is NULL\n");
                return -1;
        }

        if(strcmp(field_str, "monitor") == 0) {
                pParam->operation = OPERA_MONITOR;
        } else if(strcmp(field_str, "clear") == 0) {
                pParam->operation = OPERA_CLEAR;
        } else if(strcmp(field_str, "hack_on") == 0) {
                pParam->operation = OPERA_HACKON;
        } else if(strcmp(field_str, "hack_off") == 0) {
                pParam->operation = OPERA_HACKOFF;
        } else if(strcmp(field_str, "block") == 0) {
                pParam->operation = OPERA_BLOCK;
        } else if(strcmp(field_str, "non-block") == 0) {
                pParam->operation = OPERA_NONBLOCK;
        } else if(strcmp(field_str, "trap-toggle") == 0) {
                pParam->operation = OPERA_TRAP_TOGGLE;
        } else {
                pr_err("unexpected operation:%s!\n", field_str);
                return -1;
        }

        return 0;
}

int parse_cpu_field(char * field_str, sb2_dbg_param * pParam)
{
        char cpu_str[7][16] = {{0}};
        int cpu_num = 0;
        int cpu_id = 0;
        int i;

        memset(cpu_str, '\0', sizeof(cpu_str));
        
        if((field_str == NULL) || (pParam == NULL)) {
                pr_err("cpu_field is NULL\n");
                return -1;
        }

        //only monitor need cpu_field
        if(pParam->operation != OPERA_MONITOR) { // non-monitor operation don't need this field.
                return 0;
        }

        cpu_num = split_str(field_str, ',', cpu_str, 7);
        if((cpu_num <= 0) || (cpu_num > 7)) { //no cpu or too many cpus
                pr_err("unexpected cpu type num,expected between [1-7],actual:%d!\n", cpu_num);
                return -1;
        }

        for(i = 0; i < 7; i++) 
        {
            pParam->cpu_flag[i] = 0;
        }
        
        for(i = 0; i < cpu_num; ++i) { //parse cpu id
                cpu_str[i][15] = '\0';
                cpu_id = get_cputype_id(&cpu_str[i][0]);
                if(cpu_id != -1) {
                        pParam->cpu_flag[cpu_id] = 1;
                }
        }

        return 0;
}

int parse_range_field(char * field_str, sb2_dbg_param * pParam)
{
        char addr_str[2][16] = {{0}};

        memset(addr_str, '\0', sizeof(addr_str));

        //check input
        if((field_str == NULL) || (pParam == NULL)) {
                pr_err("range_field is NULL\n");
                return -1;
        }

        if((pParam->operation != OPERA_MONITOR) && (pParam->operation != OPERA_BLOCK)) { // non-monitor operation don't need this field.
                return 0;
        }

        if(split_str(field_str, '-', addr_str, 2) != 2) {
                pr_err("unexpected addr param,excepted start_addr-end_addr!\n");
                return -1;
        }

        addr_str[0][15] = '\0';
        if(sscanf(&addr_str[0][0], "%x", &pParam->start) < 1) {
                pr_err("parse start range fail\n");
                return -1;
        }

        addr_str[1][15] = '\0';
        if(sscanf(&addr_str[1][0], "%x", &pParam->end) < 1) {
                pr_err("parse end range fail\n");
                return -1;
        }

        if((pParam->start) > (pParam->end))
        {
                pr_err("sb2 set fail, MT start range:0x%08x > end range:0x%08x\n",pParam->start,pParam->end);
                return -1;
        }
        return 0;
}

int parse_rw_flag(char * flag_str, sb2_dbg_param * pParam)
{
        if(flag_str == NULL) {
                pParam->rw = RW_FLAG_DFT;//default value
                return 0;
        }

        if(strcmp(flag_str, "r") == 0) {
                pParam->rw = RW_FLAG_RO;
        } else if(strcmp(flag_str, "w") == 0) {
                pParam->rw = RW_FLAG_WO;
        } else if(strcmp(flag_str, "rw") == 0) {
                pParam->rw = RW_FLAG_RW;
        } else {
                pr_err("unexpected rw param!\n");
                return -1;
        }

        return 0;
}

int parse_str_flag(char * flag_str, sb2_dbg_param * pParam)
{
        if(flag_str == NULL) {
                pParam->str = STR_FLAG_DFT;//default value
                return 0;
        }

        if(strcmp(flag_str, "str") == 0) {
                pParam->str = STR_FLAG_YES;
        } else if(strcmp(flag_str, "nstr") == 0) {
                pParam->str = STR_FLAG_NO;
        } else {
                pr_err("unexpected str param!\n");
                return -1;
        }

        return 0;
}

int parse_opt_field(char * field_str, sb2_dbg_param * pParam)
{
        char opt_param[4][16] = {{0}};

        memset(opt_param, '\0', sizeof(opt_param));
        //check input
        if((field_str == NULL) || (pParam == NULL)) {
                pr_err("opt_field is NULL\n");
                return -1;
        }
        if(field_str[0] == '\0') { //use default param
                pParam->rw = RW_FLAG_DFT;
                pParam->str = STR_FLAG_DFT;
                return 0;
        }
        //split&parse flags
        if(split_str(field_str, ',', opt_param, 2) != 2) {
                pr_err("too less option param,expected:[rw,str]!\n");
                return -1;
        }
        //get read/write flag
        opt_param[OPT_RW][15] = '\0';
        if(parse_rw_flag(opt_param[OPT_RW], pParam)) {
                pr_err("parse opt_field:rw_flag fail\n");
                return -1;
        }

        //get str flag
        opt_param[OPT_STR][15] = '\0';
        if(parse_str_flag(opt_param[OPT_STR], pParam)) {
                pr_err("parse opt_field:str_flag fail\n");
                return -1;
        }

        return 0;
}

int parse_bit_field(char * field_str, sb2_dbg_param * pParam)
{
        if(pParam->operation != OPERA_MONITOR) { // non-monitor operation don't need this field.
                return 0;
        }

        if(sscanf(field_str, "%x", &pParam->bit_mask) < 1) {
                pr_err("no bit mask value, use default value 0\n");
                pParam->bit_mask = 0;	//use default value
        }

        return 0;
}

void opera_hackon(void)
{
        printk("Dbg intr bit now:0x%08x\n", rtd_inl(SB2_DBG_INT_reg));
        if(sb2hack_intr_bit == 0) { // check if not hack_on now...
                sb2hack_intr_bit = rtd_inl(SB2_DBG_INT_reg);
                rtd_outl(SB2_DBG_INT_reg, BIT(25) | BIT(9) | BIT(8) | (BIT(7) | BIT(0)));
                printk("Hack ON Finish.Dbg Intr bit:0x%08x\n", rtd_inl(SB2_DBG_INT_reg));
        } else { // if hack_on already
                printk("Hack operation is ON already.Do nothing for now.\n");
        }
}

void opera_hackoff(void)
{
        printk("Dbg intr bit now:0x%08x\n", rtd_inl(SB2_DBG_INT_reg));
        if(sb2hack_intr_bit != 0) { // check if not hack_off now...
                printk("sb2hack_intr_bit:0x%08x\n", sb2hack_intr_bit);
                rtd_outl(SB2_DBG_INT_reg, (~sb2hack_intr_bit) & (~BIT(0)));
                printk("Hack OFF Finish.Dbg Intr bit:0x%08x\n", rtd_inl(SB2_DBG_INT_reg));
                sb2hack_intr_bit = 0;
        } else { // if hack_off already
                printk("Hack operation is OFF already.Do nothing for now.\n");
        }
}

void opera_trap_toggle(void)
{
        if(sb2_dbg_kernel_trap_warning == 1)
        {
                sb2_dbg_kernel_trap_warning = 0;
        }
        else
        {
                sb2_dbg_kernel_trap_warning = 1;
        }

        printk("sb2_dbg_kernel_trap_warning toggle to %d\n",sb2_dbg_kernel_trap_warning);
}

int parse_cmdline(const char * buffer, sb2_dbg_param * pParam)
{
        char set_field[8] = {0};
        char operation_field[8] = {0};
        char cpu_field[48] = {0};
        char range_field[24] = {0};
        char opt_field[24] = {0};
        //char bit_field[16] = {0};

        if((buffer == NULL) || (pParam == NULL)) {
                pr_err("use NULL input param!\n");
                goto Fail;
        }

        DBG_DFT("sb2_dbg receive cmd:%s\n", buffer);
        //get options
        if (sscanf(buffer, "%s %s %s %s %s ", set_field, operation_field, cpu_field, range_field, opt_field) < 1) {
                pr_err("get cmdline fail!\n");
                goto Fail;
        }

        if(parse_set_field(set_field, pParam)) {
                pr_err("parse set_field fail!\n");
                goto Fail;
        }

        if(parse_operation_field(operation_field, pParam)) {
                pr_err("parse operation_field fail!\n");
                goto Fail;
        }

        if(parse_cpu_field(cpu_field, pParam)) {
                pr_err("parse cpu_field fail!\n");
                goto Fail;
        }

        if(parse_range_field(range_field, pParam)) {
                pr_err("parse range_field fail!\n");
                goto Fail;
        }

        if(parse_opt_field(opt_field, pParam)) {
                pr_err("parse opt_field fail!\n");
                goto Fail;
        }

        //if(parse_bit_field(bit_field, pParam))
        //{
        //        pr_err("parse bit_field fail!\n");
        //        goto Fail;
        //}

        return 0;

Fail:
        pr_err("[sb2 debug driver]parse param fail!\n");
        return -1;
}
#if 0
int sb2_block_set_range(unsigned int id, unsigned int start, unsigned int end)
{
        unsigned int ctrl_val = rtd_inl(SB2_RBUS_INVA_ACC_CTRL_reg);

        id -= 1;
        //check id
        if(id >= 4)
                return -1;

        //check range: between 0x1800_0000-0x1840_0000 or 0xB800_0000_0xB840_0000
        if(((start >= 0x18000000) && (start <= 0x18400000)) || ((start >= 0xB8000000) && (start <= 0xB8400000))) {
                start = start >> 2;
        } else {
                pr_err("sb2 block, start address(0x%08x) error!\n", start);
                return -1;
        }
        if(((end >= 0x18000000) && (end <= 0x18400000)) || ((end >= 0xB8000000) && (end <= 0xB8400000))) {
                end = end >> 2;
        } else {
                pr_err("sb2 block, start address(0x%08x) error!\n", start);
                return -1;
        }

        switch(id) {
                case 0:
                        ctrl_val &= ~BIT(0);
                        rtd_outl(SB2_RBUS_INVA_ACC_CTRL_reg, ctrl_val);
                        rtd_outl(SB2_RBUS_INVA_ACC_SEC1_START_reg, start);
                        rtd_outl(SB2_RBUS_INVA_ACC_SEC1_END_reg, end);
                        ctrl_val |= BIT(0);
                        rtd_outl(SB2_RBUS_INVA_ACC_CTRL_reg, ctrl_val);
                        break;
                case 1:
                        ctrl_val &= ~BIT(2);
                        rtd_outl(SB2_RBUS_INVA_ACC_CTRL_reg, ctrl_val);
                        rtd_outl(SB2_RBUS_INVA_ACC_SEC2_START_reg, start);
                        rtd_outl(SB2_RBUS_INVA_ACC_SEC2_END_reg, end);
                        ctrl_val |= BIT(2);
                        rtd_outl(SB2_RBUS_INVA_ACC_CTRL_reg, ctrl_val);
                        break;
                case 2:
                        ctrl_val &= ~BIT(4);
                        rtd_outl(SB2_RBUS_INVA_ACC_CTRL_reg, ctrl_val);
                        rtd_outl(SB2_RBUS_INVA_ACC_SEC3_START_reg, start);
                        rtd_outl(SB2_RBUS_INVA_ACC_SEC3_END_reg, end);
                        ctrl_val |= BIT(4);
                        rtd_outl(SB2_RBUS_INVA_ACC_CTRL_reg, ctrl_val);
                        break;
                case 3:
                        ctrl_val &= ~BIT(6);
                        rtd_outl(SB2_RBUS_INVA_ACC_CTRL_reg, ctrl_val);
                        rtd_outl(SB2_RBUS_INVA_ACC_SEC4_START_reg, start);
                        rtd_outl(SB2_RBUS_INVA_ACC_SEC4_END_reg, end);
                        ctrl_val |= BIT(6);
                        rtd_outl(SB2_RBUS_INVA_ACC_CTRL_reg, ctrl_val);
                        break;
                default:
                        break;
        }

        rtd_outl(SB2_INTEN_SCPU_reg, (BIT(1) | BIT(0)));
        return 0;
}

void sb2_block_clear_range(unsigned int id)
{
        unsigned int ctrl_val = rtd_inl(SB2_RBUS_INVA_ACC_CTRL_reg);

        id -= 1;
        //check id
        if(id >= 4)
                return;

        switch(id) {
                case 0:
                        ctrl_val &= ~BIT(0);
                        break;
                case 1:
                        ctrl_val &= ~BIT(2);
                        break;
                case 2:
                        ctrl_val &= ~BIT(4);
                        break;
                case 3:
                        ctrl_val &= ~BIT(6);
                        break;
                default:
                        break;
        }
        rtd_outl(SB2_RBUS_INVA_ACC_CTRL_reg, ctrl_val);
}

/***************************RBUS BLOCKING FUNCTION*****************************/
/*total 4 set
**ctrl : SB2_RBUS_INVA_ACC_CTRL_reg
**start/end 4 set
       SB2_RBUS_INVA_ACC_SEC1_START_reg
       SB2_RBUS_INVA_ACC_SEC1_END_reg
**block cpu
       SB2_BL_CPU_reg
**intr enable
       SB2_INTEN_SCPU_reg
**intr inform scpu
       SB2_INTSTAT_SCPU_reg
*/

irqreturn_t sb2_block_intr(int irq, void *dev_id)
{
        int value = 0;
        unsigned char block_cpu = 0;
        unsigned int block_addr = 0;

        char* str_cpu[16] = {
                "kcpu",
                "acpu",
                "acpu2",
                "vcpu",
                "vcpu2",
                "scpu",
                "uart",
                "8051",
                "HIF",
                "demod",
                "rbusdma",
                "none",
                "unknown",
                "unknown",
                "unknown",
                "unknown"
        };

        //System CPU blocking intr status
        value = rtd_inl(SB2_INTSTAT_SCPU_reg);
        if(!(value & BIT(1)))
        {
                return IRQ_NONE;
        }

        //get block cpu id & addr
        value = rtd_inl(SB2_BL_CPU_reg);
        block_cpu = (value >> 24) & 0x0f;
        block_addr = value & 0x0fffff;

        //clear intr bit
        printk("[Memory Trash] sb2 block cpu:%d(%s), addr:block_addr(20bit):0x%08x\n", block_cpu, str_cpu[block_cpu], block_addr);
        rtd_outl(SB2_INTSTAT_SCPU_reg, (BIT(1) | BIT(0)));

        dump_stacks();//dump stack first
#if 0
        dump_sb2block_regval();
#endif
        sb2_rbus_timeout_info();

        panic("[Memory trash] SB2 dbg block detected ... \n");

        return IRQ_HANDLED;
}

void __init sb2_block_intr_setup(void)
{
        /* Request IRQ */
        if(request_irq(IRQ_DCSYS,
                       sb2_block_intr,
                       IRQF_SHARED,
                       "SB2_BLOCK",
                       sb2_block_intr)) {
                printk(KERN_ERR "SB2: cannot register IRQ %d\n", IRQ_DCSYS);
                return ;
        }

        //enable sb2 block interrupt
        rtd_outl(SB2_INTEN_SCPU_reg, (BIT(1) | BIT(0)));

        printk("@sb2_block_intr_setup:    enable sb2 block interrupt\n");
}

int sb2_dbg_block (sb2_dbg_param *pParam)
{
        return sb2_block_set_range(pParam->set_id, pParam->start, pParam->end);
}

void sb2_dbg_nonblock (sb2_dbg_param *pParam)
{
        sb2_block_clear_range(pParam->set_id);
}
#endif
#define isnumber(c)      (c>=0x30 && c<=0x39)
#define isalphabet(c)    (c>=0x41 && c<=0x5A) || (c>=0x61 && c<=0x7A)
#define isalnum(c)       (isnumber(c) || isalphabet(c))

static void print_reg_match_info(unsigned long  reg)
{
        char sb2_module_name_all[64] = {0};

        get_sb2_module_all(reg, sb2_module_name_all, sizeof(sb2_module_name_all));
        pr_err("register(%lx) matched module: %s\n", reg, sb2_module_name_all);
}

static void print_module_match_info(char * str)
{
        //char sb2_module_name_all[64] = {0};
        int module_num = sizeof(module_sb2_info) / sizeof(t_sb2_timout_moudle);
        int i, num = 1;

        for(i = 0; i < module_num; i++)
        {
                //if(strncpy(str, module_sb2_info[i].name, strlen(str)) == 0){
                if(strcmp(str, module_sb2_info[i].name) == 0)
                {
                        pr_err("module(%s) matched reg[%d]: [0x%lx-0x%lx]\n", str, num, module_sb2_info[i].addr_start, module_sb2_info[i].addr_end);
                        num++;
                }
        }
}

static int is_module_reg_match(char * str, unsigned long  reg)
{
        int i = 0;
        int module_num = sizeof(module_sb2_info) / sizeof(t_sb2_timout_moudle);

        for(i = 0; i < module_num; i++)
        {
                if((reg >= module_sb2_info[i].addr_start) && (reg <= module_sb2_info[i].addr_end))
                {
                        //pr_warning("moudel_name=%s\n",module_sb2_info[i].name);

                        if(strcmp(module_sb2_info[i].name, str) == 0)
                        {
                                //pr_warning("match moudel_name=%s\n",module_sb2_info[i].name);
                                return 0;
                        }
                }
        }
        return -1;//means match fail

}
static int callback_cmd_error(char * str)
{
        pr_err("####CALLBACK ERROR!!!####\n");
        pr_err("%s\n", str);
        return -2;
}
static int callback_cat_list(char* str)
{
        if(strncmp(str, "show_func", strlen("show_func")) == 0)
        {
                pr_err("----------SB2_TIMEOUT REGISTERED MOUDLES------------\n");
                atomic_notifier_call_chain(&sb2_notifier_list_cat, 0, NULL);
                pr_err("----------SB2_TIMEOUT SHOW MOUDLUES END-------------\n");
                return 0;
        }
        else
        {
                return -1;
        }
}
//echo "callback SB2,1801a6f4"> /sys/realtek_boards/sb2_dbg
//echo "callback show_func"> /sys/realtek_boards/sb2_dbg
//return: -1:fail not callback cmd, 0:success, other: fail but is callback cmd
static int parse_sb2_callback_cmd(const char * buffer)
{
        int ret = 0;
        char* argv[2];
        char* cmd = NULL;
        int argc = 0;

        if(strncmp(buffer, "callback", strlen("callback")) != 0)
        {
                return -1;
        }
        cmd = __find_next_str((char*)buffer + strlen("callback"));
        if(cmd == NULL)
        {
                return callback_cmd_error("Lack param");

        }
        argc = get_arguments((char*)cmd, 2, argv);

        if(callback_cat_list(argv[0]) == 0)     //command : cat
        {
                return 0;
        }
        if(argc < 2)    //command less 2
        {
                return callback_cmd_error("Lack param");
        }

        memset(&timeout_info, 0, sizeof(timeout_info)); //clear timeout info
        timeout_info.isTimeout = 1;
        if (sscanf(argv[1], "%lx", &timeout_info.timeout_reg) != 1)
        {
                ret = callback_cmd_error("set callback parameter failed, parse reg address failed\n");
                goto RET;
        }

        if(is_module_reg_match(argv[0], timeout_info.timeout_reg) == -1)  //module name not match register
        {
                pr_err("####CALLBACK ERROR!!!####\n");
                pr_err("%s and %lx not match\n", argv[0], timeout_info.timeout_reg);
                print_reg_match_info(timeout_info.timeout_reg);
                print_module_match_info(argv[0]);
                ret = -3;
                goto RET;
        }

        atomic_notifier_call_chain(&sb2_notifier_list, 0, NULL);
RET:
        memset(&timeout_info, 0, sizeof(timeout_info)); //clear timeout info
        return ret;
}

int parse_sb2_show_last_set(const char * buffer)
{
        char cpu_enables[128] = {0};
        int cpu_str_cnt = 0;
        //char* cpu_enable;
        char*read_write[] = {"R/W", "read", "write", "R/W"};
        char*data_instruction[] = {"data and instruction", "data", "instruction", "data and instruction"};
        char*str_support[] = {"non-STR", "STR"};
        unsigned int ctrl_reg;
        unsigned int start_reg;
        unsigned int end_reg;
        unsigned int ctrl_reg_value;
        unsigned int start_reg_value;
        unsigned int end_reg_value;
        unsigned int last_set_id = ((sb2_set_id-1)?(sb2_set_id-1):16) ;
        int i;

        if(strncmp(buffer, "show_set", strlen("show_set")) != 0)
        {
                return -1;
        }
        pr_err("===sb2 dbg setting===\n");
        for (i = 0; i < 16; i++)
        {
                memset(cpu_enables, '\0', sizeof(cpu_enables));
                cpu_str_cnt = 0;
                ctrl_reg = get_SB2_DBG_CTRL_register(i);
                start_reg = get_SB2_DBG_START_register(i);
                end_reg = get_SB2_DBG_END_register(i);
                // DBG_YELLOW("%d: ctrl_reg(0x%x): 0x%x, start_reg(0x%x): 0x%x,  end_reg(0x%x): 0x%x\n",  i+1, ctrl_reg,rtd_inl(ctrl_reg), start_reg,rtd_inl(start_reg),end_reg,rtd_inl(end_reg));

                ctrl_reg_value =  rtd_inl(ctrl_reg);
                start_reg_value =  rtd_inl(start_reg);
                end_reg_value =  rtd_inl(end_reg);

                if ((ctrl_reg_value & BIT(12)) && (ctrl_reg_value & BIT(10)) && (ctrl_reg_value & BIT(8)) && (ctrl_reg_value & BIT(16)) && (ctrl_reg_value & BIT(14)) && (ctrl_reg_value & BIT(18)))
                {
                        string_cpy_coher(cpu_enables, "[all]", &cpu_str_cnt, sizeof("[all]"));
                }
                else
                {
                        if (ctrl_reg_value & BIT(12))
                        {
                                string_cpy_coher(cpu_enables, "[A]", &cpu_str_cnt, sizeof("[A]"));
                        }
                        if (ctrl_reg_value & BIT(10))
                        {
                                string_cpy_coher(cpu_enables, "[V]", &cpu_str_cnt, sizeof("[V]"));
                        }
                        if (ctrl_reg_value & BIT(8))
                        {
                                string_cpy_coher(cpu_enables, "[S]", &cpu_str_cnt, sizeof("[S]"));
                        }
                        if (ctrl_reg_value & BIT(14))
                        {
                                string_cpy_coher(cpu_enables, "[V2]", &cpu_str_cnt, sizeof("[V2]"));

                        }
                        if (ctrl_reg_value & BIT(16))
                        {
                                string_cpy_coher(cpu_enables, "[K]", &cpu_str_cnt, sizeof("[K]"));
                        }

                        if (ctrl_reg_value & BIT(18))
                        {
                                string_cpy_coher(cpu_enables, "[A2]", &cpu_str_cnt, sizeof("[A2]"));
                        }
                        if (cpu_str_cnt == 0)
                        {
                                string_cpy_coher(cpu_enables, "no cpu", &cpu_str_cnt, sizeof("no cpu"));
                        }
                }
                cpu_enables[sizeof(cpu_enables) - 1] = '\0';
                if((i+1) == last_set_id){
                        pr_err("\e[1;33m[%02d] [%08x - %08x] %16s check enable,%8s,monitor %s (%s)\e[0m\n", i + 1,

                               rtd_inl(get_SB2_DBG_START_register(i)),
                               rtd_inl(get_SB2_DBG_END_register(i)),
                               cpu_enables,
                               str_support[str_support_flag >> i & 0x1],
                               data_instruction[ctrl_reg_value >> 2 & 0x3],
                               read_write[ctrl_reg_value >> 5 & 0x3]);
                }else{
                        pr_err("[%02d] [%08x - %08x] %16s check enable,%8s,monitor %s (%s)\n", i + 1,
                               rtd_inl(get_SB2_DBG_START_register(i)),
                               rtd_inl(get_SB2_DBG_END_register(i)),
                               cpu_enables,
                               str_support[str_support_flag >> i & 0x1],
                               data_instruction[ctrl_reg_value >> 2 & 0x3],
                               read_write[ctrl_reg_value >> 5 & 0x3]);

                }
        }

        return 0;

}

int sb2_show_last_set_only(void)
{
        char cpu_enables[128] = {0};
        int cpu_str_cnt = 0;
        //char* cpu_enable;
        char*read_write[] = {"R/W", "read", "write", "R/W"};
        char*data_instruction[] = {"data and instruction", "data", "instruction", "data and instruction"};
        char*str_support[] = {"non-STR", "STR"};
        unsigned int ctrl_reg;
        unsigned int start_reg;
        unsigned int end_reg;
        unsigned int ctrl_reg_value;
        unsigned int start_reg_value;
        unsigned int end_reg_value;
        unsigned int last_set_id = ((sb2_set_id-1)?(sb2_set_id-1):16) ;
        int i;

        for (i = 0; i < 16; i++)
        {
                memset(cpu_enables, '\0', sizeof(cpu_enables));
                cpu_str_cnt = 0;
                ctrl_reg = get_SB2_DBG_CTRL_register(i);
                start_reg = get_SB2_DBG_START_register(i);
                end_reg = get_SB2_DBG_END_register(i);
                // DBG_YELLOW("%d: ctrl_reg(0x%x): 0x%x, start_reg(0x%x): 0x%x,  end_reg(0x%x): 0x%x\n",  i+1, ctrl_reg,rtd_inl(ctrl_reg), start_reg,rtd_inl(start_reg),end_reg,rtd_inl(end_reg));

                ctrl_reg_value =  rtd_inl(ctrl_reg);
                start_reg_value =  rtd_inl(start_reg);
                end_reg_value =  rtd_inl(end_reg);

                if ((ctrl_reg_value & BIT(12)) && (ctrl_reg_value & BIT(10)) && (ctrl_reg_value & BIT(8)) && (ctrl_reg_value & BIT(16)) && (ctrl_reg_value & BIT(14)) && (ctrl_reg_value & BIT(18)))
                {
                        string_cpy_coher(cpu_enables, "[all]", &cpu_str_cnt, sizeof("[all]"));
                }
                else
                {
                        if (ctrl_reg_value & BIT(12))
                        {
                                string_cpy_coher(cpu_enables, "[A]", &cpu_str_cnt, sizeof("[A]"));
                        }
                        if (ctrl_reg_value & BIT(10))
                        {
                                string_cpy_coher(cpu_enables, "[V]", &cpu_str_cnt, sizeof("[V]"));
                        }
                        if (ctrl_reg_value & BIT(8))
                        {
                                string_cpy_coher(cpu_enables, "[S]", &cpu_str_cnt, sizeof("[S]"));
                        }
                        if (ctrl_reg_value & BIT(14))
                        {
                                string_cpy_coher(cpu_enables, "[V2]", &cpu_str_cnt, sizeof("[V2]"));

                        }
                        if (ctrl_reg_value & BIT(16))
                        {
                                string_cpy_coher(cpu_enables, "[K]", &cpu_str_cnt, sizeof("[K]"));
                        }

                        if (ctrl_reg_value & BIT(18))
                        {
                                string_cpy_coher(cpu_enables, "[A2]", &cpu_str_cnt, sizeof("[A2]"));
                        }
                        if (cpu_str_cnt == 0)
                        {
                                string_cpy_coher(cpu_enables, "no cpu", &cpu_str_cnt, sizeof("no cpu"));
                        }
                }
                cpu_enables[sizeof(cpu_enables) - 1] = '\0';
                if((i+1) == last_set_id){
                        pr_err("\e[1;33m[%02d] [%08x - %08x] %16s check enable,%8s,monitor %s (%s)\e[0m\n", i + 1,

                               rtd_inl(get_SB2_DBG_START_register(i)),
                               rtd_inl(get_SB2_DBG_END_register(i)),
                               cpu_enables,
                               str_support[str_support_flag >> i & 0x1],
                               data_instruction[ctrl_reg_value >> 2 & 0x3],
                               read_write[ctrl_reg_value >> 5 & 0x3]);
                }
        }

        return 0;
}

int sb2_dbg_bit_set_parse_index (sb2_dbg_bit_param* pParam, const char * str)
{
    if (strncmp("set",str,strlen("set")))
    {
        return -1;
    }

    if (str[3]==' ')
    {
        int i;
        for(i=0;i<4;i++)
        {
            if(rtd_inl(SB2_DBG3_0_0_reg+i*4)==0)
            {
                pParam->set_id=i+1;
                return 0;
            }
        }
        pr_err("%s %d error!  current bit monitor set is full, and user must chose a set by force\n",__func__,__LINE__);
        return -1;
    }

    if ( (str[3]>'0') && (str[3]<'5') && str[4]==' ')
    {
        pParam->set_id=str[3]-'0';
        return 0;
    }

    return -1;
}

int sb2_dbg_bit_set_parse_address (sb2_dbg_bit_param* pParam, const char * str)
{
    unsigned int addr;
    int ret=sscanf(str, "%*s %*s %x", &addr);
    if ( (ret!=1) ||(addr<0x18000000)  ||(addr>=0x18180000) ||(addr%4))
    {
        pr_err("%s %d error!  invaid bit monitor set address %x ! must between 0x18000000-0x1817ffff (4 byte align)\n",__func__,__LINE__,addr);
        return -1;
    }
    pParam->addr=addr;
    return 0;
}

//echo "set4 bit_monitor 0x18061600 0x3 0x3 acpu,scpu nstr" > /sys/realtek_boards/sb2_dbg
int sb2_dbg_bit_set_parse_monitor_bit_data (sb2_dbg_bit_param* pParam, const char * str)
{
    unsigned int monitor_bit,monitor_data;
    int ret=sscanf(str, "%*s %*s %*s %x %x", &monitor_bit,&monitor_data);
    if (ret==2)
    {
        pParam->dbg3_1=monitor_bit;
        pParam->dbg3_2=monitor_data;
        return 5;
    }

    if (ret==1)
    {
        pParam->dbg3_1=monitor_bit;
        pParam->dbg3_2=0xFFFFFFFF;
        return 4;
    }
    
    pParam->dbg3_1=0xFFFFFFFF;
    pParam->dbg3_2=0xFFFFFFFF;
    return 3;
}


int sb2_dbg_bit_set_parse_str (sb2_dbg_bit_param* pParam, const char * str,int flag)
{
    int ret;
    char buffer[5];
    memset(buffer,0,sizeof(buffer));

    if (flag==6)
    {
        ret=sscanf(str, "%*s %*s %*s %*s %*s %*s %4s", buffer);
    }
    else if (flag==5)
    {
        ret=sscanf(str, "%*s %*s %*s %*s %*s %4s", buffer);
    }
    else if (flag==4)
    {
        ret=sscanf(str, "%*s %*s %*s  %*s %4s", buffer);
    }
    else
    {
        ret=sscanf(str, "%*s %*s %*s  %4s", buffer);
    }
    
    if (ret==0)
    {
        pParam->str=STR_FLAG_YES;
        return 0;
    }
    
    if (strcmp(buffer,"str")==0)
    {
        pParam->str=STR_FLAG_YES;
    }
    else if (strcmp(buffer,"nstr")==0)
    {
        pParam->str=STR_FLAG_NO;
    }
    return 0;
}


//echo "set4 bit_monitor 0x18061600 0x3 0x3 acpu,scpu nstr" > /sys/realtek_boards/sb2_dbg
int sb2_dbg_bit_set_parse_cpu_type (sb2_dbg_bit_param* pParam, const char * str, int* flag)
{
    char buffer[32];
    int i,ret,pos=0,total;
    int cpu_type[]= {CPU_TYPE_ALL,CPU_TYPE_ACPU,CPU_TYPE_VCPU,CPU_TYPE_SCPU};
    const char* cpu_str[]= {"all","acpu","vcpu","scpu"};

    memset(buffer,0,sizeof(buffer));

    if (flag && *flag==5)
    {
        ret=sscanf(str, "%*s %*s %*s %*s %*s  %30s", buffer);
    }
    else if (flag && *flag==4)
    {
        ret=sscanf(str, "%*s %*s %*s %*s %30s", buffer);
    }
    else
    {
        ret=sscanf(str, "%*s %*s %*s %30s", buffer);
    }

    pr_err("buffer=%s\n",buffer);
    
    if (ret!=1)
    {
        pParam->cpu_flag[CPU_TYPE_ALL] = 1;
        return 0;
    }

    total=strlen(buffer);
    while(pos<=total)
    {
        for(i=0; i<(sizeof(cpu_str)/sizeof(char*)); i++)
        {
            if (strncmp(cpu_str[i],buffer+pos,strlen(cpu_str[i]))==0)
            {
                pr_err("buffer+pos=%s\n",buffer+pos);
                pParam->cpu_flag[cpu_type[i]] = 1;
                break;
            }
        }

        if (pParam->cpu_flag[CPU_TYPE_ALL])
        {
            if (flag)
            {
                *flag+=1;
            }
            pr_err("%s %d\n",__func__,__LINE__);
            return 0;
        }

        if (i==(sizeof(cpu_str)/sizeof(char*)) )
        {
            pr_err("%s %d.  invalid cpu type string %s\n",__func__,__LINE__,buffer+pos);
            return -1;
        }

        if ((pos+strlen(cpu_str[i])<total)&&buffer[pos+strlen(cpu_str[i])]!=',')
        {
            return -1;
        }

        pos=pos+strlen(cpu_str[i])+1;
    }

    if (flag)
    {
        *flag+=1;
    }
    pr_err("%s %d\n",__func__,__LINE__);
    return 0;
}

int sb2_dbg_bit_monitor (sb2_dbg_bit_param *pParam)
{
    // CTRL //0:all 1:a 2:v 3:s
    unsigned int cpu_set_bit[4] =
    {
        BIT(7) | BIT(6) | BIT(5) | BIT(4) | BIT(3) | BIT(2),
        BIT(7) | BIT(6),
        BIT(5) | BIT(4),
        BIT(3) | BIT(2),
    };

    unsigned int cpu_final_set_bit = 0;
    unsigned int sb2dbg_final_set = 0;
    unsigned int sb2dbg_final_clear = BIT(7) | BIT(5) | BIT(3) | BIT(1);
    int i,id ;
    unsigned int *cpu_id;

    if(!pParam)
    {
        return -1;
    }

    id = pParam->set_id - 1;
    if((id < 0) || (id > 3))
    {
        return -1;
    }

    cpu_id = pParam->cpu_flag;

    rtd_outl(get_SB2_DBG3_CTRL_register(id), sb2dbg_final_clear);
    rtd_outl(get_SB2_DBG3_0_register(id), pParam->addr); 
    rtd_outl(get_SB2_DBG3_1_register(id), pParam->dbg3_1); 
    rtd_outl(get_SB2_DBG3_2_register(id), pParam->dbg3_2);

    //set cpu types
    for(i = 0; i < 4; i++)
    {
        if(cpu_id[i]==1)
        {
            cpu_final_set_bit |= cpu_set_bit[i];
        }
    }
    sb2dbg_final_set = cpu_final_set_bit | 0x3;
    //pr_err("%s %d   sb2dbg_final_set=%x  %x %x %x %x\n",__func__,__LINE__,sb2dbg_final_set, cpu_id[0],cpu_id[1],cpu_id[2],cpu_id[3]);
    rtd_outl(get_SB2_DBG3_CTRL_register(id), sb2dbg_final_set);

    if(pParam->str == STR_FLAG_YES) {
            str_support_dbg3_flag = str_support_dbg3_flag | (1 << id);
    } else {
            str_support_dbg3_flag = str_support_dbg3_flag & (~(1 << id));
    }
    
    return 0;
}


//echo "set bit_monitor 0x18061600" > /sys/realtek_boards/sb2_dbg
//echo "set4 bit_monitor 0x18061600" > /sys/realtek_boards/sb2_dbg
//echo "set4 bit_monitor 0x18061600 acpu,scpu" > /sys/realtek_boards/sb2_dbg
//echo "set4 bit_clear" > /sys/realtek_boards/sb2_dbg
//echo "set4 bit_monitor 0x18061600 0x3 0x3 acpu,scpu nstr" > /sys/realtek_boards/sb2_dbg
int sb2_dbg_bit_set (const char *str)
{
    char buffer[32];
    sb2_dbg_bit_param param;
    memset(&param, 0, sizeof(param));
    pr_err("%s\n",str);

    if (sb2_dbg_bit_set_parse_index(&param,str))
    {
        pr_err("%s %d\n",__func__,__LINE__);
        return -1;
    }

    memset(buffer,0,sizeof(buffer));
    if (sscanf(str, "%*s %20s", buffer)!=1)
    {
        pr_err("%s %d\n",__func__,__LINE__);
        return -1;
    }

    if (strcmp(buffer,"bit_clear")==0)
    {
        sb2_dbg_bit_clear(&param);
        return 0;
    }
    else if (strcmp(buffer,"bit_monitor")==0)
    {
        int ret;
        if (sb2_dbg_bit_set_parse_address(&param,str))
        {
            pr_err("%s %d\n",__func__,__LINE__);
            return -1;
        }

        ret=sb2_dbg_bit_set_parse_monitor_bit_data(&param,str);
        if (sb2_dbg_bit_set_parse_cpu_type(&param,str,&ret))
        {
            pr_err("%s %d\n",__func__,__LINE__);
            return -1;
        }
        
        if (sb2_dbg_bit_set_parse_str(&param,str,ret))
        {
            pr_err("%s %d\n",__func__,__LINE__);
            return -1;
        }

        return sb2_dbg_bit_monitor(&param);
    }
    pr_err("%s %d\n",__func__,__LINE__);
    return -1;
}



//------------------------format----------------------------
// echo "set_id monitor cpu_type1,cpu_type2,... start_addr-end_addr r/w/rw,str/nstr"  > /sys/realtek_boards/sb2_dbg
// echo "set_id clear"  > /sys/realtek_boards/sb2_dbg
// echo "set_id hack_on/hack_off"  > /sys/realtek_boards/sb2_dbg       (don't care about set_id value actually.)
//----------------------format end--------------------------
void sb2_dbg_set (const char *buffer)
{
        sb2_dbg_param param;

        if (sb2_dbg_bit_set(buffer)==0)
        {
            return;
        }

        if(parse_sb2_callback_cmd(buffer) != -1)         //parse callback cmd ok
        {
                return;
        }

        if(parse_sb2_show_last_set(buffer) != -1)
        {
                return;
        }

        memset(&param, 0, sizeof(param));
        if(parse_cmdline(buffer, &param) == 0) {
                dump_sb2_dbg_param(&param);
                if(param.operation == OPERA_MONITOR) {
                        // set dbg range
                        if(sb2_dbg_monitor(&param)) {
                                pr_err("sb2_dbg_set fail!\n");
                                goto Fail;
                        }
                } else if(param.operation == OPERA_CLEAR) {
                        // clear dbg range
                        if(sb2_dbg_clear(&param)) {
                                pr_err("sb2_dbg_clear fail!\n");
                                goto Fail;
                        }
                } else if(param.operation == OPERA_HACKON) {
                        opera_hackon();
                } else if(param.operation == OPERA_HACKOFF) {
                        opera_hackoff();
#if 0
                } else if(param.operation == OPERA_BLOCK) {
                        if(sb2_dbg_block(&param)) {
                                pr_err("sb2_dbg_block fail!\n");
                                goto Fail;
                        }
                } else if(param.operation == OPERA_NONBLOCK) {
                        sb2_dbg_nonblock(&param);
#endif
                } else if(param.operation == OPERA_TRAP_TOGGLE) {
                        opera_trap_toggle();
                } else {
                        goto Fail;
                }
        } else {
                goto Fail;
        }

        /*
            if(set_sb2_dbg_arange(start,end,cpu_id,set_id)==0)
            {
                printk("sb2 dbg set OK\n");
                return;
            }
        */
        return ;

Fail:
        pr_err("sb2 dbg set fail\n");
        return ;
}
//yuan_hu BIT test==========================================================
int parse_bit_set_field(char * field_str, sb2_dbg_bit_param * pParam)
{
        if((field_str == NULL) || (pParam == NULL)) {
                pr_err("set_field is NULL\n");
                return -1;
        }

        if (sscanf(field_str, "set%d", &pParam->set_id) < 1) {
                pr_err("parse set_field fail!\n");
                return -1;
        }
        if((pParam->set_id <1) || (pParam->set_id > 4)) {
                pr_err("unexpected set id,expected range[1-4]!\n");
                return -1;
        }

        return 0;
}
int parse_bit_operation_field(char * field_str, sb2_dbg_bit_param * pParam)
{
        if((field_str == NULL) || (pParam == NULL)) {
                pr_err("operation_field is NULL\n");
                return -1;
        }

        if(strcmp(field_str, "bit_monitor") == 0) {
                pParam->operation = OPERA_MONITOR;
        } else if(strcmp(field_str, "bit_clear") == 0) {
                pParam->operation = OPERA_CLEAR;
        } else if(strcmp(field_str, "bit_hack_on") == 0) {
                pParam->operation = OPERA_HACKON;
        } else if(strcmp(field_str, "bit_hack_off") == 0) {
                pParam->operation = OPERA_HACKOFF;
        } else if(strcmp(field_str, "bit_block") == 0) {
                pParam->operation = OPERA_BLOCK;
        } else if(strcmp(field_str, "bit_non-block") == 0) {
                pParam->operation = OPERA_NONBLOCK;
        } else if(strcmp(field_str, "bit_trap-toggle") == 0) {
                pParam->operation = OPERA_TRAP_TOGGLE;
        } else {
                pr_err("unexpected operation:%s!\n", field_str);
                return -1;
        }

        return 0;
}

int get_cputype_bit_id(const char * cpu)
{
        int return_id = -1;
        if (strcmp(cpu, "all") == 0) {
                return_id = CPU_TYPE_ALL;
        } else if (strcmp(cpu, "acpu") == 0) {
                return_id = CPU_TYPE_ACPU;
        } else if (strcmp(cpu, "vcpu") == 0) {
                return_id = CPU_TYPE_VCPU;
        } else if (strcmp(cpu, "scpu") == 0) {
                return_id = CPU_TYPE_SCPU;
        } else {
                pr_err("invalid cpu type - %s\n", cpu);
                return -1;
        }

        return return_id;
}
int parse_bit_cpu_field(char * field_str, sb2_dbg_bit_param * pParam)
{
        char cpu_str[4][16] = {{0}};
        int cpu_num = 0;
        int cpu_id = 0;
        int i;

        memset(cpu_str, '\0', sizeof(cpu_str));

        if((field_str == NULL) || (pParam == NULL)) {
                pr_err("cpu_field is NULL\n");
                return -1;
        }

        //only monitor need cpu_field
        if(pParam->operation != OPERA_MONITOR) { // non-monitor operation don't need this field.
                return 0;
        }

        cpu_num = split_str(field_str, ',', cpu_str, 4);
        if((cpu_num <= 0) || (cpu_num > 4)) { //no cpu or too many cpus
                    pr_err("unexpected cpu type num,expected between [1-4],actual:%d!\n", cpu_num);
                return -1;
        }
        
        for(i = 0; i < 4; i++) 
        {
            pParam->cpu_flag[i] = 0;
        }

        for(i = 0; i < cpu_num; ++i) { //parse cpu id
                cpu_str[i][15] = '\0';
                cpu_id = get_cputype_bit_id(&cpu_str[i][0]);
                if(cpu_id != -1) {
                        pParam->cpu_flag[cpu_id] = 1;
                }
        }
        
        return 0;
}

int parse_bit_range_field(char * field_str, sb2_dbg_bit_param * pParam)
{
        unsigned int check;

        //check input
        if((field_str == NULL) || (pParam == NULL)) {
                pr_err("range_field is NULL\n");
                return -1;
        }

        if((pParam->operation != OPERA_MONITOR) && (pParam->operation != OPERA_BLOCK)) { // non-monitor operation don't need this field.
                return 0;
        }

        if (sscanf(field_str, "%x", &pParam->addr) < 1) {
                pr_err("sb2 set fail, addr :0x%08x \n",pParam->addr);
                return -1;
        }

        if((pParam->addr < (unsigned int)0x18000000)||(pParam->addr > (unsigned int)0x1817FFFFF))
        {
            pr_err("sb2 set fail, addr:0x%08x ,addr range:( 0x18000000->0x1817ffff )\n",pParam->addr);
            return -1;
        }
        
        check = (pParam->addr -0x18000000)%4;
        if(check != 0)
        {
            pr_err("sb2 set fail, addr remainder=%d , need to set 4byte (example:0x18000004)\n",check);
            return -1;
        }
        
        return 0;
}

int parse_bit_dbg3_1_field(char * field_str, sb2_dbg_bit_param * pParam)
{
        //check input
        if((field_str == NULL) || (pParam == NULL)) {
                pr_err("dbg3_1_field is NULL\n");
                return -1;
        }

        if((pParam->operation != OPERA_MONITOR) && (pParam->operation != OPERA_BLOCK)) { // non-monitor operation don't need this field.
                return 0;
        }

        if (sscanf(field_str, "%x", &pParam->dbg3_1) < 1) {
                pr_err("sb2 set fail, dbg3_1_field :0x%08x \n",pParam->dbg3_1);
                return -1;
        }
        
        return 0;
}
int parse_bit_dbg3_2_field(char * field_str, sb2_dbg_bit_param * pParam)
{
        //check input
        if((field_str == NULL) || (pParam == NULL)) {
                pr_err("dbg3_1_field is NULL\n");
                return -1;
        }

        if((pParam->operation != OPERA_MONITOR) && (pParam->operation != OPERA_BLOCK)) { // non-monitor operation don't need this field.
                return 0;
        }

        if (sscanf(field_str, "%x", &pParam->dbg3_2) < 1) {
                pr_err("sb2 set fail, dbg3_2_field :0x%08x \n",pParam->dbg3_2);
                return -1;
        }
        
        return 0;
}


int parse_bit_str_flag(char * flag_str, sb2_dbg_bit_param * pParam)
{
        if(flag_str == NULL) {
                pParam->str = STR_FLAG_DFT;//default value
                return 0;
        }

        if(strcmp(flag_str, "str") == 0) {
                pParam->str = STR_FLAG_YES;
        } else if(strcmp(flag_str, "nstr") == 0) {
                pParam->str = STR_FLAG_NO;
        } else {
                pr_err("unexpected str param!\n");
                return -1;
        }

        return 0;
}

//
int parse_bit_cmdline(const char * buffer, sb2_dbg_bit_param * pParam)
{
        char set_field[4] = {0};
        char operation_field[15] = {0};
        char cpu_field[48] = {0};
        char range_field[24] = {0};
        char dbg3_1_field[24] = {0};       
        char dbg3_2_field[24] = {0};
        char str_field[10] = {0};

        if((buffer == NULL) || (pParam == NULL)) {
                pr_err("use NULL input param!\n");
                goto Fail;
        }

        DBG_DFT("sb2_dbg receive cmd:%s\n", buffer);
        //get options
        if (sscanf(buffer, "%s %s %s %s %s %s %s", set_field, operation_field, cpu_field, range_field,dbg3_1_field, dbg3_2_field,str_field) < 1) {
                pr_err("get cmdline fail!\n");
                goto Fail;
        }

        if(parse_bit_set_field(set_field, pParam)) {
                pr_err("parse set_field fail!\n");
                goto Fail;
        }

        if(parse_bit_operation_field(operation_field, pParam)) {
                pr_err("parse operation_field fail!\n");
                goto Fail;
        }

        if(parse_bit_cpu_field(cpu_field, pParam)) {
                pr_err("parse cpu_field fail!\n");
                goto Fail;
        }

        if(parse_bit_range_field(range_field, pParam)) {
                pr_err("parse range_field fail!\n");
                goto Fail;
        }
        if(parse_bit_dbg3_1_field(dbg3_1_field, pParam)) {
                pr_err("parse dbg3_1_field fail!\n");
                goto Fail;
        }
        if(parse_bit_dbg3_2_field(dbg3_2_field, pParam)) {
                pr_err("parse dbg3_2_field fail!\n");
                goto Fail;
        }

        //
        if(parse_bit_str_flag(str_field, pParam)) {
                pr_err("parse str_field fail!\n");
                goto Fail;
        }
        return 0;

Fail:
        pr_err("[sb2 debug driver]parse param fail!\n");
        return -1;
}
//
void dump_sb2_dbg_bit_param(sb2_dbg_bit_param * pParam)
{
        DBG_DFT("\ndump sb2 dbg setting cmd:\n");
        DBG_DFT("set_id:%d\n", pParam->set_id);
        DBG_DFT("option:%d (0:monitor 1:clear 2:hack_on 3:hack_off 4:block)\n", pParam->operation);
        DBG_DFT("cpu flag:(all:%d a:%d v:%d s:%d )\n",
                pParam->cpu_flag[0], pParam->cpu_flag[1], pParam->cpu_flag[2],
                pParam->cpu_flag[3]);
        DBG_DFT("addr:0x%08x\n", pParam->addr);
        DBG_DFT("dbg3_1:0x%x\n", pParam->dbg3_1);
        DBG_DFT("dbg3_2:0x%x\n", pParam->dbg3_2);
        DBG_DFT("str flag:%s\n", (pParam->str == STR_FLAG_YES) ? "Support STR" : "Not support STR");
}
//
void opera_bit_hackon(void)
{
        printk("Dbg intr bit now:0x%08x\n", rtd_inl(SB2_DBG3_INT_reg));
        if(sb2hack_dbg3_intr_bit == 0) { // check if not hack_on now...
                sb2hack_dbg3_intr_bit = rtd_inl(SB2_DBG3_INT_reg);
                rtd_outl(SB2_DBG3_INT_reg,  BIT(3) | BIT(2) | (BIT(1) | BIT(0)));
                printk("Hack ON Finish.Dbg Intr bit:0x%08x\n", rtd_inl(SB2_DBG3_INT_reg));
        } else { // if hack_on already
                printk("Hack operation is ON already.Do nothing for now.\n");
        }
}

void opera_bit_hackoff(void)
{
        printk("Dbg intr bit now:0x%08x\n", rtd_inl(SB2_DBG3_INT_reg));
        if(sb2hack_dbg3_intr_bit != 0) { // check if not hack_off now...
                printk("sb2hack_intr_bit:0x%08x\n", sb2hack_dbg3_intr_bit);
                rtd_outl(SB2_DBG3_INT_reg, (~sb2hack_dbg3_intr_bit) & (~BIT(0)));
                printk("Hack OFF Finish.Dbg Intr bit:0x%08x\n", rtd_inl(SB2_DBG3_INT_reg));
                sb2hack_dbg3_intr_bit = 0;
        } else { // if hack_off already
                printk("Hack operation is OFF already.Do nothing for now.\n");
        }
}

//echo "set7 bit_monitor acpu,scpu 18061500-18061600 rw,str" > /sys/realtek_boards/sb2_dbg
//echo "set7 bit_clear" > /sys/realtek_boards/sb2_dbg


//
void sb2_emergency_intr_clear(void)
{
    // Disable the interrupt from system to audio & video
	rtd_outl(SB2_NMI_CPU_INT_EN_reg, (SB2_NMI_CPU_INT_EN_int_sa_en_mask ));
	rtd_outl(SB2_NMI_CPU_INT_EN_reg, (SB2_NMI_CPU_INT_EN_int_sv_en_mask ));
	rtd_outl(SB2_NMI_CPU_INT_EN_reg, (SB2_NMI_CPU_INT_EN_int_sa2_en_mask ));
	rtd_outl(SB2_NMI_CPU_INT_EN_reg, (SB2_NMI_CPU_INT_EN_int_sv2_en_mask ));
#ifdef CONFIG_REALTEK_RPC_KCPU
	rtd_outl(SB2_NMI_CPU_INT_EN_reg, (SB2_NMI_CPU_INT_EN_int_sk_en_mask ));
#endif
}

void sb2_emergency_intr_enable(void)
{
    // Enable the interrupt from system to audio & video
	rtd_outl(SB2_NMI_CPU_INT_EN_reg, (SB2_NMI_CPU_INT_EN_int_sa_en_mask | SB2_NMI_CPU_INT_EN_write_data_mask));
	rtd_outl(SB2_NMI_CPU_INT_EN_reg, (SB2_NMI_CPU_INT_EN_int_sv_en_mask | SB2_NMI_CPU_INT_EN_write_data_mask));
	rtd_outl(SB2_NMI_CPU_INT_EN_reg, (SB2_NMI_CPU_INT_EN_int_sa2_en_mask | SB2_NMI_CPU_INT_EN_write_data_mask));
	rtd_outl(SB2_NMI_CPU_INT_EN_reg, (SB2_NMI_CPU_INT_EN_int_sv2_en_mask | SB2_NMI_CPU_INT_EN_write_data_mask));
#ifdef CONFIG_REALTEK_RPC_KCPU
	rtd_outl(SB2_NMI_CPU_INT_EN_reg, (SB2_NMI_CPU_INT_EN_int_sk_en_mask | SB2_NMI_CPU_INT_EN_write_data_mask));
#endif
}

void sb2_emergency_intr_setup(void)
{
	int i;
#ifdef CONFIG_REALTEK_RPC_KCPU
	for (i = 0; i < (RPC_NR_KERN_DEVS+RPC_NR_KERN_KCPU_DEVS)/RPC_NR_PAIR; i++)
#else
	for (i = 0; i < RPC_NR_KERN_DEVS/RPC_NR_PAIR; i++)
#endif
	{
		sema_init(&send_sb2_emergency_intr_sem[i], 1);
	}

	sb2_emergency_intr_enable();
}

int sb2_emergency_intr_wait_done(unsigned int maskbit)
{
	unsigned long timeout =  jiffies + HZ*SB2_EMERGENCY_INT_TIMEOUT;
	int done = 0;

	while(time_before(jiffies, timeout))
	{
		if((rtd_inl(SB2_NMI_CPU_INT_reg) & maskbit) == 0x0) //done
		{
			done = 1;
			break;
		}
	}
	return done;
}
void sb2_emergency_intr_send(unsigned int opt,unsigned int command, unsigned int parameter)
{

	unsigned int enableMask;
	unsigned int *share_buf;

	if( opt == RPC_AUDIO)
	{
		enableMask = SB2_NMI_CPU_INT_int_sa_mask;
	}
	else if( opt == RPC_VIDEO)
	{
		enableMask = SB2_NMI_CPU_INT_int_sv_mask;
	}
#ifdef CONFIG_REALTEK_RPC_KCPU
	else if( opt == RPC_KCPU)
	{
		enableMask = SB2_NMI_CPU_INT_int_sk_mask;
	}
#endif
#ifdef CONFIG_REALTEK_RPC_VCPU2
	else if( opt == RPC_VIDEO2)
	{
		enableMask = SB2_NMI_CPU_INT_int_sv2_mask;
	}
#endif
#ifdef CONFIG_REALTEK_RPC_ACPU2
	else if( opt == RPC_AUDIO2)
	{
		enableMask = SB2_NMI_CPU_INT_int_sa2_mask;
	}
#endif   
	else
	{
		 pr_err("Not support type(%d) @ %s\n", opt, __FUNCTION__);
		 return;
	}

	down(&send_sb2_emergency_intr_sem[opt]);
	share_buf = (unsigned int *)phys_to_virt(SB2_EMERGENCY_INT_BUFF_ADDR+ opt * SB2_EMERGENCY_INT_BUFF_COMMAND_SIZE);
	share_buf[0] = command;
	share_buf[1] = parameter;
	rtd_outl(SB2_NMI_CPU_INT_reg, (enableMask | SB2_NMI_CPU_INT_write_data_mask));

	if(!sb2_emergency_intr_wait_done(enableMask))
	{
		 pr_err("Send emergency interrupt to (%d) but no ack. Com(%d),Parameter(%d ) @%s\n",
		 	opt, command, parameter, __FUNCTION__);

		 //clear interrupt
		 rtd_outl(SB2_NMI_CPU_INT_reg, (enableMask ));
	}
	up(&send_sb2_emergency_intr_sem[opt]);
}
void sb2_emergency_intr_send_all(void)
{
	pr_err("Issue  sb2_emergency_intr_send_all\n");
	rtd_outl(SB2_NMI_CPU_INT_reg, (SB2_NMI_CPU_INT_int_sa_mask | SB2_NMI_CPU_INT_write_data_mask));
	rtd_outl(SB2_NMI_CPU_INT_reg, (SB2_NMI_CPU_INT_int_sv_mask | SB2_NMI_CPU_INT_write_data_mask));
	rtd_outl(SB2_NMI_CPU_INT_reg, (SB2_NMI_CPU_INT_int_sa2_mask | SB2_NMI_CPU_INT_write_data_mask));
	rtd_outl(SB2_NMI_CPU_INT_reg, (SB2_NMI_CPU_INT_int_sv2_mask | SB2_NMI_CPU_INT_write_data_mask));
#ifdef CONFIG_REALTEK_RPC_KCPU
	rtd_outl(SB2_NMI_CPU_INT_reg, (SB2_NMI_CPU_INT_int_sk_mask | SB2_NMI_CPU_INT_write_data_mask));
#endif
}


#define MONITOR_DCMT_ENABLE 0x1   //dcmt bit0
#define MONITOR_SB2_ENABLE 0x2   //sb2 bit1
#define MONITOR_ARM_WRAPER_ENABLE 0x4   //arm_wraper bit2

#ifdef CONFIG_REALTEK_ARM_WRAPPER
extern int get_arm_wraper_set_id(void);
#endif

//buf: [rbus_start  rbus_size  config_status  sb2_set_id  arm_set_id]
int  hw_monitor_get_info(char * buf, int ofst)
{
        int config_status = 0;
        int arm_wraper_set_id =0;
        int len = 0;

        #ifdef CONFIG_RTK_KDRV_DC_MEMORY_TRASH_DETCTER
                config_status = config_status |MONITOR_DCMT_ENABLE;
        #endif

        #ifdef  CONFIG_RTK_KDRV_SB2
                config_status= config_status |MONITOR_SB2_ENABLE;
        #endif

        #ifdef CONFIG_REALTEK_ARM_WRAPPER
                config_status = config_status |MONITOR_ARM_WRAPER_ENABLE;
                arm_wraper_set_id = get_arm_wraper_set_id();
        #endif

        len += show_msg(buf,ofst+len,"%x %x %d %d %d \n", RBUS_BASE_PHYS, RBUS_BASE_SIZE, config_status, sb2_set_id, arm_wraper_set_id);

        return len;
}

void hw_monitor_get_status(char * buf, int bufsize)
{
        int config_status = 0;
        int arm_wraper_set_id =0;

        #ifdef CONFIG_RTK_KDRV_DC_MEMORY_TRASH_DETCTER
                config_status = config_status |MONITOR_DCMT_ENABLE;
        #endif

        #ifdef  CONFIG_RTK_KDRV_SB2
                config_status= config_status |MONITOR_SB2_ENABLE;
        #endif

        #ifdef CONFIG_REALTEK_ARM_WRAPPER
                config_status = config_status |MONITOR_ARM_WRAPER_ENABLE;
                arm_wraper_set_id = get_arm_wraper_set_id();
        #endif

        snprintf(buf, bufsize, "%x %x %d %d %d ", RBUS_BASE_PHYS, RBUS_BASE_SIZE, config_status, sb2_set_id, arm_wraper_set_id);// one more ' '
}

void cancel_monitor_uartclk_phy(void);
void monitor_uartclk_phy(void);
void restore_sb2_timeout_status(void)
{

        // use the maximum timeout value
        rtd_setbits(SB2_DEBUG_REG_reg, sb2dbg_tmp_reg[STRREG_DEBUG_REG_reg]);
        //clear Sciva_int
        //rtd_outl(SB2_INV_INTSTAT_reg, sb2dbg_tmp_reg[STRREG_INV_INTSTAT_reg] | BIT(0));
        //Enable scivairq_en, To_en, To_en1
        rtd_outl(SB2_INV_INTEN_reg, sb2dbg_tmp_reg[STRREG_INV_INTEN_reg] | BIT(0));
        rtd_outl(SB2_INV_INTEN_reg, BIT(1) ); //avoid bootcode to enable SCPU int.
        cancel_monitor_uartclk_phy();
        rtd_outl(EMCU_wrapper_8051_reg, sb2dbg_tmp_reg[STRREG_EMCU_TIME_OUT_reg]); 
        monitor_uartclk_phy();
}

void restore_sb2_dbg_bit_status(void)
{
//BIT
        int i;
        unsigned int dbg_recnt = 0x3;
        unsigned int dbg3_0 = 0;
        unsigned int dbg3_1 = 0;
        unsigned int dbg3_2 = 0;
        unsigned int dbg3_ctrl = 0;
        unsigned int dbg3_0_reg = 0;
        unsigned int dbg3_1_reg = 0;
        unsigned int dbg3_2_reg = 0;
        unsigned int dbg3_ctrl_reg = 0;
        unsigned int sb2dbg3_cpu_write = BIT(7) | BIT(5) | BIT(3);
        unsigned int sb2dbg3_final_set = 0;
        unsigned int sb2dbg3_final_clear = BIT(7) | BIT(5) | BIT(3);

        rtd_outl(SB2_DBG3_INT_reg, sb2dbg_tmp_dbg3_reg | BIT(0));
//BIT
        for (i = 0; i < 4; i++) {
                if(str_support_dbg3_flag & (0x1 << i)) {
                        dbg3_0 = sb2dbg_reg_dbg3_status[i].dbg3_0;
                        dbg3_1 = sb2dbg_reg_dbg3_status[i].dbg3_1;
                        dbg3_2 = sb2dbg_reg_dbg3_status[i].dbg3_2;
                        dbg3_ctrl = sb2dbg_reg_dbg3_status[i].dbg3_ctrl;
                        
                        dbg3_0_reg = get_SB2_DBG3_0_register(i);
                        dbg3_1_reg = get_SB2_DBG3_1_register(i);
                        dbg3_2_reg = get_SB2_DBG3_2_register(i);
                        dbg3_ctrl_reg = get_SB2_DBG3_CTRL_register(i);
                        //set ctrl
                        sb2dbg3_final_set = sb2dbg3_cpu_write | dbg3_ctrl | dbg_recnt;

                        rtd_outl(dbg3_ctrl_reg, sb2dbg3_final_clear);
                        rtd_outl(dbg3_0_reg, dbg3_0);
                        rtd_outl(dbg3_1_reg, dbg3_1);
                        rtd_outl(dbg3_2_reg, dbg3_2);
                        rtd_outl(dbg3_ctrl_reg, sb2dbg3_final_set);
                }

        }
}

void restore_sb2_dbg_status(void)
{
        int i;
        unsigned int start_addr = 0;
        unsigned int end_addr = 0;
        unsigned int ctrl = 0;
        unsigned int start_reg = 0;
        unsigned int end_reg = 0;
        unsigned int ctrl_reg = 0;
        unsigned int rw_write_bit = BIT(7);
        unsigned int di_write_bit = BIT(4);
        unsigned int dbg_recnt = 0x3;
        unsigned int sb2dbg_cpu_write = BIT(19) | BIT(17) | BIT(15) | BIT(13) | BIT(11) | BIT(9);
        unsigned int sb2dbg_final_set = 0;
        unsigned int sb2dbg_final_clear = BIT(19) | BIT(17) | BIT(15) | BIT(13) | BIT(11) | BIT(9) | BIT(7) | BIT(4);

        rtd_outl(SB2_DBG_INT_reg, sb2dbg_tmp_reg[STRREG_DBG_INT_reg] | BIT(0));

        for (i = 0; i < 16; i++) {
                if(str_support_flag & (0x1 << i)) {
                        start_addr = sb2dbg_reg_status[i].start_addr;
                        end_addr = sb2dbg_reg_status[i].end_addr;
                        ctrl = sb2dbg_reg_status[i].ctrl;

                        start_reg = get_SB2_DBG_START_register(i);
                        end_reg = get_SB2_DBG_END_register(i);
                        ctrl_reg = get_SB2_DBG_CTRL_register(i);

                        sb2dbg_final_set = sb2dbg_cpu_write | rw_write_bit | di_write_bit | ctrl | dbg_recnt;

                        rtd_outl(ctrl_reg, sb2dbg_final_clear);
                        rtd_outl(start_reg, start_addr);
                        rtd_outl(end_reg, end_addr);
                        rtd_outl(ctrl_reg, sb2dbg_final_set);
                }

        }
}

void restore_sb2_status(void)
{
        restore_sb2_timeout_status();
        restore_sb2_dbg_status();
        restore_sb2_dbg_bit_status();

        sb2_emergency_intr_enable();
}

void store_sb2_timeout_status(void)
{
        sb2dbg_tmp_reg[STRREG_INV_INTEN_reg] = rtd_inl(SB2_INV_INTEN_reg);
        //sb2dbg_tmp_reg[STRREG_INV_INTSTAT_reg] = rtd_inl(SB2_INV_INTSTAT_reg);
        sb2dbg_tmp_reg[STRREG_DEBUG_REG_reg] = rtd_inl(SB2_DEBUG_REG_reg);
        sb2dbg_tmp_reg[STRREG_EMCU_TIME_OUT_reg] = rtd_inl(EMCU_wrapper_8051_reg);
}

void store_sb2_dbg_status(void)
{
        int i;

        sb2dbg_tmp_reg[STRREG_DBG_INT_reg] = rtd_inl(SB2_DBG_INT_reg);

        for (i = 0; i < 16; i++) {
                if(str_support_flag & (0x1 << i)) { //if reg[i] has already been setting
                        sb2dbg_reg_status[i].start_addr = rtd_inl(get_SB2_DBG_START_register(i));
                        sb2dbg_reg_status[i].end_addr = rtd_inl(get_SB2_DBG_END_register(i));
                        sb2dbg_reg_status[i].ctrl = rtd_inl(get_SB2_DBG_CTRL_register(i));
                }
        }
}

void store_sb2_dbg_bit_status(void)
{
        int i;
        
        sb2dbg_tmp_dbg3_reg = rtd_inl(SB2_DBG3_INT_reg);
        
        for (i = 0; i < 4; i++) {
                if(str_support_dbg3_flag & (0x1 << i)) { //if reg[i] has already been setting
                        sb2dbg_reg_dbg3_status[i].dbg3_0 = rtd_inl(get_SB2_DBG3_0_register(i));
                        sb2dbg_reg_dbg3_status[i].dbg3_1 = rtd_inl(get_SB2_DBG3_1_register(i));
                        sb2dbg_reg_dbg3_status[i].dbg3_2 = rtd_inl(get_SB2_DBG3_2_register(i));
                        sb2dbg_reg_dbg3_status[i].dbg3_ctrl = rtd_inl(get_SB2_DBG3_CTRL_register(i));
                }
        }
}

void store_sb2_status(void)
{
        memset(sb2dbg_tmp_reg, 0, sizeof(sb2dbg_tmp_reg));
        memset(sb2dbg_reg_status, 0, sizeof(sb2dbg_reg_status));
        memset(sb2dbg_reg_dbg3_status, 0, sizeof(sb2dbg_reg_dbg3_status));

        store_sb2_timeout_status();
        store_sb2_dbg_status();
        store_sb2_dbg_bit_status();
        
	 sb2_emergency_intr_clear();
}

void monitor_scpu_text_phy(void)
{
#ifdef CONFIG_ARM64
    unsigned int phy_kernel_start = (unsigned int)((unsigned long)_text - PAGE_OFFSET);     //kernel text start ;
        unsigned int phy_kernel_end = (unsigned int)((unsigned long)_etext - PAGE_OFFSET);
#else
#if (LINUX_VERSION_CODE >= KERNEL_VERSION(4, 14, 0))
        unsigned int phy_kernel_start = (unsigned int)_stext - PAGE_OFFSET;    //M6RTANOM-11:change start address swapper_pg_dir to _stext //protect start from mmu table
#else
        unsigned int phy_kernel_start = (unsigned int)swapper_pg_dir - PAGE_OFFSET;     //protect start from mmu table ;
#endif
        unsigned int phy_kernel_end = (unsigned int)(_etext - CONFIG_PAGE_OFFSET);
#endif
        sb2_dbg_param param;
        memset(&param, 0, sizeof(param));

        param.set_id = 6;
        param.cpu_flag[CPU_TYPE_ALL] = 0;
        param.cpu_flag[CPU_TYPE_ACPU] = 0;
        param.cpu_flag[CPU_TYPE_VCPU] = 1;
        param.cpu_flag[CPU_TYPE_SCPU] = 1;
        param.start = phy_kernel_start;
        param.end = phy_kernel_end;
        param.operation = OPERA_MONITOR;
        param.rw = RW_FLAG_WO;
        param.str = STR_FLAG_YES;

        // set dbg range
        if(sb2_dbg_monitor(&param))
                pr_err("sb2_dbg_set fail!\n");
}
#if 0
void monitor_kcpu_text_phy(void)
{
        sb2_dbg_param param;
        memset(&param, 0, sizeof(param));

        param.set_id = 7;
        param.cpu_flag[CPU_TYPE_ALL] = 0;
        param.cpu_flag[CPU_TYPE_ACPU] = 0;
        param.cpu_flag[CPU_TYPE_VCPU] = 1;
        param.cpu_flag[CPU_TYPE_SCPU] = 1;
        param.cpu_flag[CPU_TYPE_VCPU2] = 1;
        param.cpu_flag[CPU_TYPE_KCPU] = 0;
        param.cpu_flag[CPU_TYPE_ACPU2] = 1;
        param.start = 0x16008000;
        param.end = 0x16145000;
        param.operation = OPERA_MONITOR;
        param.rw = RW_FLAG_WO;
        param.str = STR_FLAG_YES;

        // set dbg range
        if(sb2_dbg_monitor(&param)) {
                pr_err("sb2_dbg_set fail!\n");
        }
}
#endif
void monitor_overrun_phy(void)
{
        sb2_dbg_param param;
        int total_size = get_memory_size(GFP_DCU1) + get_memory_size(GFP_DCU2);
        memset(&param, 0, sizeof(param));

        param.set_id = 8;
        param.cpu_flag[CPU_TYPE_ALL] = 0;
        param.cpu_flag[CPU_TYPE_ACPU] = 0;
        param.cpu_flag[CPU_TYPE_VCPU] = 1;
        param.cpu_flag[CPU_TYPE_SCPU] = 1;

        if(total_size <= 0){
                param.start = 0x20000000;
        }else{
                param.start = (unsigned int)total_size;
        }
        param.end = 0xffffffff;
        param.operation = OPERA_MONITOR;
        param.rw = RW_FLAG_RW;
        param.str = STR_FLAG_YES;

        // set dbg range
        if(sb2_dbg_monitor(&param)) {
                pr_err("sb2_dbg_set fail!\n");
        }
}

void monitor_uartclk_phy(void)
{
        sb2_dbg_param param;
        memset(&param, 0, sizeof(param));

        param.set_id = 9;
        param.cpu_flag[CPU_TYPE_ALL] = 1;

        param.start = 0x18060400;
        param.end = 0x18060403;
        param.operation = OPERA_MONITOR;
        param.rw = RW_FLAG_WO;
        param.str = STR_FLAG_YES;

        // set dbg range
        if(sb2_dbg_monitor(&param)) {
                pr_err("sb2_dbg_set fail!\n");
        }
}

void cancel_monitor_uartclk_phy(void)
{
        sb2_dbg_param param;
        memset(&param, 0, sizeof(param));

        param.set_id = 9;
        param.str = STR_FLAG_YES;

        // set dbg range
        if(sb2_dbg_clear(&param)) {
                pr_err("sb2_dbg_set fail!\n");
        }
}


#if 0 //K6LG-556
void monitor_acpupll_phy(void)
{
        sb2_dbg_param param;
        memset(&param, 0, sizeof(param));

        param.set_id = 10;
        param.cpu_flag[CPU_TYPE_ALL] = 1;

        param.start = 0x180004E4;
        param.end = 0x180004E7;
        param.operation = OPERA_MONITOR;
        param.rw = RW_FLAG_WO;
        param.str = STR_FLAG_YES;

        // set dbg range
        if(sb2_dbg_monitor(&param)) {
                pr_err("sb2_dbg_set fail!\n");
        }
}
#endif

void rtk_sb2_monitor_init(void)
{
        monitor_scpu_text_phy();
#if 0
#if defined(CONFIG_REALTEK_SECURE)
        monitor_kcpu_text_phy();
#endif
#endif
        monitor_overrun_phy();
        monitor_uartclk_phy();
#if 0 //K6LG-556
        monitor_acpupll_phy();
#endif
        //monitor_dc_phy();
        //monitor_dc2_phy();
}

void rtk_sb2_setup(void)
{
        sb2_dbg_latch_setup();
        //sb2_dbg_intr_setup();
        //sb2_block_intr_setup();

        if(need_monitor_range_dft)
        {
                rtk_sb2_monitor_init();
        }

        sb2_emergency_intr_setup();
}
EXPORT_SYMBOL(rtk_sb2_setup);

int get_sb2_timeout_info(sb2_timeout_info *info)
{
        if(timeout_info.isTimeout)
        {
                memcpy(info, &timeout_info, sizeof(timeout_info));
        }
        else
        {
                memset(info, 0, sizeof(sb2_timeout_info));
        }

        return 0;
}
EXPORT_SYMBOL(get_sb2_timeout_info);

int isSb2Timeout(char * module_name)
{
        if(!timeout_info.isTimeout)
        {
                return 0;
        }
        if(is_module_reg_match(module_name, timeout_info.timeout_reg) == 0)     //match
        {
                return 1;
        }
        return 0;
}
EXPORT_SYMBOL(isSb2Timeout);
static __maybe_unused void sb2_dump_in_dcmt(void)
{
        if(isDcmtTrap("CPUS"))
        {
                pr_err("dump sb2 reg info:\n");
                dump_sb2dbg_regval();
        }
}

DCMT_DEBUG_INFO_DECLARE(sb2_dump, sb2_dump_in_dcmt);

static int __init sb2_extra_module_init(void)
{
        DCMT_DEBUG_INFO_REGISTER(sb2_dump, sb2_dump_in_dcmt);

        return 0;
}

static void __exit sb2_extra_module_exit(void)
{
        DCMT_DEBUG_INFO_UNREGISTER(sb2_dump, sb2_dump_in_dcmt);
}

module_init(sb2_extra_module_init);
module_exit(sb2_extra_module_exit);
#if 0
void __init monitor_dc_phy(void)
{
        sb2_dbg_param dc_param;
        memset(&dc_param, 0, sizeof(dc_param));

        dc_param.set_id = 6;
        dc_param.cpu_flag[CPU_TYPE_ALL] = 1;
        dc_param.start = 0x18008000;
        dc_param.end = 0x18008ffc;
        dc_param.operation = OPERA_MONITOR;
        dc_param.rw = RW_FLAG_WO;
        dc_param.str = STR_FLAG_YES;

        // set dbg range
        if(sb2_dbg_monitor(&dc_param)) {
                pr_err("sb2_dbg_set fail!\n");
        }
}

void __init monitor_dc2_phy(void)
{
        sb2_dbg_param dc2_param;
        memset(&dc2_param, 0, sizeof(dc2_param));

        dc2_param.set_id = 7;
        dc2_param.cpu_flag[CPU_TYPE_ALL] = 1;
        dc2_param.start = 0x18004000;
        dc2_param.end = 0x18004ffc;
        dc2_param.operation = OPERA_MONITOR;
        dc2_param.rw = RW_FLAG_WO;
        dc2_param.str = STR_FLAG_YES;

        // set dbg range
        if(sb2_dbg_monitor(&dc2_param)) {
                pr_err("sb2_dbg_set fail!\n");
        }
}

#endif

static int rtk_sb2_probe(struct platform_device *pdev)
{
        int ret = 0;
        struct device_node *np = pdev->dev.of_node;

        if (!np)
        {
                pr_err("[%s]there is no device node\n",__func__);
                return -ENODEV;
        }

        rtk_sb2_irq_num = irq_of_parse_and_map(np, 0);
        if(!rtk_sb2_irq_num){
                pr_err("%s there is no sb2 irq\n",__func__);
                of_node_put(np);
                return -ENODEV;
        }

        rtk_sb2_setup();

        sb2_intr_setup();

        return ret;
}

static int rtk_sb2_probe_remove(struct platform_device *pdev)
{
        return 0;
}

static const struct of_device_id sb2_of_match[] =
{
        {
                .compatible = "realtek,sb2",
        },
        {},
};

static struct platform_driver rtk_sb2_driver =
{
        .probe          = rtk_sb2_probe,
        .driver = {
                .name = "sb2",
                .of_match_table = sb2_of_match,
        },
        .remove = rtk_sb2_probe_remove,
};
MODULE_DEVICE_TABLE(of, sb2_of_match);
module_platform_driver(rtk_sb2_driver);



#if 1
//id:16 scpu 18061900-18061920 rw str
static int __init bootparam_sb2_set (char *str)
{
    int loop=0;
    sb2_dbg_param param;
    char num[5]={0};
    char cpu[20]={0};
    char range[20]={0};
    char rw[5]={0};
    char str_id[5]={0};
    int Num=0;
    
    if(str == NULL)
    {
        return -1;
    }
    
    for(loop=0;loop<10;loop++)
    {
        if(str[loop]==0)
        {
            str[loop]=0x20;
        }
    }

    sscanf(str,"%s %s %s %s %s",num,cpu,range,rw,str_id);
    sscanf(&num[3],"%d",&Num);
    pr_err("[SB2_MONITOR][%d] %s %s %s %s\n",Num,cpu,range,rw,str_id);

    if((Num>16)||(Num<1))
    {   
           return -1;
    }    
    param.operation = OPERA_MONITOR;
    param.set_id=Num;
    
    if(parse_cpu_field(cpu, &param)) 
    {
        pr_err("parse cpu_field fail!\n");
        return -1;
    }

    if(parse_range_field(range, &param)) 
    {
        pr_err("parse range_field fail!\n");
        return -1;
    }

    if(parse_rw_flag(rw, &param)) 
    {
        pr_err("parse opt_field:rw_flag fail\n");
        return -1;
    }

    //get str flag
    if(parse_str_flag(str_id, &param))
    {
        pr_err("parse opt_field:str_flag fail\n");
        return -1;
    }

    // set dbg range
    if(sb2_dbg_monitor(&param)) 
    {
        pr_err("sb2_dbg_set fail!\n");
        return -1;
    }

    return 0;
}
__setup(SB2_ENV_MEM_SET, bootparam_sb2_set);

#endif

#if 1
//id:1 18061500 0x8000 0x8000 acpu str
static int __init bootparam_sb2_bit_set (char *str)
{
    sb2_dbg_bit_param param;
    char num[5]={0};
    char cpu[20]={0};
    char range[20]={0};
    char str_id[5]={0};
    int Num=0;
    int dbg3_1=0;
    int dbg3_2=0;
    int loop=0;
    
    if(str == NULL)
    {
        return -1;
    }

    for(loop=0;loop<10;loop++)
    {
        if(str[loop]==0)
        {
            str[loop]=0x20;
        }
    }
    sscanf(str,"%s %s %x %x %s %s",num,range,&dbg3_1,&dbg3_2,cpu,str_id);
    sscanf(&num[3],"%d",&Num);
    pr_err("[SB2_BIT_MONITOR][%d] %s %x %x %s %s\n",Num,range,dbg3_1,dbg3_2,cpu,str_id);

    if((Num>4)||(Num<1))
    {   
        pr_err("parse Num fail!\n");
        return -1;
    }
    if((dbg3_1<1)||(dbg3_2<1))
    {
        pr_err("parse dbg3_1 dbg3_2 fail!\n");
        return -1;
    }
    param.operation = OPERA_MONITOR;
    param.set_id=Num;
    param.dbg3_1=dbg3_1;
    param.dbg3_2=dbg3_2;
    
    if(parse_bit_cpu_field(cpu, &param)) 
    {
        pr_err("parse cpu_field fail!\n");
        return -1;
    }

    if(parse_bit_range_field(range, &param)) 
    {
        pr_err("parse range_field fail!\n");
        return -1;
    }
    
    //
    if(parse_bit_str_flag(str_id, &param)) 
    {
        pr_err("parse str_field fail!\n");
        return -1;
    }

    // set dbg range
    if(sb2_dbg_bit_monitor(&param)) 
    {
        pr_err("sb2_dbg_set fail!\n");
        return -1;
    }
    return 0;

}
__setup(SB2_ENV_MEM_BIT_SET, bootparam_sb2_bit_set);

#endif

