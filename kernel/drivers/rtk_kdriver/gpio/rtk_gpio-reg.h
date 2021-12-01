#ifndef __RTK_GPIO_REG_H__
#define __RTK_GPIO_REG_H__

//////////////////////////////////////////////////////////////////////////////////
// register access apis
//////////////////////////////////////////////////////////////////////////////////
static DEFINE_SPINLOCK(rtk_gpio_irq_lock);
static unsigned long _GPIOFlags;

#define gpio_ioread32(reg)          rtd_inl(reg)
#define gpio_iowrite32(reg, val)    rtd_outl(reg, val)
#define gpio_iowrite32_protect(reg, val)    {rtd_outl(reg, (val|0x1));rtd_outl(reg, ~(val|0x1));}
#define ioread_reg_bit(reg, bits)   ((gpio_ioread32(reg) >> (bits)) & 0x1)

static inline void iowrite_reg_bit(unsigned long reg, unsigned char bit,
                   unsigned char val)
{
    val = (val) ? 1 : 0 ;
    if ((gpio_ioread32(reg) & (0x1 << bit)) != (val << bit))
    {
        spin_lock_irqsave(&rtk_gpio_irq_lock, _GPIOFlags);
        gpio_iowrite32(reg, val | (0x1 << bit));
        spin_unlock_irqrestore(&rtk_gpio_irq_lock, _GPIOFlags);
    }

}

//////////////////////////////////////////////////////////////////////////////////
// register wrapper
//////////////////////////////////////////////////////////////////////////////////


#include <rbus/mis_gpio_reg.h>
#include <rbus/iso_misc_reg.h>
#include <rbus/gpio_reg.h>

#define IRQ_ISO                         (IRQ_CEC)

#define MIS_ISR_reg                     MISC_isr_reg
#define MIS_ISR_assert_int_shift        (MISC_isr_gpio_int_shift)
#define MIS_ISR_gpio_int_shift          (MISC_isr_gpio_int_shift)
#define MIS_UMSK_ISR_GP0A_reg           MIS_GPIO_ISR_GP0A_reg
#define MIS_UMSK_ISR_GP0DA_reg          MIS_GPIO_ISR_GP0DA_reg
#define MIS_GP0IE_reg                   MIS_GPIO_GP0IE_reg
#define MIS_GP0DIR_reg                  MIS_GPIO_GP0DIR_reg
#define MIS_GP0DP_reg                   MIS_GPIO_GP0DP_reg
#define MIS_GP0DATI_reg                 MIS_GPIO_GP0DATI_reg
#define MIS_GP0DATO_reg                 MIS_GPIO_GP0DATO_reg
#define MIS_GPDEB_reg                   MIS_GPIO_GPDEB_reg
#define MIS_GPDEB_1_reg                 MIS_GPIO_GPDEB_1_reg
#define MIS_GP_INT_SEL_reg              MIS_GPIO_GP_INT_SEL_reg
#define MIS_GPI_DATI_reg                MIS_GPIO_GPI0_DATI_reg
#define MIS_GPI_GPIE_reg                MIS_GPIO_GPI0_GPIE_reg
#define MIS_GPI_DP_reg                  MIS_GPIO_GPI0_DP_reg
#define MIS_ISR_GPI_ASSERT_reg          MIS_GPIO_ISR_GPI0_ASSERT_reg
#define MIS_ISR_GPI_DEASSERT_reg        MIS_GPIO_ISR_GPI0_DEASSERT_reg

#ifdef ENABLE_GPO_TYPE_BACKUP_CONFIG
#define MIS_GPO_DATO_reg                MISC_GPIO_GPO_DATO_VADDR_reg
#endif

#define ISO_ISR_reg                     ISO_MISC_ISR_reg
#define ISO_ISR_assert_int_shift        (ISO_MISC_ISR_gpio_int_scpu_shift)
#define ISO_ISR_gpio_int_shift          (ISO_MISC_ISR_gpio_int_scpu_shift)
#define ISO_ISR_GP0A_reg                GPIO_ISR_GP_ASSERT_reg
#define ISO_ISR_GP0DA_reg               GPIO_ISR_GP_DEASSERT_reg
#define ISO_GPIE_reg                    GPIO_GPIE_reg
#define ISO_GPDIR_reg                   GPIO_GPDIR_reg
#define ISO_GPDP_reg                    GPIO_GPDP_reg
#define ISO_GPDATI_reg                  GPIO_GPDATI_reg
#define ISO_GPDATO_reg                  GPIO_GPDATO_reg
#define ISO_GPDEB_reg                   GPIO_GPDEB_reg
#define ISO_GP_INT_SEL_reg              GPIO_GP_INT_SEL_reg
#define ISO_GPINT_EMCU_reg              GPIO_GPINT_EMCU_reg
#define ISO_GPINT_SCPU_reg              GPIO_GPINT_SCPU_reg
#define ISO_GPINT_KCPU_reg              GPIO_GPINT_KCPU_reg

#ifdef RTK_SUPPORT_MIS_GPI_BACKUP_CONFIG
#define GPI_MIS_ISR_reg                 MISC_isr_reg
#define GPI_MIS_ISR_assert_int_shift   (MISC_isr_gpio_int_shift)
#define GPI_MIS_ISR_int_shift          (MISC_isr_gpio_int_shift)
#define GPI_MIS_DATI_reg                MIS_GPIO_GPI0_DATI_reg
#define GPI_MIS_GPIE_reg                MIS_GPIO_GPI0_GPIE_reg
#define GPI_MIS_DP_reg                  MIS_GPIO_GPI0_DP_reg
#define GPI_MIS_ISR_ASSERT_reg          MIS_GPIO_ISR_GPI0_ASSERT_reg
#define GPI_MIS_ISR_DEASSERT_reg        MIS_GPIO_ISR_GPI0_DEASSERT_reg
#endif //RTK_SUPPORT_MIS_GPI_BACKUP_CONFIG

#ifdef RTK_SUPPORT_ISO_GPI_BACKUP_CONFIG
#define GPI_ISO_ISR_reg                 ISO_MISC_ISR_reg
#define GPI_ISO_ISR_assert_int_shift   (ISO_MISC_ISR_gpio_int_scpu_shift)
#define GPI_ISO_ISR_int_shift          (ISO_MISC_ISR_gpio_int_scpu_shift)
#define GPI_ISO_DATI_reg                GPIO_GPI_DATI_reg
#define GPI_ISO_GPIE_reg                GPIO_GPI_GPIE_reg
#define GPI_ISO_DP_reg                  GPIO_GPI_DP_reg
#define GPI_ISO_ISR_ASSERT_reg          GPIO_ISR_GPI_ASSERT_reg
#define GPI_ISO_ISR_DEASSERT_reg        GPIO_ISR_GPI_DEASSERT_reg
#endif //RTK_SUPPORT_ISO_GPI_BACKUP_CONFIG

#ifdef ENABLE_GPO_TYPE_BACKUP_CONFIG
#define ISO_GPO_DATO_reg                ISO_MISC_GPIO_GPO_DATO_VADDR_reg
#endif

#endif /* __RTK_GPIO_REG_H__ */
