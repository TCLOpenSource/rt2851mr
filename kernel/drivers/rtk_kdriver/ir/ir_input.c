#include <linux/hrtimer.h>  
#include <linux/ktime.h> 
#include "ir_input.h"
#include "irrc_core.h"
#include "ir_table.h"
#include "irrc_common.h"
#include "ir_input_intercept.h"
#include "ir_input_mouse.h"
// this is for android o
#if defined(CONFIG_RTK_KDRV_IR_SUPPORT_ANDROID_O)
int ir_is_upload_more_key = 1;
#else
int ir_is_upload_more_key = 0;
#endif

eirda_report_mode ir_report_mode = IRDA_REPORT_MODE_NORMAL;

#if defined(CONFIG_RTK_KDRV_TV030_IR )
/******************Some TCL custom code**********************/
#define FACTORY_KEY_TIMEOUT     100
//rawkey_event=1;
// add for factory
static int custom_code_tcl             = 0;
static int factory_prekeycode          = 0;
static int factory_precustomer_code    = 0;
static unsigned long factory_key_curtime = 0;
static unsigned long factory_key_pretime = 0;
extern int is_factory_customer_code(unsigned int customer_code);
#endif

#if defined(CONFIG_RTK_KDRV_YK_54LU)
static int g_CustomCode = YK_54LU_CUSTOMER_CODE;//Pon 20151112 Add Ir Custom Code API
#endif


static struct hrtimer keyup_timer;
unsigned int ir_to_mouse = 0;
/*poll enable and poll interval*/
unsigned int ir_poll_settings[MAX_HW_RTK_KDRV_PROTOCOLS_NUM][2] = {{1, 130}, {1, 130}};
extern int ir_mute_flag;
extern unsigned int repeat_event;
extern unsigned int rawkey_event;
extern eirda_report_mode ir_report_mode;
sirda_report_mode ir_report_mode_list[IRDA_REPORT_MODE_MAX] = {
        {IRDA_REPORT_MODE_NORMAL,       "normal"},
#if defined(CONFIG_RTK_KDRV_TV030_IR )
        {IRDA_REPORT_MODE_TCL,          "tcl"},
#endif
};
static struct venus_ir_data *data = NULL;
IR_Keycode_List intercept_keycode_list;
extern char g_ir_customer_name[32];

// this is for android o
void venus_ir_init_report_more_key(void)
{
    if(NULL != data)
    {
        set_bit(KEY_VOLUME_UP_ANDROID_O,     data->input_dev->keybit);
        set_bit(KEY_VOLUME_DOWN_ANDROID_O,   data->input_dev->keybit);
        set_bit(KEY_MUTE_ANDROID_O,          data->input_dev->keybit);
    }
    else
        IR_WARNING("fail to init report mode of android o\n");
}

int venus_ir_input_set_input_dev_name(const char *name)
{
#ifdef CONFIG_RTK_KDRV_DYNAMIC_INPUT_DEV_NAME  
    if(data == NULL || data->input_dev == NULL ||name == NULL)
        return -1;
    data->input_dev->name = name;
#endif
    return 0;
}


void schedule_venus_ir_keyup_handler(uint32_t which)
{
    ktime_t ktime; 
#ifdef CONFIG_RTK_KDRV_YK_54LU
    if (data->prev_keycode && data->prev_keycode != data->keycode && hrtimer_is_queued(&keyup_timer)) {
        hrtimer_cancel(&keyup_timer);
#ifdef DEV_DEBUG
        printk(KERN_WARNING "[%s,%d,%s]keycode_up==%08x\n",__FILE__,__LINE__,__FUNCTION__,data->prev_keycode);
#endif
        input_report_key(data->input_dev, data->prev_keycode, 0);
        input_sync(data->input_dev);
        data->prev_keycode = 0;
    }
#endif
    hrtimer_cancel(&keyup_timer);

    keyup_timer.function = venus_ir_input_report_end;  
    ktime = ktime_set(0, ir_poll_settings[which][1] * NS_PER_MS );  
    hrtimer_start(&keyup_timer, ktime, HRTIMER_MODE_REL);
}


///////////////////////////////report mode////////////////////////////////////
static void venus_ir_input_report_mode_normal(u32 keycode,u32 custcode)
{
    if(!data->dataRepeat)
    {
        if(!rawkey_event)
        {
            input_report_key(data->input_dev, keycode, 1);
        }
        else
        {
            input_report_key(data->input_dev, custcode, 1);
            input_report_key(data->input_dev, keycode, 1);
            IR_DBG("%s: %04x %04x\n", __func__, custcode, keycode);
        }
        input_sync(data->input_dev);
        data->dataRepeat = 1;
    }
    else if(repeat_event)
    {
        if(!rawkey_event)
        {
            input_event(data->input_dev, EV_KEY, keycode, 2);
        }
        else
        {
            input_event(data->input_dev, EV_KEY, custcode, 2);
            input_event(data->input_dev, EV_KEY, keycode, 2);
        }
        input_sync(data->input_dev);
    }
}

// this is for android o
static void venus_ir_input_report_more_key(u32 keycode,u32 custcode,int isDown)
{
    isDown = isDown?1:0;
    // volume up
    if(KEY_VOLUMEUP == data->keycode)
    {
        IR_DBG("VOLUME_UP_ANDROID_O = 0x%08x\n", KEY_VOLUME_UP_ANDROID_O);
        input_report_key(data->input_dev, KEY_VOLUME_UP_ANDROID_O, isDown);
        input_sync(data->input_dev);
    }
    // volume down
    else if (KEY_VOLUMEDOWN == data->keycode)
    {
        IR_DBG("VOLUME_DOWN_ANDROID_O = 0x%08x\n", KEY_VOLUME_DOWN_ANDROID_O);
        input_report_key(data->input_dev, KEY_VOLUME_DOWN_ANDROID_O, isDown);
        input_sync(data->input_dev);
    }
    else if(KEY_MUTE == data->keycode)
    {
        IR_DBG("MUTE_ANDROID_O = 0x%08x\n", KEY_MUTE_ANDROID_O);
        input_report_key(data->input_dev, KEY_MUTE_ANDROID_O, isDown);
        input_sync(data->input_dev);
    }
}
#if defined(CONFIG_RTK_KDRV_TV030_IR )
static void venus_ir_input_report_mode_TCL(u32 keycode)
{

    //Modified by TCL_FACTORY
    if(is_factory_customer_code(custom_code_tcl)){
        if(factory_key_curtime == 0){
            IR_DBG("first time press factory_key_curtime == 0 \n");
            IR_DBG("Venus IR: -report factory key %u 0x%x\n", keycode,((custom_code_tcl << 16) | 1));
            factory_key_curtime = ((unsigned long)((jiffies)*(1000/HZ)));
            factory_key_pretime = factory_key_curtime;
            //input_report_key_Tcl(data->input_dev, keycode, ((custom_code_tcl << 16) | 1));
            input_event(data->input_dev, EV_KEY_RAW, keycode, ((custom_code_tcl << 16) | 1));
        }
        else
        {
            factory_key_curtime = ((unsigned long)((jiffies)*(1000/HZ)));
            if((factory_key_curtime - factory_key_pretime) < FACTORY_KEY_TIMEOUT) //no timeout
            {
                if(factory_precustomer_code == custom_code_tcl && factory_prekeycode == keycode){// the same key action
                    IR_DBG(" ignore the repeat key action between 500ms\n");
                    factory_key_pretime = factory_key_curtime;
                }else{
                    IR_DBG("factory precustomer_code = 0x%x , prekeycode = 0x%x \n",factory_precustomer_code,factory_prekeycode);
                    IR_DBG("Venus IR: -report factory key %d 0x%x\n", keycode,((custom_code_tcl << 16) | 1));
                    //input_report_key_Tcl(data->input_dev, keycode, ((custom_code_tcl << 16) | 1));
                    input_event(data->input_dev, EV_KEY_RAW, keycode, ((custom_code_tcl << 16) | 1));
                    factory_key_pretime = factory_key_curtime;
                }
            }
            else
            {
                IR_DBG("Venus IR: -report factory key %d 0x%x\n", keycode,((custom_code_tcl << 16) | 1));
                //input_report_key_Tcl(data->input_dev, keycode, ((custom_code_tcl << 16) | 1));
                input_event(data->input_dev, EV_KEY_RAW, keycode, ((custom_code_tcl << 16)) | 1);
                factory_key_pretime = factory_key_curtime;
            }
        }

        factory_precustomer_code = custom_code_tcl;
        factory_prekeycode = keycode;
        input_sync(data->input_dev);
    }else if(!data->dataRepeat){
        IR_DBG("Venus IR: -report key down %u\n", keycode);
        input_report_key(data->input_dev, keycode, 1);       
        input_sync(data->input_dev);       
        data->dataRepeat = 1; 
    }
    

}
#endif
void venus_ir_input_report_key(uint32_t repkey)
{
    u32 keycode = 0;
    u32 custcode = 0;

    if(ir_poll_settings[MAIN1][0] || ir_poll_settings[MAIN0][0]) {
        if (data->prev_keycode && data->prev_keycode != data->keycode && hrtimer_is_queued(&keyup_timer)) {
            IR_DBG( "[%s,%d,%s]keycode_up==%x\n",__FILE__,__LINE__,__FUNCTION__,data->prev_keycode);
            input_report_key(data->input_dev, data->prev_keycode, 0);
            input_sync(data->input_dev);
            data->prev_keycode = 0;
            data->dataRepeat = 0;
        }   
    }

    if(!rawkey_event) {
        keycode = data->keycode;
    } else {
        custcode = (data->scancode) & 0xffff;
        keycode = ((data->scancode) >> 16) & 0xffff;
    }

    if(ir_mute_flag) {
        if(!data->dataRepeat)
            data->dataRepeat = 1;
        return;
    }
        
    if(unlikely(intercept_keycode_list.keycode_array_not_empty)) {
        u32 flags = 0;
        if(ir_query_keycode_from_list(&intercept_keycode_list, data->keycode, &flags)) {
            if(!data->dataRepeat) {
                if(flags & KEYCODE_INTERCEPT_DISABLE_IRDA_DECODE) {
                    ir_decode_key_on_off(OFF);
                    mod_timer(&intercept_keycode_list.timer, jiffies + MAX_IR_DISABLE_KEY_TIME);
                }
                schedule_work(&intercept_keycode_list.work);
                data->dataRepeat = 1;
            }
            return;
        }
    }     
    
    if (keycode <= 0 && custcode <=0)
        return;
    
#ifdef CONFIG_RTK_KDRV_INPUT_DEVICE_MOUSE
    if(ir_to_mouse && venus_ir_is_simulated_key(data, keycode)) {
        venus_ir_mouse_report_event(data, keycode);
        data->mouseRepeat++;
        return;
    }
#endif

    IR_DBG("ir_report_mode= %d %s\n"
            ,ir_report_mode
            ,ir_report_mode_list[ir_report_mode].name);

    // this is for android o
    if(ir_is_upload_more_key)
        venus_ir_input_report_more_key(keycode,custcode,1);

    switch(ir_report_mode)
    {
    case IRDA_REPORT_MODE_NORMAL:
        venus_ir_input_report_mode_normal(keycode,custcode);
        break;
#if defined(CONFIG_RTK_KDRV_TV030_IR )
    case IRDA_REPORT_MODE_TCL:
        venus_ir_input_report_mode_TCL(data->keycode);
        break;
#endif
    default:
        IR_ERR("there is no input report mode\n");
        break;
    }
}

void venus_ir_gen_keyupdown_event(uint32_t keycode)
{
    input_report_key(data->input_dev, keycode, 1);
    input_sync(data->input_dev);
    input_report_key(data->input_dev, keycode, 0);
    input_sync(data->input_dev);
}


u32 venus_ir_scancode_to_keycode(uint32_t value)
{
    int i;
    u32  keycode = 0;
    u32 scancode;
    u32 customer_code;

    data->scancode = value;
#if defined(CONFIG_RTK_KDRV_TV030_IR )
    custom_code_tcl = 0;
#endif
    keycode = venus_ir_user_key_table_getkeycode_by_scancode(value, NULL, NULL);
    if(keycode != KEY_RESERVED) {
	data->prev_keycode = data->keycode;
        data->keycode = keycode;
        printk("USER KEY TABLE: report key 0x%x %d\n",  value, data->keycode); 
        return data->keycode; 
    }

    scancode = value;
    FIND_AND_REPORT_SCANCODE_TO_KEYCODE("rtk_user_custom_default_table", &rtk_user_custom_default_table, data, scancode);
    
    if (((value & 0x0000FFFF) == ((TV030_JP_CUSTOMER_CODE & 0x00FFFF00) >> 8))
        && (((~((value & 0x00FF0000) >> 16)) & 0xFF) == ((value & 0xff000000) >> 24))) {
        scancode = (value & 0x00FF0000) >> 16;
#if defined(CONFIG_RTK_KDRV_TV030_IR )
        custom_code_tcl = 0;
#endif
        FIND_AND_REPORT_SCANCODE_TO_KEYCODE("tcl_jp_tv", &tcl_jp_tv_key_table, data, scancode);
    }	
#if defined(CONFIG_RTK_KDRV_TV030_IR )
    if ((value & 0xFF0000) == TV030_JP_FACTORY_CUSTOMER_CODE) {
        scancode = (value & 0xFF000000) >> 24;
        custom_code_tcl = (value & 0x000000ff);
        printk("custom_code_tcl_JP:  0x%x\n", custom_code_tcl);
        if(is_factory_customer_code(custom_code_tcl)){
            data->keycode = scancode;
            printk("Venus IR: -report key 0x%x %d\n", scancode, data->keycode);
            return data->keycode;
        }
    }
#endif    
    if (((~((value & 0x000FFF00) >> 8)) & 0xFFF) == ((value & 0xfff00000) >> 20)) {
        scancode = ((value & 0xff000000) >> 24);
#if defined(CONFIG_RTK_KDRV_TV030_IR )
        custom_code_tcl = ((value & 0x00F00000) >> 20);
        custom_code_tcl = change_bits_order(custom_code_tcl, 4);
        printk("custom_code_tcl:  0x%x\n", custom_code_tcl);
        if(is_factory_customer_code(custom_code_tcl)){
            scancode = change_bits_order(scancode, 8);
            data->keycode = scancode;
            printk("Venus IR: -report key 0x%x %d\n", scancode, data->keycode);
            return data->keycode;
        }
#endif        
	FIND_AND_REPORT_SCANCODE_TO_KEYCODE("tcl_tv", &tcl_tv_key_table, data, scancode);
    }
	if ((((~((value & 0xff000000) >> 8)) & 0x00ff0000) == (value & 0x00ff0000)) && ((value & 0x0000ffff) == TV030_TCL_NEC_CUSTOMER_CODE) ){
        scancode = ((value & 0x00ff0000) >> 16);
	FIND_AND_REPORT_SCANCODE_TO_KEYCODE("tcl_NEC_tv", &tcl_nec_tv_key_table, data, scancode);
    }
#if defined(CONFIG_RTK_KDRV_TV030_IR )    
    FIND_AND_REPORT_SCANCODE_TO_KEYCODE("tcl_NEC_dvd_tv", &tcl_tv_dvd_key_table, data, scancode);
#endif

    if ((value & 0x0000ffff) == RTK_MK5_CUSTOMER_CODE) {
        scancode = (value & 0x00ff0000) >> 16;
	FIND_AND_REPORT_SCANCODE_TO_KEYCODE("mk5_tv_key", &rtk_mk5_tv_key_table, data, scancode);
    }

#if defined(CONFIG_RTK_KDRV_YK_54LU)
    //if ((value & 0x0000ffff) == YK_54LU_CUSTOMER_CODE) {
    if ((value & 0x0000ffff) == g_CustomCode) {
        scancode = (value & 0xffff0000) >> 16;
	FIND_AND_REPORT_SCANCODE_TO_KEYCODE("yk_54lu", &yk_54lu_key_table, data, scancode);
    }
    else if((value & 0x0000ffff) == YK_54LU_CUSTOMER_CODE_EX)
    {
        scancode = (value & 0xffff0000) >> 16;
	FIND_AND_REPORT_SCANCODE_TO_KEYCODE("yk_54lu_ex", &yk_54lu_key_table_ex, data, scancode);
    }
#endif
#if defined(CONFIG_RTK_KDRV_YK_76J)
    if ((value & 0x0000ffff) == YK_76J_CUSTOMER_CODE) {
        scancode = (value & 0xffff0000) >> 16;
	FIND_AND_REPORT_SCANCODE_TO_KEYCODE("YK_76J", &yk_76j_key_table, data, scancode);
    }
#endif

#if defined(CONFIG_RTK_KDRV_HAIER_IR)
    if ((value & 0x0000ffff) == 0xe7e7) {
        scancode = (value & 0xffff0000) >> 16;
	FIND_AND_REPORT_SCANCODE_TO_KEYCODE("Haier_tv", &haier_key_tv_table, data, scancode);
    } else if ((value & 0x0000ffff) == 0xf7df) {
        scancode = (value & 0xffff0000) >> 16;
	FIND_AND_REPORT_SCANCODE_TO_KEYCODE("Haier_fac", &haier_key_fac_table, data, scancode);
    } else if ((value & 0x0000ffff) == 0x6f77) { //lyg,20140325,for CVT remote
        scancode = (value & 0xffff0000) >> 16;
	FIND_AND_REPORT_SCANCODE_TO_KEYCODE("Haier_cvt", &haier_key_cvt_table, data, scancode);
    } else if ((value & 0x0000ffff) == 0x20ff) { //lyg,20140325,for MTC remote
        scancode = (value & 0xffff0000) >> 16;
	FIND_AND_REPORT_SCANCODE_TO_KEYCODE("Haier_mtc", &haier_key_mtc_table, data, scancode);
    }
    IR_DBG("IR: report key 0x%x %d, value=0x%x\n", scancode, data->keycode, value);
#endif



    if ((value & 0x0000ffff) == RTK_MK5_2_CUSTOMER_CODE) {
        scancode = (value & 0x00ff0000) >> 16;
	FIND_AND_REPORT_SCANCODE_TO_KEYCODE("RTK_MK5_2", &rtk_mk5_2_tv_key_table, data, scancode);
    }



#if defined(CONFIG_RTK_KDRV_ANDROID_OTT)
    if ((value & 0x0000ffff) == RTK_ANDROID_OTT_CUSTOMER_CODE) {
        scancode = (value & 0xffff0000) >> 16;
	FIND_AND_REPORT_SCANCODE_TO_KEYCODE("RTK_ANDROID_OTT", &rtk_android_ott_stb_key_table, data, scancode);
    }
#endif

    if ((value & 0x0000FFFF) == TV030_KT1752_CUSTOMER_CODE) {
        scancode = (value & 0x00FF0000) >> 16;
	FIND_AND_REPORT_SCANCODE_TO_KEYCODE("tcl_kt1752", &tcl_kt1752_key_table, data, scancode);
    }



#if defined(CONFIG_RTK_KDRV_TV035_IR)
    if ((value & 0x0000ff00) == KONKA_CUSTOMER_CODE && ((value & 0xffff0000) >> 16) == 0 ) {
        scancode = (value & 0x000000ff);
        IR_DBG("Venus IR: -konka: scancode is 0x%x\n", scancode);
	FIND_AND_REPORT_SCANCODE_TO_KEYCODE("konka_tv", &konka_tv_key_table, data, scancode);
    }
#endif

    if ((value & 0x0000ffff) == TV036_10D_CUSTOMER_CODE) {
        scancode = (value & 0x00ff0000) >> 16;
	FIND_AND_REPORT_SCANCODE_TO_KEYCODE("HIKEEN_10D", &Hikeen_10D_tv_key_table, data, scancode);
    }

    if ((value & 0x0000ffff) == RTK_MK5_2_CUSTOMER_CODE) {
        scancode = (value & 0x00ff0000) >> 16;
	FIND_AND_REPORT_SCANCODE_TO_KEYCODE("RTK_MK5_2", &rtk_mk5_2_tv_key_table, data, scancode);
    }


#if defined(CONFIG_RTK_KDRV_TV015_IR)
    if ((value & 0x0000ffff) == TV015_IR_AOC_CUSTOMER_CODE) {
        scancode = (value & 0x00ff0000) >> 16;
	FIND_AND_REPORT_SCANCODE_TO_KEYCODE("TV015_IR_AOC", &tv015_ir_aoc_tv_key_table, data, scancode);
    }

    if (value == TV015_IR_FAC_TEST_CODE1) {
        scancode = value;
        data->prev_keycode = data->keycode;
        data->keycode = KEY_TPVFAC_TEST1;
        IR_DBG("Venus IR: TV015_IR_FAC test key 0x%x %d\n", scancode, data->keycode);
        return data->keycode;
    } else if (value == TV015_IR_FAC_TEST_CODE2) {
        scancode = value;
        data->prev_keycode = data->keycode;
        data->keycode = KEY_TPVFAC_TEST2;
        IR_DBG("Venus IR: TV015_IR_FAC test key 0x%x %d\n", scancode, data->keycode);
        return data->keycode;
    } else if ((value & 0x0000ffff) == TV015_IR_FAC_CUSTOMER_CODE) {
        scancode = (value & 0x00ff0000) >> 16;
	FIND_AND_REPORT_SCANCODE_TO_KEYCODE("TV015_IR_FAC", &tv015_ir_fac_tv_key_table, data, scancode);
    }

    if ((value & 0x00000000) == TV015_IR_RC6_CUSTOMER_CODE) {
        scancode = (value & 0x000000ff);
	FIND_AND_REPORT_SCANCODE_TO_KEYCODE("TV015_IR_RC6", &tv015_ir_rc6_tv_key_table, data, scancode);
    }
#endif

#if defined(CONFIG_RTK_KDRV_TV005_IR)
    customer_code = value & 0x0000ffff;
    if ((customer_code == TV005_CUSTOMER_CODE1) || (customer_code == TV005_CUSTOMER_CODE2) || (customer_code == TV005_CUSTOMER_CODE3)) {
        scancode = (value & 0x00ff0000) >> 16;
	FIND_AND_REPORT_SCANCODE_TO_KEYCODE("TV005", &tv005_key_table, data, scancode);
    }
#endif
#if defined(CONFIG_RTK_KDRV_TV002_IR_RAW_MODE)
    customer_code = (value >> 7) & 0xfff;
    scancode = value & 0x0000007f;
#else
    customer_code = (value >> 27) & 0xfff;
    scancode = (value & 0x07f00000) >> 20;
#endif
    FIND_AND_REPORT_SCANCODE_TO_KEYCODE_2("TV002", &tv002_key_table, data, customer_code, scancode);

    if(i == tv002_key_table.size) {
        IR_DBG("###Venus IR: Not TV002 report key 0x%x %x###\n", customer_code, scancode);
    }

#if defined(CONFIG_RTK_KDRV_YK_54LU_SHUTTLE)
    if ((value & 0x00000003) == YK_54LU_SHUTTLE_CUSTOMER_CODE) {
        scancode = (value & 0x000000e0) >> 5;
	FIND_AND_REPORT_SCANCODE_TO_KEYCODE("YK_54LU_SHUTTLE", &yk_54lu_key_table, data, scancode);
    }
#endif
#if defined(CONFIG_RTK_KDRV_YK_76J_SHUTTLE)
    if ((value & 0x00000003) == YK_76J_SHUTTLE_CUSTOMER_CODE) {
        scancode = (value & 0x000000e0) >> 5;
	FIND_AND_REPORT_SCANCODE_TO_KEYCODE("YK_76J_SHUTTLE", &yk_76j_key_table, data, scancode);
    }
#endif
    return 0;
}

bool venus_ir_input_set_customcode(int customer)
{
#if defined(CONFIG_RTK_KDRV_YK_54LU)
    g_CustomCode = customer & 0x0000FFFF;
    printk(KERN_ALERT "Ir Custom Code changed 0x%4X \n", g_CustomCode);
#endif
    return true;
}
int venus_ir_input_get_customcode(void)
{
#if defined(CONFIG_RTK_KDRV_YK_54LU)
    printk(KERN_ALERT "Ir Custom Code: 0x%4X \n", g_CustomCode);
    return g_CustomCode;
#else
    return 0;
#endif

}

u32 venus_ir_keycode_to_scancode(uint32_t value, unsigned int *scancode_arrays, unsigned int array_len)
{
	u32 scancode = 0;
	u32 custcode = 0;
        u32 num = 0;

        if(!scancode_arrays || !array_len)
            return 0;

	num = venus_ir_user_key_table_find_scancodes(ir_get_standby_protocol() ,value, scancode_arrays, array_len);
	if(num != 0) {
		IR_DBG("User key table keycode %d to scancode 0x%x\n", value, scancode_arrays[0]); 
		return num;
	}

        FIND_AND_REPORT_KEYCODE_TO_SCANCODE_3("rtk_user_custom_default_table", &rtk_user_custom_default_table, value, ir_get_standby_protocol());
	if(scancode != 0)
        	goto EXIT;
        
	switch(ir_keymap_type) {

	case IRDA_KEYMAP_TYPE_NEC:
	FIND_AND_REPORT_KEYCODE_TO_SCANCODE("RTK_MK5_2", &rtk_mk5_2_tv_key_table, value);
	if(scancode != 0)
        	scancode = (~scancode & 0xff) << 24 | (scancode & 0xff) << 16 | RTK_MK5_2_CUSTOMER_CODE;
        break;

    case IRDA_KEYMAP_TYPE_TV002:
	FIND_AND_REPORT_KEYCODE_TO_SCANCODE_2("SONY", &tv002_key_table, value);
	if(scancode != 0 || custcode != 0)
		scancode = ((scancode & 0x7f) << 20) | ((custcode & 0xfff) << 27);
        break;
    case IRDA_KEYMAP_TYPE_TV036_10D:
	FIND_AND_REPORT_KEYCODE_TO_SCANCODE("TV036_10D", &Hikeen_10D_tv_key_table, value);
	if(scancode != 0)
		scancode = (~scancode & 0xff) << 24 | (scancode & 0xff) << 16 | TV036_10D_CUSTOMER_CODE;
        break;

    case IRDA_KEYMAP_TYPE_TV030_JP:
	FIND_AND_REPORT_KEYCODE_TO_SCANCODE("TCL JP", &tcl_jp_tv_key_table, value);
	if(scancode != 0)
		scancode = (((~scancode) << 24) | (scancode << 16) | (TV030_JP_CUSTOMER_CODE >> 8));
        break;
    case IRDA_KEYMAP_TYPE_TV030:
	FIND_AND_REPORT_KEYCODE_TO_SCANCODE("RCA", &tcl_tv_key_table, value);
        if(scancode != 0)
                scancode =  (scancode << 24) | ((~((scancode <<4) & 0xfff) & 0xfff) << 8);
        break;
    case IRDA_KEYMAP_TYPE_TV030_NEC:
	FIND_AND_REPORT_KEYCODE_TO_SCANCODE("TCL_NEC", &tcl_nec_tv_key_table, value);
	if(scancode != 0)
		scancode = ((~scancode & 0xff) << 24) | ((scancode & 0xff) << 16) | TV030_TCL_NEC_CUSTOMER_CODE;
        break;
    case IRDA_KEYMAP_TYPE_TV030_KT1752:
	FIND_AND_REPORT_KEYCODE_TO_SCANCODE("KT1752", &tcl_kt1752_key_table, value);
	if(scancode != 0)
		scancode = (((~scancode) & 0xff) << 24) | ((scancode & 0xff) << 16) | TV030_KT1752_CUSTOMER_CODE;
        break;

    default:
		IR_DBG("Doesn't support keycode translate to scancode\n");
    }

EXIT:
    if(scancode != 0) {
        scancode_arrays[0] = scancode;
        num = 1;
    }
    return num;
}

uint32_t venus_ir_keylist_to_scanlist(uint32_t *keylist, uint32_t keycnt, uint32_t *scanlist, uint32_t scancnt)
{
	uint32_t i = 0;
        uint32_t remain_scanlist_cnt = scancnt;
        uint32_t cur_scanlist_index = 0;

	for(i = 0; i < keycnt; i++) {
                unsigned int tmp[8];
                unsigned int cnt = venus_ir_keycode_to_scancode(keylist[i], tmp, 8);
                if(cnt) {
                    unsigned int tmp_cnt = (remain_scanlist_cnt > cnt) ? cnt : remain_scanlist_cnt;
                    memcpy(scanlist + cur_scanlist_index, tmp, sizeof(unsigned int) * tmp_cnt);
                    cur_scanlist_index += tmp_cnt;
                    remain_scanlist_cnt -= tmp_cnt;
                    if(remain_scanlist_cnt == 0)
                        break;
                }
	}
        return cur_scanlist_index;
}

static void venus_ir_input_report_end_normal(u32 keycode, u32 custcode)
{
    IR_DBG("%s\n", __func__);
    if(!rawkey_event)
    {
        input_report_key(data->input_dev, keycode, 0);
        input_sync(data->input_dev);
    }
    else
    {
        input_report_key(data->input_dev, custcode, 0);
        input_report_key(data->input_dev, keycode, 0);
        input_sync(data->input_dev);
    }
}

#if defined(CONFIG_RTK_KDRV_TV030_IR )
void venus_ir_input_report_end_TCL(u32 keycode)
{
    IR_DBG("roger %s keycode=0x%x\n",__func__,keycode);

    if(is_factory_customer_code(custom_code_tcl)){
        IR_DBG("====>: report key 0x%x\n", keycode);
        //input_report_key_Tcl(data->input_dev, keycode, ((custom_code_tcl << 16) | 0));
        input_event(data->input_dev, EV_KEY_RAW, keycode, ((custom_code_tcl << 16) | 0));
    }else{
        IR_DBG("roger %s keycode=0x%x up\n",__func__,keycode);
        input_report_key(data->input_dev, keycode, 0);
    }
    // end modified by TCL_FACTORY
    input_sync(data->input_dev);

}
#endif

///////////////////////////////////////////////////////////////////////
enum hrtimer_restart venus_ir_input_report_end(struct hrtimer *timer)
{
    u32 keycode = 0;
    u32 custcode = 0;

    if(!rawkey_event) {
        keycode = data->keycode;
    } else {
        custcode = (data->scancode) & 0xffff;
        keycode = ((data->scancode) >> 16) & 0xffff;
    }

    if(ir_mute_flag) {
        data->dataRepeat = 0;
        data->keycode = 0;
        return HRTIMER_NORESTART;
    }
        
    if(unlikely(intercept_keycode_list.keycode_array_not_empty)) {
        u32 flags = 0;
        if(ir_query_keycode_from_list(&intercept_keycode_list, data->keycode, &flags)) {
            data->dataRepeat = 0;
            data->keycode = 0;
            return HRTIMER_NORESTART;
        }
    }        
    
    if (keycode <= 0 && custcode <= 0)
        return HRTIMER_NORESTART;

#ifdef CONFIG_RTK_KDRV_INPUT_DEVICE_MOUSE
    if(ir_to_mouse && venus_ir_is_simulated_key(data, keycode)) {
        venus_ir_mouse_report_end(data, keycode);
        data->mouseRepeat = 1;
        return HRTIMER_NORESTART;
    }
#endif

    // this is for android o
    if(ir_is_upload_more_key)
        venus_ir_input_report_more_key(keycode,custcode,0);

    switch(ir_report_mode)
    {
    case IRDA_REPORT_MODE_NORMAL:
        venus_ir_input_report_end_normal(keycode,custcode);
        break;
#if defined(CONFIG_RTK_KDRV_TV030_IR )
    case IRDA_REPORT_MODE_TCL:
        venus_ir_input_report_end_TCL(data->keycode);
        break;
#endif
    default:
        IR_ERR("there is no input report mode\n");
        break;
    }
    data->dataRepeat = 0;
    data->keycode = 0;
    return HRTIMER_NORESTART;
}

int _venus_ir_setkeycode(struct input_dev *dev, const struct input_keymap_entry *pentry, unsigned int *old_keycode)
{
    u32 ir_scancode = 0;
    u32 ir_protocol = 0;
    int ret = -1;
    
    *old_keycode = KEY_CNT;
	
    IR_DBG("venus_ir_setkeycode\n");

    if (pentry->flags & INPUT_KEYMAP_BY_INDEX) {
        IR_ALERT("INPUT_KEYMAP_BY_INDEX is not supported\n");
        return -EINVAL;
    }

    memcpy(&ir_scancode, pentry->scancode, sizeof(ir_scancode));
    memcpy(&ir_protocol, pentry->scancode + sizeof(ir_scancode), sizeof(ir_protocol));

    ret = venus_ir_user_key_table_setkeycode(ir_scancode, pentry->keycode, ir_protocol, old_keycode);
    
    if(ret != 0) {
        IR_ALERT("venus_ir_user_key_table_setkeycode fail: can not add keycode,scancode=%x, keycode=%x, protocol == %x\n",
                                        ir_scancode, pentry->keycode, ir_protocol);
        return -ENOMEM;
    }

    IR_ALERT("venus_ir_user_key_table_setkeycode succ: scancode=%x, keycode=%x, protocol == %x\n",
                                        ir_scancode, pentry->keycode, ir_protocol);

    if(*old_keycode != KEY_CNT) {
        __clear_bit(*old_keycode, dev->keybit);
        __set_bit(pentry->keycode, dev->keybit);

        if(venus_ir_user_key_table_check_keycode_exist(*old_keycode) == 0)
            __set_bit(*old_keycode, dev->keybit);
        return 0;
    }

    return 0;
}


int _venus_ir_getkeycode(struct input_dev *pdev, struct input_keymap_entry *pentry)
{
    int is_found = 0;
    u32 ir_scancode = 0;
    u32 ir_keycode = KEY_RESERVED;
    u32 ir_protocol = 0;
    u32 index = 0;

    

    if (pentry->flags & INPUT_KEYMAP_BY_INDEX) {
        index = pentry->index;
        ir_keycode = venus_ir_user_key_table_getkeycode_by_index(index, &ir_scancode, &ir_protocol);
    } else {
        memcpy(&ir_scancode, pentry->scancode, sizeof(ir_scancode));
        ir_keycode = venus_ir_user_key_table_getkeycode_by_scancode(ir_scancode, &index, &ir_protocol);
    }
    if(ir_keycode != KEY_RESERVED) {
        pentry->index = index;
        is_found = 1;
        pentry->keycode = ir_keycode;
        pentry->len = sizeof(ir_scancode) + sizeof(ir_protocol);
        memcpy(pentry->scancode, &ir_scancode, sizeof(ir_scancode));
        memcpy(pentry->scancode + sizeof(ir_scancode), &ir_protocol, sizeof(ir_protocol));
        IR_DBG("[getkeycode]index=%d, scancode=%x, keycode=%x, protocol = %x"
                ,pentry->index, ir_scancode, pentry->keycode, ir_protocol);
    }

    if(!is_found) {
        pentry->index   = 0;
        goto fail_to_find_keycode;
    }
    return 0;

fail_to_find_keycode:
    pentry->keycode = KEY_RESERVED; //not found, set to KEY_RESERVED
    IR_ALERT("[getkeycode]scancode not found, return KEY_RESERVED\n");
    return -EINVAL;
}

int venus_ir_input_init(void)
{
    struct input_dev *input_dev;
    int i, result;

    if(venus_ir_user_key_table_init(NULL, 0) != 0) {
        result = -ENOMEM;
        goto exit;
    }

#if defined(CONFIG_YK_54LU)
    g_CustomCode = YK_54LU_CUSTOMER_CODE;//Pon 20151112 Add Ir Custom Code API
#endif
#if defined(CONFIG_YK_76J)
    g_CustomCode = YK_76J_CUSTOMER_CODE;//Pon 20151112 Add Ir Custom Code API
#endif

    data = kzalloc(sizeof(*data), GFP_KERNEL);
    if (!data) {
        result = -ENOMEM;
        goto fail_allocate_data_memory;
    }

    input_dev = input_allocate_device();
    if (!input_dev) {
        result = -ENOMEM;
        IR_ERR("venus IR: can't allocate input device.\n");
        goto fail_alloc_input_dev;
    }

    data->input_dev = input_dev;

    data->input_dev->evbit[0] = BIT_MASK(EV_KEY) | BIT_MASK(EV_REL) | BIT_MASK(EV_MSC) | BIT_MASK(EV_KEY_RAW);
    if(strlen(g_ir_customer_name) > 0) {
        data->input_dev->name = g_ir_customer_name;
    } else {
#ifdef CONFIG_RTK_KDRV_DYNAMIC_INPUT_DEV_NAME
        data->input_dev->name = ir_core_get_cur_remote_control_name();
#else
        data->input_dev->name = "venus_IR_input";
#endif
    }
    data->input_dev->phys = "venus/input0";

    data->input_dev->setkeycode = _venus_ir_setkeycode;
    data->input_dev->getkeycode = _venus_ir_getkeycode;

    data->input_dev->keybit[BIT_WORD(BTN_MOUSE)] = BIT_MASK(BTN_LEFT) | BIT_MASK(BTN_RIGHT) | BIT_MASK(BTN_MIDDLE);
    data->input_dev->relbit[0] = BIT_MASK(REL_X) | BIT_MASK(REL_Y) | BIT_MASK(REL_WHEEL);
    data->input_dev->mscbit[0] = BIT_MASK(EV_MSC);

    // this is for android o
    venus_ir_init_report_more_key();
    SET_INPUT_DEV_KEY_BITS(&rtk_mk5_tv_key_table, data->input_dev);
    
#if defined(CONFIG_RTK_KDRV_YK_54LU)
    SET_INPUT_DEV_KEY_BITS(&yk_54lu_key_table, data->input_dev);
    SET_INPUT_DEV_KEY_BITS(&yk_54lu_key_table_ex, data->input_dev);
#endif
#if defined(CONFIG_RTK_KDRV_YK_76J)
    SET_INPUT_DEV_KEY_BITS(&yk_76j_key_table, data->input_dev);
#endif

#if defined(CONFIG_RTK_KDRV_TV035_IR)
    SET_INPUT_DEV_KEY_BITS(&konka_tv_key_table, data->input_dev);
#endif

    SET_INPUT_DEV_KEY_BITS(&rtk_mk5_2_tv_key_table, data->input_dev);

#if defined(CONFIG_RTK_KDRV_ANDROID_OTT)
    SET_INPUT_DEV_KEY_BITS(&rtk_android_ott_stb_key_table, data->input_dev);
#endif

#if defined(CONFIG_RTK_KDRV_TV015_IR)
    SET_INPUT_DEV_KEY_BITS(&tv015_ir_aoc_tv_key_table, data->input_dev);
    SET_INPUT_DEV_KEY_BITS(&tv015_ir_fac_tv_key_table, data->input_dev);
    SET_INPUT_DEV_KEY_BITS(&tv015_ir_rc6_tv_key_table, data->input_dev);
#endif

#if defined(CONFIG_RTK_KDRV_TV005_IR)
    SET_INPUT_DEV_KEY_BITS(&tv005_key_table, data->input_dev);
#endif

    SET_INPUT_DEV_KEY_BITS(&tv002_key_table, data->input_dev);

    SET_INPUT_DEV_KEY_BITS(&tcl_jp_tv_key_table, data->input_dev);
    SET_INPUT_DEV_KEY_BITS(&tcl_nec_tv_key_table, data->input_dev);
    SET_INPUT_DEV_KEY_BITS(&tcl_tv_key_table, data->input_dev);	
#if defined(CONFIG_RTK_KDRV_TV030_IR )
    set_factory_key_table(data->input_dev);
    SET_INPUT_DEV_KEY_BITS(&tcl_tv_dvd_key_table, data->input_dev);
#endif
    SET_INPUT_DEV_KEY_BITS(&tcl_kt1752_key_table, data->input_dev);


#ifdef CONFIG_RTK_KDRV_HAIER_IR //Haier
    SET_INPUT_DEV_KEY_BITS(&haier_key_tv_table, data->input_dev);
    SET_INPUT_DEV_KEY_BITS(&haier_key_fac_table, data->input_dev);
    SET_INPUT_DEV_KEY_BITS(&haier_key_cvt_table, data->input_dev);
    SET_INPUT_DEV_KEY_BITS(&haier_key_mtc_table, data->input_dev);
#endif

    SET_INPUT_DEV_KEY_BITS(&Hikeen_10D_tv_key_table, data->input_dev);

    SET_INPUT_DEV_KEY_BITS(&rtk_user_custom_default_table, data->input_dev);
    SET_INPUT_DEV_KEY_BITS(&g_ir_user_key_table, data->input_dev);

    ir_intercept_function_init(&intercept_keycode_list, data);

    result = input_register_device(data->input_dev);
    if (result) {
        IR_ERR("Venus IR: cannot register input device.\n");
        goto fail_register_input_dev;
    }
    
    for(i = KEY_RESERVER_MIN; i <= KEY_RESERVER_MAX; i++) {
        set_bit(i, data->input_dev->keybit);
    }

#if defined(CONFIG_RTK_KDRV_INPUT_DEVICE_MOUSE)
    if (venus_ir_mouse_init(data) != 0) {
        IR_ERR(" fail to register as an mouse device.\n");
        goto fail_register_input_mouse;
    }
#endif

    keyup_timer.function = venus_ir_input_report_end;  
    hrtimer_init( &keyup_timer, CLOCK_MONOTONIC, HRTIMER_MODE_REL); 
    
    return 0;
#if defined(CONFIG_RTK_KDRV_INPUT_DEVICE_MOUSE)
fail_register_input_mouse:
    input_unregister_device(data->input_dev);
#endif
fail_register_input_dev:
    input_free_device(data->input_dev);
fail_alloc_input_dev:
    kfree(data);
fail_allocate_data_memory:
    venus_ir_user_key_table_uninit();
exit:
    return -1;
}

void venus_ir_input_cleanup(void)
{
    ir_intercept_function_uninit(&intercept_keycode_list);
#if defined(CONFIG_RTK_KDRV_INPUT_DEVICE_MOUSE)
    venus_ir_mouse_cleanup(data);
#endif    
    input_unregister_device(data->input_dev);
    input_free_device(data->input_dev);
    kfree(data);
    venus_ir_user_key_table_uninit();
    hrtimer_cancel(&keyup_timer); 	
}


