/**
* @file Merlin5-DesignSpec-HDMI21_DSCD_Spec
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_DSCD_REG_H_
#define _RBUS_DSCD_REG_H_

#include "rbus_types.h"



//  DSCD Register Address
#define  DSCD_PPS_DW00                                                          0x180BB800
#define  DSCD_PPS_DW00_reg_addr                                                  "0xB80BB800"
#define  DSCD_PPS_DW00_reg                                                       0xB80BB800
#define  DSCD_PPS_DW00_inst_addr                                                 "0x0000"
#define  set_DSCD_PPS_DW00_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW00_reg)=data)
#define  get_DSCD_PPS_DW00_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW00_reg))
#define  DSCD_PPS_DW00_fw_pps003_shift                                           (24)
#define  DSCD_PPS_DW00_fw_pps002_shift                                           (16)
#define  DSCD_PPS_DW00_fw_pps001_shift                                           (8)
#define  DSCD_PPS_DW00_fw_pps000_shift                                           (0)
#define  DSCD_PPS_DW00_fw_pps003_mask                                            (0xFF000000)
#define  DSCD_PPS_DW00_fw_pps002_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW00_fw_pps001_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW00_fw_pps000_mask                                            (0x000000FF)
#define  DSCD_PPS_DW00_fw_pps003(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW00_fw_pps002(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW00_fw_pps001(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW00_fw_pps000(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW00_get_fw_pps003(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW00_get_fw_pps002(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW00_get_fw_pps001(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW00_get_fw_pps000(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW01                                                          0x180BB804
#define  DSCD_PPS_DW01_reg_addr                                                  "0xB80BB804"
#define  DSCD_PPS_DW01_reg                                                       0xB80BB804
#define  DSCD_PPS_DW01_inst_addr                                                 "0x0001"
#define  set_DSCD_PPS_DW01_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW01_reg)=data)
#define  get_DSCD_PPS_DW01_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW01_reg))
#define  DSCD_PPS_DW01_fw_pps007_shift                                           (24)
#define  DSCD_PPS_DW01_fw_pps006_shift                                           (16)
#define  DSCD_PPS_DW01_fw_pps005_shift                                           (8)
#define  DSCD_PPS_DW01_fw_pps004_shift                                           (0)
#define  DSCD_PPS_DW01_fw_pps007_mask                                            (0xFF000000)
#define  DSCD_PPS_DW01_fw_pps006_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW01_fw_pps005_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW01_fw_pps004_mask                                            (0x000000FF)
#define  DSCD_PPS_DW01_fw_pps007(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW01_fw_pps006(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW01_fw_pps005(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW01_fw_pps004(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW01_get_fw_pps007(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW01_get_fw_pps006(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW01_get_fw_pps005(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW01_get_fw_pps004(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW02                                                          0x180BB808
#define  DSCD_PPS_DW02_reg_addr                                                  "0xB80BB808"
#define  DSCD_PPS_DW02_reg                                                       0xB80BB808
#define  DSCD_PPS_DW02_inst_addr                                                 "0x0002"
#define  set_DSCD_PPS_DW02_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW02_reg)=data)
#define  get_DSCD_PPS_DW02_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW02_reg))
#define  DSCD_PPS_DW02_fw_pps011_shift                                           (24)
#define  DSCD_PPS_DW02_fw_pps010_shift                                           (16)
#define  DSCD_PPS_DW02_fw_pps009_shift                                           (8)
#define  DSCD_PPS_DW02_fw_pps008_shift                                           (0)
#define  DSCD_PPS_DW02_fw_pps011_mask                                            (0xFF000000)
#define  DSCD_PPS_DW02_fw_pps010_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW02_fw_pps009_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW02_fw_pps008_mask                                            (0x000000FF)
#define  DSCD_PPS_DW02_fw_pps011(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW02_fw_pps010(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW02_fw_pps009(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW02_fw_pps008(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW02_get_fw_pps011(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW02_get_fw_pps010(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW02_get_fw_pps009(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW02_get_fw_pps008(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW03                                                          0x180BB80C
#define  DSCD_PPS_DW03_reg_addr                                                  "0xB80BB80C"
#define  DSCD_PPS_DW03_reg                                                       0xB80BB80C
#define  DSCD_PPS_DW03_inst_addr                                                 "0x0003"
#define  set_DSCD_PPS_DW03_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW03_reg)=data)
#define  get_DSCD_PPS_DW03_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW03_reg))
#define  DSCD_PPS_DW03_fw_pps015_shift                                           (24)
#define  DSCD_PPS_DW03_fw_pps014_shift                                           (16)
#define  DSCD_PPS_DW03_fw_pps013_shift                                           (8)
#define  DSCD_PPS_DW03_fw_pps012_shift                                           (0)
#define  DSCD_PPS_DW03_fw_pps015_mask                                            (0xFF000000)
#define  DSCD_PPS_DW03_fw_pps014_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW03_fw_pps013_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW03_fw_pps012_mask                                            (0x000000FF)
#define  DSCD_PPS_DW03_fw_pps015(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW03_fw_pps014(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW03_fw_pps013(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW03_fw_pps012(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW03_get_fw_pps015(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW03_get_fw_pps014(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW03_get_fw_pps013(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW03_get_fw_pps012(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW04                                                          0x180BB810
#define  DSCD_PPS_DW04_reg_addr                                                  "0xB80BB810"
#define  DSCD_PPS_DW04_reg                                                       0xB80BB810
#define  DSCD_PPS_DW04_inst_addr                                                 "0x0004"
#define  set_DSCD_PPS_DW04_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW04_reg)=data)
#define  get_DSCD_PPS_DW04_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW04_reg))
#define  DSCD_PPS_DW04_fw_pps019_shift                                           (24)
#define  DSCD_PPS_DW04_fw_pps018_shift                                           (16)
#define  DSCD_PPS_DW04_fw_pps017_shift                                           (8)
#define  DSCD_PPS_DW04_fw_pps016_shift                                           (0)
#define  DSCD_PPS_DW04_fw_pps019_mask                                            (0xFF000000)
#define  DSCD_PPS_DW04_fw_pps018_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW04_fw_pps017_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW04_fw_pps016_mask                                            (0x000000FF)
#define  DSCD_PPS_DW04_fw_pps019(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW04_fw_pps018(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW04_fw_pps017(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW04_fw_pps016(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW04_get_fw_pps019(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW04_get_fw_pps018(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW04_get_fw_pps017(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW04_get_fw_pps016(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW05                                                          0x180BB814
#define  DSCD_PPS_DW05_reg_addr                                                  "0xB80BB814"
#define  DSCD_PPS_DW05_reg                                                       0xB80BB814
#define  DSCD_PPS_DW05_inst_addr                                                 "0x0005"
#define  set_DSCD_PPS_DW05_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW05_reg)=data)
#define  get_DSCD_PPS_DW05_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW05_reg))
#define  DSCD_PPS_DW05_fw_pps023_shift                                           (24)
#define  DSCD_PPS_DW05_fw_pps022_shift                                           (16)
#define  DSCD_PPS_DW05_fw_pps021_shift                                           (8)
#define  DSCD_PPS_DW05_fw_pps020_shift                                           (0)
#define  DSCD_PPS_DW05_fw_pps023_mask                                            (0xFF000000)
#define  DSCD_PPS_DW05_fw_pps022_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW05_fw_pps021_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW05_fw_pps020_mask                                            (0x000000FF)
#define  DSCD_PPS_DW05_fw_pps023(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW05_fw_pps022(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW05_fw_pps021(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW05_fw_pps020(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW05_get_fw_pps023(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW05_get_fw_pps022(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW05_get_fw_pps021(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW05_get_fw_pps020(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW06                                                          0x180BB818
#define  DSCD_PPS_DW06_reg_addr                                                  "0xB80BB818"
#define  DSCD_PPS_DW06_reg                                                       0xB80BB818
#define  DSCD_PPS_DW06_inst_addr                                                 "0x0006"
#define  set_DSCD_PPS_DW06_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW06_reg)=data)
#define  get_DSCD_PPS_DW06_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW06_reg))
#define  DSCD_PPS_DW06_fw_pps027_shift                                           (24)
#define  DSCD_PPS_DW06_fw_pps026_shift                                           (16)
#define  DSCD_PPS_DW06_fw_pps025_shift                                           (8)
#define  DSCD_PPS_DW06_fw_pps024_shift                                           (0)
#define  DSCD_PPS_DW06_fw_pps027_mask                                            (0xFF000000)
#define  DSCD_PPS_DW06_fw_pps026_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW06_fw_pps025_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW06_fw_pps024_mask                                            (0x000000FF)
#define  DSCD_PPS_DW06_fw_pps027(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW06_fw_pps026(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW06_fw_pps025(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW06_fw_pps024(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW06_get_fw_pps027(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW06_get_fw_pps026(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW06_get_fw_pps025(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW06_get_fw_pps024(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW07                                                          0x180BB81C
#define  DSCD_PPS_DW07_reg_addr                                                  "0xB80BB81C"
#define  DSCD_PPS_DW07_reg                                                       0xB80BB81C
#define  DSCD_PPS_DW07_inst_addr                                                 "0x0007"
#define  set_DSCD_PPS_DW07_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW07_reg)=data)
#define  get_DSCD_PPS_DW07_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW07_reg))
#define  DSCD_PPS_DW07_fw_pps031_shift                                           (24)
#define  DSCD_PPS_DW07_fw_pps030_shift                                           (16)
#define  DSCD_PPS_DW07_fw_pps029_shift                                           (8)
#define  DSCD_PPS_DW07_fw_pps028_shift                                           (0)
#define  DSCD_PPS_DW07_fw_pps031_mask                                            (0xFF000000)
#define  DSCD_PPS_DW07_fw_pps030_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW07_fw_pps029_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW07_fw_pps028_mask                                            (0x000000FF)
#define  DSCD_PPS_DW07_fw_pps031(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW07_fw_pps030(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW07_fw_pps029(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW07_fw_pps028(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW07_get_fw_pps031(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW07_get_fw_pps030(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW07_get_fw_pps029(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW07_get_fw_pps028(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW08                                                          0x180BB820
#define  DSCD_PPS_DW08_reg_addr                                                  "0xB80BB820"
#define  DSCD_PPS_DW08_reg                                                       0xB80BB820
#define  DSCD_PPS_DW08_inst_addr                                                 "0x0008"
#define  set_DSCD_PPS_DW08_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW08_reg)=data)
#define  get_DSCD_PPS_DW08_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW08_reg))
#define  DSCD_PPS_DW08_fw_pps035_shift                                           (24)
#define  DSCD_PPS_DW08_fw_pps034_shift                                           (16)
#define  DSCD_PPS_DW08_fw_pps033_shift                                           (8)
#define  DSCD_PPS_DW08_fw_pps032_shift                                           (0)
#define  DSCD_PPS_DW08_fw_pps035_mask                                            (0xFF000000)
#define  DSCD_PPS_DW08_fw_pps034_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW08_fw_pps033_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW08_fw_pps032_mask                                            (0x000000FF)
#define  DSCD_PPS_DW08_fw_pps035(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW08_fw_pps034(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW08_fw_pps033(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW08_fw_pps032(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW08_get_fw_pps035(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW08_get_fw_pps034(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW08_get_fw_pps033(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW08_get_fw_pps032(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW09                                                          0x180BB824
#define  DSCD_PPS_DW09_reg_addr                                                  "0xB80BB824"
#define  DSCD_PPS_DW09_reg                                                       0xB80BB824
#define  DSCD_PPS_DW09_inst_addr                                                 "0x0009"
#define  set_DSCD_PPS_DW09_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW09_reg)=data)
#define  get_DSCD_PPS_DW09_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW09_reg))
#define  DSCD_PPS_DW09_fw_pps039_shift                                           (24)
#define  DSCD_PPS_DW09_fw_pps038_shift                                           (16)
#define  DSCD_PPS_DW09_fw_pps037_shift                                           (8)
#define  DSCD_PPS_DW09_fw_pps036_shift                                           (0)
#define  DSCD_PPS_DW09_fw_pps039_mask                                            (0xFF000000)
#define  DSCD_PPS_DW09_fw_pps038_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW09_fw_pps037_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW09_fw_pps036_mask                                            (0x000000FF)
#define  DSCD_PPS_DW09_fw_pps039(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW09_fw_pps038(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW09_fw_pps037(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW09_fw_pps036(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW09_get_fw_pps039(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW09_get_fw_pps038(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW09_get_fw_pps037(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW09_get_fw_pps036(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW10                                                          0x180BB828
#define  DSCD_PPS_DW10_reg_addr                                                  "0xB80BB828"
#define  DSCD_PPS_DW10_reg                                                       0xB80BB828
#define  DSCD_PPS_DW10_inst_addr                                                 "0x000A"
#define  set_DSCD_PPS_DW10_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW10_reg)=data)
#define  get_DSCD_PPS_DW10_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW10_reg))
#define  DSCD_PPS_DW10_fw_pps043_shift                                           (24)
#define  DSCD_PPS_DW10_fw_pps042_shift                                           (16)
#define  DSCD_PPS_DW10_fw_pps041_shift                                           (8)
#define  DSCD_PPS_DW10_fw_pps040_shift                                           (0)
#define  DSCD_PPS_DW10_fw_pps043_mask                                            (0xFF000000)
#define  DSCD_PPS_DW10_fw_pps042_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW10_fw_pps041_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW10_fw_pps040_mask                                            (0x000000FF)
#define  DSCD_PPS_DW10_fw_pps043(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW10_fw_pps042(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW10_fw_pps041(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW10_fw_pps040(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW10_get_fw_pps043(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW10_get_fw_pps042(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW10_get_fw_pps041(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW10_get_fw_pps040(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW11                                                          0x180BB82C
#define  DSCD_PPS_DW11_reg_addr                                                  "0xB80BB82C"
#define  DSCD_PPS_DW11_reg                                                       0xB80BB82C
#define  DSCD_PPS_DW11_inst_addr                                                 "0x000B"
#define  set_DSCD_PPS_DW11_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW11_reg)=data)
#define  get_DSCD_PPS_DW11_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW11_reg))
#define  DSCD_PPS_DW11_fw_pps047_shift                                           (24)
#define  DSCD_PPS_DW11_fw_pps046_shift                                           (16)
#define  DSCD_PPS_DW11_fw_pps045_shift                                           (8)
#define  DSCD_PPS_DW11_fw_pps044_shift                                           (0)
#define  DSCD_PPS_DW11_fw_pps047_mask                                            (0xFF000000)
#define  DSCD_PPS_DW11_fw_pps046_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW11_fw_pps045_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW11_fw_pps044_mask                                            (0x000000FF)
#define  DSCD_PPS_DW11_fw_pps047(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW11_fw_pps046(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW11_fw_pps045(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW11_fw_pps044(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW11_get_fw_pps047(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW11_get_fw_pps046(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW11_get_fw_pps045(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW11_get_fw_pps044(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW12                                                          0x180BB830
#define  DSCD_PPS_DW12_reg_addr                                                  "0xB80BB830"
#define  DSCD_PPS_DW12_reg                                                       0xB80BB830
#define  DSCD_PPS_DW12_inst_addr                                                 "0x000C"
#define  set_DSCD_PPS_DW12_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW12_reg)=data)
#define  get_DSCD_PPS_DW12_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW12_reg))
#define  DSCD_PPS_DW12_fw_pps051_shift                                           (24)
#define  DSCD_PPS_DW12_fw_pps050_shift                                           (16)
#define  DSCD_PPS_DW12_fw_pps049_shift                                           (8)
#define  DSCD_PPS_DW12_fw_pps048_shift                                           (0)
#define  DSCD_PPS_DW12_fw_pps051_mask                                            (0xFF000000)
#define  DSCD_PPS_DW12_fw_pps050_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW12_fw_pps049_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW12_fw_pps048_mask                                            (0x000000FF)
#define  DSCD_PPS_DW12_fw_pps051(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW12_fw_pps050(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW12_fw_pps049(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW12_fw_pps048(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW12_get_fw_pps051(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW12_get_fw_pps050(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW12_get_fw_pps049(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW12_get_fw_pps048(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW13                                                          0x180BB834
#define  DSCD_PPS_DW13_reg_addr                                                  "0xB80BB834"
#define  DSCD_PPS_DW13_reg                                                       0xB80BB834
#define  DSCD_PPS_DW13_inst_addr                                                 "0x000D"
#define  set_DSCD_PPS_DW13_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW13_reg)=data)
#define  get_DSCD_PPS_DW13_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW13_reg))
#define  DSCD_PPS_DW13_fw_pps055_shift                                           (24)
#define  DSCD_PPS_DW13_fw_pps054_shift                                           (16)
#define  DSCD_PPS_DW13_fw_pps053_shift                                           (8)
#define  DSCD_PPS_DW13_fw_pps052_shift                                           (0)
#define  DSCD_PPS_DW13_fw_pps055_mask                                            (0xFF000000)
#define  DSCD_PPS_DW13_fw_pps054_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW13_fw_pps053_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW13_fw_pps052_mask                                            (0x000000FF)
#define  DSCD_PPS_DW13_fw_pps055(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW13_fw_pps054(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW13_fw_pps053(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW13_fw_pps052(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW13_get_fw_pps055(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW13_get_fw_pps054(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW13_get_fw_pps053(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW13_get_fw_pps052(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW14                                                          0x180BB838
#define  DSCD_PPS_DW14_reg_addr                                                  "0xB80BB838"
#define  DSCD_PPS_DW14_reg                                                       0xB80BB838
#define  DSCD_PPS_DW14_inst_addr                                                 "0x000E"
#define  set_DSCD_PPS_DW14_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW14_reg)=data)
#define  get_DSCD_PPS_DW14_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW14_reg))
#define  DSCD_PPS_DW14_fw_pps059_shift                                           (24)
#define  DSCD_PPS_DW14_fw_pps058_shift                                           (16)
#define  DSCD_PPS_DW14_fw_pps057_shift                                           (8)
#define  DSCD_PPS_DW14_fw_pps056_shift                                           (0)
#define  DSCD_PPS_DW14_fw_pps059_mask                                            (0xFF000000)
#define  DSCD_PPS_DW14_fw_pps058_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW14_fw_pps057_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW14_fw_pps056_mask                                            (0x000000FF)
#define  DSCD_PPS_DW14_fw_pps059(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW14_fw_pps058(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW14_fw_pps057(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW14_fw_pps056(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW14_get_fw_pps059(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW14_get_fw_pps058(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW14_get_fw_pps057(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW14_get_fw_pps056(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW15                                                          0x180BB83C
#define  DSCD_PPS_DW15_reg_addr                                                  "0xB80BB83C"
#define  DSCD_PPS_DW15_reg                                                       0xB80BB83C
#define  DSCD_PPS_DW15_inst_addr                                                 "0x000F"
#define  set_DSCD_PPS_DW15_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW15_reg)=data)
#define  get_DSCD_PPS_DW15_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW15_reg))
#define  DSCD_PPS_DW15_fw_pps063_shift                                           (24)
#define  DSCD_PPS_DW15_fw_pps062_shift                                           (16)
#define  DSCD_PPS_DW15_fw_pps061_shift                                           (8)
#define  DSCD_PPS_DW15_fw_pps060_shift                                           (0)
#define  DSCD_PPS_DW15_fw_pps063_mask                                            (0xFF000000)
#define  DSCD_PPS_DW15_fw_pps062_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW15_fw_pps061_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW15_fw_pps060_mask                                            (0x000000FF)
#define  DSCD_PPS_DW15_fw_pps063(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW15_fw_pps062(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW15_fw_pps061(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW15_fw_pps060(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW15_get_fw_pps063(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW15_get_fw_pps062(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW15_get_fw_pps061(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW15_get_fw_pps060(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW16                                                          0x180BB840
#define  DSCD_PPS_DW16_reg_addr                                                  "0xB80BB840"
#define  DSCD_PPS_DW16_reg                                                       0xB80BB840
#define  DSCD_PPS_DW16_inst_addr                                                 "0x0010"
#define  set_DSCD_PPS_DW16_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW16_reg)=data)
#define  get_DSCD_PPS_DW16_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW16_reg))
#define  DSCD_PPS_DW16_fw_pps067_shift                                           (24)
#define  DSCD_PPS_DW16_fw_pps066_shift                                           (16)
#define  DSCD_PPS_DW16_fw_pps065_shift                                           (8)
#define  DSCD_PPS_DW16_fw_pps064_shift                                           (0)
#define  DSCD_PPS_DW16_fw_pps067_mask                                            (0xFF000000)
#define  DSCD_PPS_DW16_fw_pps066_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW16_fw_pps065_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW16_fw_pps064_mask                                            (0x000000FF)
#define  DSCD_PPS_DW16_fw_pps067(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW16_fw_pps066(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW16_fw_pps065(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW16_fw_pps064(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW16_get_fw_pps067(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW16_get_fw_pps066(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW16_get_fw_pps065(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW16_get_fw_pps064(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW17                                                          0x180BB844
#define  DSCD_PPS_DW17_reg_addr                                                  "0xB80BB844"
#define  DSCD_PPS_DW17_reg                                                       0xB80BB844
#define  DSCD_PPS_DW17_inst_addr                                                 "0x0011"
#define  set_DSCD_PPS_DW17_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW17_reg)=data)
#define  get_DSCD_PPS_DW17_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW17_reg))
#define  DSCD_PPS_DW17_fw_pps071_shift                                           (24)
#define  DSCD_PPS_DW17_fw_pps070_shift                                           (16)
#define  DSCD_PPS_DW17_fw_pps069_shift                                           (8)
#define  DSCD_PPS_DW17_fw_pps068_shift                                           (0)
#define  DSCD_PPS_DW17_fw_pps071_mask                                            (0xFF000000)
#define  DSCD_PPS_DW17_fw_pps070_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW17_fw_pps069_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW17_fw_pps068_mask                                            (0x000000FF)
#define  DSCD_PPS_DW17_fw_pps071(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW17_fw_pps070(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW17_fw_pps069(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW17_fw_pps068(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW17_get_fw_pps071(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW17_get_fw_pps070(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW17_get_fw_pps069(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW17_get_fw_pps068(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW18                                                          0x180BB848
#define  DSCD_PPS_DW18_reg_addr                                                  "0xB80BB848"
#define  DSCD_PPS_DW18_reg                                                       0xB80BB848
#define  DSCD_PPS_DW18_inst_addr                                                 "0x0012"
#define  set_DSCD_PPS_DW18_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW18_reg)=data)
#define  get_DSCD_PPS_DW18_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW18_reg))
#define  DSCD_PPS_DW18_fw_pps075_shift                                           (24)
#define  DSCD_PPS_DW18_fw_pps074_shift                                           (16)
#define  DSCD_PPS_DW18_fw_pps073_shift                                           (8)
#define  DSCD_PPS_DW18_fw_pps072_shift                                           (0)
#define  DSCD_PPS_DW18_fw_pps075_mask                                            (0xFF000000)
#define  DSCD_PPS_DW18_fw_pps074_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW18_fw_pps073_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW18_fw_pps072_mask                                            (0x000000FF)
#define  DSCD_PPS_DW18_fw_pps075(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW18_fw_pps074(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW18_fw_pps073(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW18_fw_pps072(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW18_get_fw_pps075(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW18_get_fw_pps074(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW18_get_fw_pps073(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW18_get_fw_pps072(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW19                                                          0x180BB84C
#define  DSCD_PPS_DW19_reg_addr                                                  "0xB80BB84C"
#define  DSCD_PPS_DW19_reg                                                       0xB80BB84C
#define  DSCD_PPS_DW19_inst_addr                                                 "0x0013"
#define  set_DSCD_PPS_DW19_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW19_reg)=data)
#define  get_DSCD_PPS_DW19_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW19_reg))
#define  DSCD_PPS_DW19_fw_pps079_shift                                           (24)
#define  DSCD_PPS_DW19_fw_pps078_shift                                           (16)
#define  DSCD_PPS_DW19_fw_pps077_shift                                           (8)
#define  DSCD_PPS_DW19_fw_pps076_shift                                           (0)
#define  DSCD_PPS_DW19_fw_pps079_mask                                            (0xFF000000)
#define  DSCD_PPS_DW19_fw_pps078_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW19_fw_pps077_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW19_fw_pps076_mask                                            (0x000000FF)
#define  DSCD_PPS_DW19_fw_pps079(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW19_fw_pps078(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW19_fw_pps077(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW19_fw_pps076(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW19_get_fw_pps079(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW19_get_fw_pps078(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW19_get_fw_pps077(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW19_get_fw_pps076(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW20                                                          0x180BB850
#define  DSCD_PPS_DW20_reg_addr                                                  "0xB80BB850"
#define  DSCD_PPS_DW20_reg                                                       0xB80BB850
#define  DSCD_PPS_DW20_inst_addr                                                 "0x0014"
#define  set_DSCD_PPS_DW20_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW20_reg)=data)
#define  get_DSCD_PPS_DW20_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW20_reg))
#define  DSCD_PPS_DW20_fw_pps083_shift                                           (24)
#define  DSCD_PPS_DW20_fw_pps082_shift                                           (16)
#define  DSCD_PPS_DW20_fw_pps081_shift                                           (8)
#define  DSCD_PPS_DW20_fw_pps080_shift                                           (0)
#define  DSCD_PPS_DW20_fw_pps083_mask                                            (0xFF000000)
#define  DSCD_PPS_DW20_fw_pps082_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW20_fw_pps081_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW20_fw_pps080_mask                                            (0x000000FF)
#define  DSCD_PPS_DW20_fw_pps083(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW20_fw_pps082(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW20_fw_pps081(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW20_fw_pps080(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW20_get_fw_pps083(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW20_get_fw_pps082(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW20_get_fw_pps081(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW20_get_fw_pps080(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW21                                                          0x180BB854
#define  DSCD_PPS_DW21_reg_addr                                                  "0xB80BB854"
#define  DSCD_PPS_DW21_reg                                                       0xB80BB854
#define  DSCD_PPS_DW21_inst_addr                                                 "0x0015"
#define  set_DSCD_PPS_DW21_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW21_reg)=data)
#define  get_DSCD_PPS_DW21_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW21_reg))
#define  DSCD_PPS_DW21_fw_pps087_shift                                           (24)
#define  DSCD_PPS_DW21_fw_pps086_shift                                           (16)
#define  DSCD_PPS_DW21_fw_pps085_shift                                           (8)
#define  DSCD_PPS_DW21_fw_pps084_shift                                           (0)
#define  DSCD_PPS_DW21_fw_pps087_mask                                            (0xFF000000)
#define  DSCD_PPS_DW21_fw_pps086_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW21_fw_pps085_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW21_fw_pps084_mask                                            (0x000000FF)
#define  DSCD_PPS_DW21_fw_pps087(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW21_fw_pps086(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW21_fw_pps085(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW21_fw_pps084(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW21_get_fw_pps087(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW21_get_fw_pps086(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW21_get_fw_pps085(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW21_get_fw_pps084(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW22                                                          0x180BB858
#define  DSCD_PPS_DW22_reg_addr                                                  "0xB80BB858"
#define  DSCD_PPS_DW22_reg                                                       0xB80BB858
#define  DSCD_PPS_DW22_inst_addr                                                 "0x0016"
#define  set_DSCD_PPS_DW22_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW22_reg)=data)
#define  get_DSCD_PPS_DW22_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW22_reg))
#define  DSCD_PPS_DW22_fw_pps091_shift                                           (24)
#define  DSCD_PPS_DW22_fw_pps090_shift                                           (16)
#define  DSCD_PPS_DW22_fw_pps089_shift                                           (8)
#define  DSCD_PPS_DW22_fw_pps088_shift                                           (0)
#define  DSCD_PPS_DW22_fw_pps091_mask                                            (0xFF000000)
#define  DSCD_PPS_DW22_fw_pps090_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW22_fw_pps089_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW22_fw_pps088_mask                                            (0x000000FF)
#define  DSCD_PPS_DW22_fw_pps091(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW22_fw_pps090(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW22_fw_pps089(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW22_fw_pps088(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW22_get_fw_pps091(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW22_get_fw_pps090(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW22_get_fw_pps089(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW22_get_fw_pps088(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW23                                                          0x180BB85C
#define  DSCD_PPS_DW23_reg_addr                                                  "0xB80BB85C"
#define  DSCD_PPS_DW23_reg                                                       0xB80BB85C
#define  DSCD_PPS_DW23_inst_addr                                                 "0x0017"
#define  set_DSCD_PPS_DW23_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW23_reg)=data)
#define  get_DSCD_PPS_DW23_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW23_reg))
#define  DSCD_PPS_DW23_fw_pps095_shift                                           (24)
#define  DSCD_PPS_DW23_fw_pps094_shift                                           (16)
#define  DSCD_PPS_DW23_fw_pps093_shift                                           (8)
#define  DSCD_PPS_DW23_fw_pps092_shift                                           (0)
#define  DSCD_PPS_DW23_fw_pps095_mask                                            (0xFF000000)
#define  DSCD_PPS_DW23_fw_pps094_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW23_fw_pps093_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW23_fw_pps092_mask                                            (0x000000FF)
#define  DSCD_PPS_DW23_fw_pps095(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW23_fw_pps094(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW23_fw_pps093(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW23_fw_pps092(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW23_get_fw_pps095(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW23_get_fw_pps094(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW23_get_fw_pps093(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW23_get_fw_pps092(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW24                                                          0x180BB860
#define  DSCD_PPS_DW24_reg_addr                                                  "0xB80BB860"
#define  DSCD_PPS_DW24_reg                                                       0xB80BB860
#define  DSCD_PPS_DW24_inst_addr                                                 "0x0018"
#define  set_DSCD_PPS_DW24_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW24_reg)=data)
#define  get_DSCD_PPS_DW24_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW24_reg))
#define  DSCD_PPS_DW24_fw_pps099_shift                                           (24)
#define  DSCD_PPS_DW24_fw_pps098_shift                                           (16)
#define  DSCD_PPS_DW24_fw_pps097_shift                                           (8)
#define  DSCD_PPS_DW24_fw_pps096_shift                                           (0)
#define  DSCD_PPS_DW24_fw_pps099_mask                                            (0xFF000000)
#define  DSCD_PPS_DW24_fw_pps098_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW24_fw_pps097_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW24_fw_pps096_mask                                            (0x000000FF)
#define  DSCD_PPS_DW24_fw_pps099(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW24_fw_pps098(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW24_fw_pps097(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW24_fw_pps096(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW24_get_fw_pps099(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW24_get_fw_pps098(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW24_get_fw_pps097(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW24_get_fw_pps096(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW25                                                          0x180BB864
#define  DSCD_PPS_DW25_reg_addr                                                  "0xB80BB864"
#define  DSCD_PPS_DW25_reg                                                       0xB80BB864
#define  DSCD_PPS_DW25_inst_addr                                                 "0x0019"
#define  set_DSCD_PPS_DW25_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW25_reg)=data)
#define  get_DSCD_PPS_DW25_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW25_reg))
#define  DSCD_PPS_DW25_fw_pps103_shift                                           (24)
#define  DSCD_PPS_DW25_fw_pps102_shift                                           (16)
#define  DSCD_PPS_DW25_fw_pps101_shift                                           (8)
#define  DSCD_PPS_DW25_fw_pps100_shift                                           (0)
#define  DSCD_PPS_DW25_fw_pps103_mask                                            (0xFF000000)
#define  DSCD_PPS_DW25_fw_pps102_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW25_fw_pps101_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW25_fw_pps100_mask                                            (0x000000FF)
#define  DSCD_PPS_DW25_fw_pps103(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW25_fw_pps102(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW25_fw_pps101(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW25_fw_pps100(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW25_get_fw_pps103(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW25_get_fw_pps102(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW25_get_fw_pps101(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW25_get_fw_pps100(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW26                                                          0x180BB868
#define  DSCD_PPS_DW26_reg_addr                                                  "0xB80BB868"
#define  DSCD_PPS_DW26_reg                                                       0xB80BB868
#define  DSCD_PPS_DW26_inst_addr                                                 "0x001A"
#define  set_DSCD_PPS_DW26_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW26_reg)=data)
#define  get_DSCD_PPS_DW26_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW26_reg))
#define  DSCD_PPS_DW26_fw_pps107_shift                                           (24)
#define  DSCD_PPS_DW26_fw_pps106_shift                                           (16)
#define  DSCD_PPS_DW26_fw_pps105_shift                                           (8)
#define  DSCD_PPS_DW26_fw_pps104_shift                                           (0)
#define  DSCD_PPS_DW26_fw_pps107_mask                                            (0xFF000000)
#define  DSCD_PPS_DW26_fw_pps106_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW26_fw_pps105_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW26_fw_pps104_mask                                            (0x000000FF)
#define  DSCD_PPS_DW26_fw_pps107(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW26_fw_pps106(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW26_fw_pps105(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW26_fw_pps104(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW26_get_fw_pps107(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW26_get_fw_pps106(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW26_get_fw_pps105(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW26_get_fw_pps104(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW27                                                          0x180BB86C
#define  DSCD_PPS_DW27_reg_addr                                                  "0xB80BB86C"
#define  DSCD_PPS_DW27_reg                                                       0xB80BB86C
#define  DSCD_PPS_DW27_inst_addr                                                 "0x001B"
#define  set_DSCD_PPS_DW27_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW27_reg)=data)
#define  get_DSCD_PPS_DW27_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW27_reg))
#define  DSCD_PPS_DW27_fw_pps111_shift                                           (24)
#define  DSCD_PPS_DW27_fw_pps110_shift                                           (16)
#define  DSCD_PPS_DW27_fw_pps109_shift                                           (8)
#define  DSCD_PPS_DW27_fw_pps108_shift                                           (0)
#define  DSCD_PPS_DW27_fw_pps111_mask                                            (0xFF000000)
#define  DSCD_PPS_DW27_fw_pps110_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW27_fw_pps109_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW27_fw_pps108_mask                                            (0x000000FF)
#define  DSCD_PPS_DW27_fw_pps111(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW27_fw_pps110(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW27_fw_pps109(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW27_fw_pps108(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW27_get_fw_pps111(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW27_get_fw_pps110(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW27_get_fw_pps109(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW27_get_fw_pps108(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW28                                                          0x180BB870
#define  DSCD_PPS_DW28_reg_addr                                                  "0xB80BB870"
#define  DSCD_PPS_DW28_reg                                                       0xB80BB870
#define  DSCD_PPS_DW28_inst_addr                                                 "0x001C"
#define  set_DSCD_PPS_DW28_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW28_reg)=data)
#define  get_DSCD_PPS_DW28_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW28_reg))
#define  DSCD_PPS_DW28_fw_pps115_shift                                           (24)
#define  DSCD_PPS_DW28_fw_pps114_shift                                           (16)
#define  DSCD_PPS_DW28_fw_pps113_shift                                           (8)
#define  DSCD_PPS_DW28_fw_pps112_shift                                           (0)
#define  DSCD_PPS_DW28_fw_pps115_mask                                            (0xFF000000)
#define  DSCD_PPS_DW28_fw_pps114_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW28_fw_pps113_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW28_fw_pps112_mask                                            (0x000000FF)
#define  DSCD_PPS_DW28_fw_pps115(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW28_fw_pps114(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW28_fw_pps113(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW28_fw_pps112(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW28_get_fw_pps115(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW28_get_fw_pps114(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW28_get_fw_pps113(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW28_get_fw_pps112(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW29                                                          0x180BB874
#define  DSCD_PPS_DW29_reg_addr                                                  "0xB80BB874"
#define  DSCD_PPS_DW29_reg                                                       0xB80BB874
#define  DSCD_PPS_DW29_inst_addr                                                 "0x001D"
#define  set_DSCD_PPS_DW29_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW29_reg)=data)
#define  get_DSCD_PPS_DW29_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW29_reg))
#define  DSCD_PPS_DW29_fw_pps119_shift                                           (24)
#define  DSCD_PPS_DW29_fw_pps118_shift                                           (16)
#define  DSCD_PPS_DW29_fw_pps117_shift                                           (8)
#define  DSCD_PPS_DW29_fw_pps116_shift                                           (0)
#define  DSCD_PPS_DW29_fw_pps119_mask                                            (0xFF000000)
#define  DSCD_PPS_DW29_fw_pps118_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW29_fw_pps117_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW29_fw_pps116_mask                                            (0x000000FF)
#define  DSCD_PPS_DW29_fw_pps119(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW29_fw_pps118(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW29_fw_pps117(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW29_fw_pps116(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW29_get_fw_pps119(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW29_get_fw_pps118(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW29_get_fw_pps117(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW29_get_fw_pps116(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW30                                                          0x180BB878
#define  DSCD_PPS_DW30_reg_addr                                                  "0xB80BB878"
#define  DSCD_PPS_DW30_reg                                                       0xB80BB878
#define  DSCD_PPS_DW30_inst_addr                                                 "0x001E"
#define  set_DSCD_PPS_DW30_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW30_reg)=data)
#define  get_DSCD_PPS_DW30_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW30_reg))
#define  DSCD_PPS_DW30_fw_pps123_shift                                           (24)
#define  DSCD_PPS_DW30_fw_pps122_shift                                           (16)
#define  DSCD_PPS_DW30_fw_pps121_shift                                           (8)
#define  DSCD_PPS_DW30_fw_pps120_shift                                           (0)
#define  DSCD_PPS_DW30_fw_pps123_mask                                            (0xFF000000)
#define  DSCD_PPS_DW30_fw_pps122_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW30_fw_pps121_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW30_fw_pps120_mask                                            (0x000000FF)
#define  DSCD_PPS_DW30_fw_pps123(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW30_fw_pps122(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW30_fw_pps121(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW30_fw_pps120(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW30_get_fw_pps123(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW30_get_fw_pps122(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW30_get_fw_pps121(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW30_get_fw_pps120(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW31                                                          0x180BB87C
#define  DSCD_PPS_DW31_reg_addr                                                  "0xB80BB87C"
#define  DSCD_PPS_DW31_reg                                                       0xB80BB87C
#define  DSCD_PPS_DW31_inst_addr                                                 "0x001F"
#define  set_DSCD_PPS_DW31_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW31_reg)=data)
#define  get_DSCD_PPS_DW31_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW31_reg))
#define  DSCD_PPS_DW31_fw_pps127_shift                                           (24)
#define  DSCD_PPS_DW31_fw_pps126_shift                                           (16)
#define  DSCD_PPS_DW31_fw_pps125_shift                                           (8)
#define  DSCD_PPS_DW31_fw_pps124_shift                                           (0)
#define  DSCD_PPS_DW31_fw_pps127_mask                                            (0xFF000000)
#define  DSCD_PPS_DW31_fw_pps126_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW31_fw_pps125_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW31_fw_pps124_mask                                            (0x000000FF)
#define  DSCD_PPS_DW31_fw_pps127(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW31_fw_pps126(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW31_fw_pps125(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW31_fw_pps124(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW31_get_fw_pps127(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW31_get_fw_pps126(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW31_get_fw_pps125(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW31_get_fw_pps124(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW32                                                          0x180BB880
#define  DSCD_PPS_DW32_reg_addr                                                  "0xB80BB880"
#define  DSCD_PPS_DW32_reg                                                       0xB80BB880
#define  DSCD_PPS_DW32_inst_addr                                                 "0x0020"
#define  set_DSCD_PPS_DW32_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW32_reg)=data)
#define  get_DSCD_PPS_DW32_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW32_reg))
#define  DSCD_PPS_DW32_fw_pps131_shift                                           (24)
#define  DSCD_PPS_DW32_fw_pps130_shift                                           (16)
#define  DSCD_PPS_DW32_fw_pps129_shift                                           (8)
#define  DSCD_PPS_DW32_fw_pps128_shift                                           (0)
#define  DSCD_PPS_DW32_fw_pps131_mask                                            (0xFF000000)
#define  DSCD_PPS_DW32_fw_pps130_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW32_fw_pps129_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW32_fw_pps128_mask                                            (0x000000FF)
#define  DSCD_PPS_DW32_fw_pps131(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW32_fw_pps130(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW32_fw_pps129(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW32_fw_pps128(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW32_get_fw_pps131(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW32_get_fw_pps130(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW32_get_fw_pps129(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW32_get_fw_pps128(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW33                                                          0x180BB884
#define  DSCD_PPS_DW33_reg_addr                                                  "0xB80BB884"
#define  DSCD_PPS_DW33_reg                                                       0xB80BB884
#define  DSCD_PPS_DW33_inst_addr                                                 "0x0021"
#define  set_DSCD_PPS_DW33_reg(data)                                             (*((volatile unsigned int*)DSCD_PPS_DW33_reg)=data)
#define  get_DSCD_PPS_DW33_reg                                                   (*((volatile unsigned int*)DSCD_PPS_DW33_reg))
#define  DSCD_PPS_DW33_fw_pps135_shift                                           (24)
#define  DSCD_PPS_DW33_fw_pps134_shift                                           (16)
#define  DSCD_PPS_DW33_fw_pps133_shift                                           (8)
#define  DSCD_PPS_DW33_fw_pps132_shift                                           (0)
#define  DSCD_PPS_DW33_fw_pps135_mask                                            (0xFF000000)
#define  DSCD_PPS_DW33_fw_pps134_mask                                            (0x00FF0000)
#define  DSCD_PPS_DW33_fw_pps133_mask                                            (0x0000FF00)
#define  DSCD_PPS_DW33_fw_pps132_mask                                            (0x000000FF)
#define  DSCD_PPS_DW33_fw_pps135(data)                                           (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW33_fw_pps134(data)                                           (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW33_fw_pps133(data)                                           (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW33_fw_pps132(data)                                           (0x000000FF&(data))
#define  DSCD_PPS_DW33_get_fw_pps135(data)                                       ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW33_get_fw_pps134(data)                                       ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW33_get_fw_pps133(data)                                       ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW33_get_fw_pps132(data)                                       (0x000000FF&(data))

#define  DSCD_PPS_DW00_CUR                                                      0x180BB888
#define  DSCD_PPS_DW00_CUR_reg_addr                                              "0xB80BB888"
#define  DSCD_PPS_DW00_CUR_reg                                                   0xB80BB888
#define  DSCD_PPS_DW00_CUR_inst_addr                                             "0x0022"
#define  set_DSCD_PPS_DW00_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW00_CUR_reg)=data)
#define  get_DSCD_PPS_DW00_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW00_CUR_reg))
#define  DSCD_PPS_DW00_CUR_pps003_shift                                          (24)
#define  DSCD_PPS_DW00_CUR_pps002_shift                                          (16)
#define  DSCD_PPS_DW00_CUR_pps001_shift                                          (8)
#define  DSCD_PPS_DW00_CUR_pps000_shift                                          (0)
#define  DSCD_PPS_DW00_CUR_pps003_mask                                           (0xFF000000)
#define  DSCD_PPS_DW00_CUR_pps002_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW00_CUR_pps001_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW00_CUR_pps000_mask                                           (0x000000FF)
#define  DSCD_PPS_DW00_CUR_pps003(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW00_CUR_pps002(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW00_CUR_pps001(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW00_CUR_pps000(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW00_CUR_get_pps003(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW00_CUR_get_pps002(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW00_CUR_get_pps001(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW00_CUR_get_pps000(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW01_CUR                                                      0x180BB88C
#define  DSCD_PPS_DW01_CUR_reg_addr                                              "0xB80BB88C"
#define  DSCD_PPS_DW01_CUR_reg                                                   0xB80BB88C
#define  DSCD_PPS_DW01_CUR_inst_addr                                             "0x0023"
#define  set_DSCD_PPS_DW01_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW01_CUR_reg)=data)
#define  get_DSCD_PPS_DW01_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW01_CUR_reg))
#define  DSCD_PPS_DW01_CUR_pps007_shift                                          (24)
#define  DSCD_PPS_DW01_CUR_pps006_shift                                          (16)
#define  DSCD_PPS_DW01_CUR_pps005_shift                                          (8)
#define  DSCD_PPS_DW01_CUR_pps004_shift                                          (0)
#define  DSCD_PPS_DW01_CUR_pps007_mask                                           (0xFF000000)
#define  DSCD_PPS_DW01_CUR_pps006_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW01_CUR_pps005_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW01_CUR_pps004_mask                                           (0x000000FF)
#define  DSCD_PPS_DW01_CUR_pps007(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW01_CUR_pps006(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW01_CUR_pps005(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW01_CUR_pps004(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW01_CUR_get_pps007(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW01_CUR_get_pps006(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW01_CUR_get_pps005(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW01_CUR_get_pps004(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW02_CUR                                                      0x180BB890
#define  DSCD_PPS_DW02_CUR_reg_addr                                              "0xB80BB890"
#define  DSCD_PPS_DW02_CUR_reg                                                   0xB80BB890
#define  DSCD_PPS_DW02_CUR_inst_addr                                             "0x0024"
#define  set_DSCD_PPS_DW02_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW02_CUR_reg)=data)
#define  get_DSCD_PPS_DW02_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW02_CUR_reg))
#define  DSCD_PPS_DW02_CUR_pps011_shift                                          (24)
#define  DSCD_PPS_DW02_CUR_pps010_shift                                          (16)
#define  DSCD_PPS_DW02_CUR_pps009_shift                                          (8)
#define  DSCD_PPS_DW02_CUR_pps008_shift                                          (0)
#define  DSCD_PPS_DW02_CUR_pps011_mask                                           (0xFF000000)
#define  DSCD_PPS_DW02_CUR_pps010_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW02_CUR_pps009_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW02_CUR_pps008_mask                                           (0x000000FF)
#define  DSCD_PPS_DW02_CUR_pps011(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW02_CUR_pps010(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW02_CUR_pps009(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW02_CUR_pps008(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW02_CUR_get_pps011(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW02_CUR_get_pps010(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW02_CUR_get_pps009(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW02_CUR_get_pps008(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW03_CUR                                                      0x180BB894
#define  DSCD_PPS_DW03_CUR_reg_addr                                              "0xB80BB894"
#define  DSCD_PPS_DW03_CUR_reg                                                   0xB80BB894
#define  DSCD_PPS_DW03_CUR_inst_addr                                             "0x0025"
#define  set_DSCD_PPS_DW03_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW03_CUR_reg)=data)
#define  get_DSCD_PPS_DW03_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW03_CUR_reg))
#define  DSCD_PPS_DW03_CUR_pps015_shift                                          (24)
#define  DSCD_PPS_DW03_CUR_pps014_shift                                          (16)
#define  DSCD_PPS_DW03_CUR_pps013_shift                                          (8)
#define  DSCD_PPS_DW03_CUR_pps012_shift                                          (0)
#define  DSCD_PPS_DW03_CUR_pps015_mask                                           (0xFF000000)
#define  DSCD_PPS_DW03_CUR_pps014_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW03_CUR_pps013_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW03_CUR_pps012_mask                                           (0x000000FF)
#define  DSCD_PPS_DW03_CUR_pps015(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW03_CUR_pps014(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW03_CUR_pps013(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW03_CUR_pps012(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW03_CUR_get_pps015(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW03_CUR_get_pps014(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW03_CUR_get_pps013(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW03_CUR_get_pps012(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW04_CUR                                                      0x180BB898
#define  DSCD_PPS_DW04_CUR_reg_addr                                              "0xB80BB898"
#define  DSCD_PPS_DW04_CUR_reg                                                   0xB80BB898
#define  DSCD_PPS_DW04_CUR_inst_addr                                             "0x0026"
#define  set_DSCD_PPS_DW04_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW04_CUR_reg)=data)
#define  get_DSCD_PPS_DW04_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW04_CUR_reg))
#define  DSCD_PPS_DW04_CUR_pps019_shift                                          (24)
#define  DSCD_PPS_DW04_CUR_pps018_shift                                          (16)
#define  DSCD_PPS_DW04_CUR_pps017_shift                                          (8)
#define  DSCD_PPS_DW04_CUR_pps016_shift                                          (0)
#define  DSCD_PPS_DW04_CUR_pps019_mask                                           (0xFF000000)
#define  DSCD_PPS_DW04_CUR_pps018_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW04_CUR_pps017_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW04_CUR_pps016_mask                                           (0x000000FF)
#define  DSCD_PPS_DW04_CUR_pps019(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW04_CUR_pps018(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW04_CUR_pps017(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW04_CUR_pps016(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW04_CUR_get_pps019(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW04_CUR_get_pps018(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW04_CUR_get_pps017(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW04_CUR_get_pps016(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW05_CUR                                                      0x180BB89C
#define  DSCD_PPS_DW05_CUR_reg_addr                                              "0xB80BB89C"
#define  DSCD_PPS_DW05_CUR_reg                                                   0xB80BB89C
#define  DSCD_PPS_DW05_CUR_inst_addr                                             "0x0027"
#define  set_DSCD_PPS_DW05_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW05_CUR_reg)=data)
#define  get_DSCD_PPS_DW05_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW05_CUR_reg))
#define  DSCD_PPS_DW05_CUR_pps023_shift                                          (24)
#define  DSCD_PPS_DW05_CUR_pps022_shift                                          (16)
#define  DSCD_PPS_DW05_CUR_pps021_shift                                          (8)
#define  DSCD_PPS_DW05_CUR_pps020_shift                                          (0)
#define  DSCD_PPS_DW05_CUR_pps023_mask                                           (0xFF000000)
#define  DSCD_PPS_DW05_CUR_pps022_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW05_CUR_pps021_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW05_CUR_pps020_mask                                           (0x000000FF)
#define  DSCD_PPS_DW05_CUR_pps023(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW05_CUR_pps022(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW05_CUR_pps021(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW05_CUR_pps020(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW05_CUR_get_pps023(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW05_CUR_get_pps022(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW05_CUR_get_pps021(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW05_CUR_get_pps020(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW06_CUR                                                      0x180BB8A0
#define  DSCD_PPS_DW06_CUR_reg_addr                                              "0xB80BB8A0"
#define  DSCD_PPS_DW06_CUR_reg                                                   0xB80BB8A0
#define  DSCD_PPS_DW06_CUR_inst_addr                                             "0x0028"
#define  set_DSCD_PPS_DW06_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW06_CUR_reg)=data)
#define  get_DSCD_PPS_DW06_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW06_CUR_reg))
#define  DSCD_PPS_DW06_CUR_pps027_shift                                          (24)
#define  DSCD_PPS_DW06_CUR_pps026_shift                                          (16)
#define  DSCD_PPS_DW06_CUR_pps025_shift                                          (8)
#define  DSCD_PPS_DW06_CUR_pps024_shift                                          (0)
#define  DSCD_PPS_DW06_CUR_pps027_mask                                           (0xFF000000)
#define  DSCD_PPS_DW06_CUR_pps026_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW06_CUR_pps025_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW06_CUR_pps024_mask                                           (0x000000FF)
#define  DSCD_PPS_DW06_CUR_pps027(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW06_CUR_pps026(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW06_CUR_pps025(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW06_CUR_pps024(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW06_CUR_get_pps027(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW06_CUR_get_pps026(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW06_CUR_get_pps025(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW06_CUR_get_pps024(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW07_CUR                                                      0x180BB8A4
#define  DSCD_PPS_DW07_CUR_reg_addr                                              "0xB80BB8A4"
#define  DSCD_PPS_DW07_CUR_reg                                                   0xB80BB8A4
#define  DSCD_PPS_DW07_CUR_inst_addr                                             "0x0029"
#define  set_DSCD_PPS_DW07_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW07_CUR_reg)=data)
#define  get_DSCD_PPS_DW07_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW07_CUR_reg))
#define  DSCD_PPS_DW07_CUR_pps031_shift                                          (24)
#define  DSCD_PPS_DW07_CUR_pps030_shift                                          (16)
#define  DSCD_PPS_DW07_CUR_pps029_shift                                          (8)
#define  DSCD_PPS_DW07_CUR_pps028_shift                                          (0)
#define  DSCD_PPS_DW07_CUR_pps031_mask                                           (0xFF000000)
#define  DSCD_PPS_DW07_CUR_pps030_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW07_CUR_pps029_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW07_CUR_pps028_mask                                           (0x000000FF)
#define  DSCD_PPS_DW07_CUR_pps031(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW07_CUR_pps030(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW07_CUR_pps029(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW07_CUR_pps028(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW07_CUR_get_pps031(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW07_CUR_get_pps030(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW07_CUR_get_pps029(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW07_CUR_get_pps028(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW08_CUR                                                      0x180BB8A8
#define  DSCD_PPS_DW08_CUR_reg_addr                                              "0xB80BB8A8"
#define  DSCD_PPS_DW08_CUR_reg                                                   0xB80BB8A8
#define  DSCD_PPS_DW08_CUR_inst_addr                                             "0x002A"
#define  set_DSCD_PPS_DW08_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW08_CUR_reg)=data)
#define  get_DSCD_PPS_DW08_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW08_CUR_reg))
#define  DSCD_PPS_DW08_CUR_pps035_shift                                          (24)
#define  DSCD_PPS_DW08_CUR_pps034_shift                                          (16)
#define  DSCD_PPS_DW08_CUR_pps033_shift                                          (8)
#define  DSCD_PPS_DW08_CUR_pps032_shift                                          (0)
#define  DSCD_PPS_DW08_CUR_pps035_mask                                           (0xFF000000)
#define  DSCD_PPS_DW08_CUR_pps034_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW08_CUR_pps033_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW08_CUR_pps032_mask                                           (0x000000FF)
#define  DSCD_PPS_DW08_CUR_pps035(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW08_CUR_pps034(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW08_CUR_pps033(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW08_CUR_pps032(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW08_CUR_get_pps035(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW08_CUR_get_pps034(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW08_CUR_get_pps033(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW08_CUR_get_pps032(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW09_CUR                                                      0x180BB8AC
#define  DSCD_PPS_DW09_CUR_reg_addr                                              "0xB80BB8AC"
#define  DSCD_PPS_DW09_CUR_reg                                                   0xB80BB8AC
#define  DSCD_PPS_DW09_CUR_inst_addr                                             "0x002B"
#define  set_DSCD_PPS_DW09_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW09_CUR_reg)=data)
#define  get_DSCD_PPS_DW09_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW09_CUR_reg))
#define  DSCD_PPS_DW09_CUR_pps039_shift                                          (24)
#define  DSCD_PPS_DW09_CUR_pps038_shift                                          (16)
#define  DSCD_PPS_DW09_CUR_pps037_shift                                          (8)
#define  DSCD_PPS_DW09_CUR_pps036_shift                                          (0)
#define  DSCD_PPS_DW09_CUR_pps039_mask                                           (0xFF000000)
#define  DSCD_PPS_DW09_CUR_pps038_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW09_CUR_pps037_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW09_CUR_pps036_mask                                           (0x000000FF)
#define  DSCD_PPS_DW09_CUR_pps039(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW09_CUR_pps038(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW09_CUR_pps037(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW09_CUR_pps036(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW09_CUR_get_pps039(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW09_CUR_get_pps038(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW09_CUR_get_pps037(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW09_CUR_get_pps036(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW10_CUR                                                      0x180BB8B0
#define  DSCD_PPS_DW10_CUR_reg_addr                                              "0xB80BB8B0"
#define  DSCD_PPS_DW10_CUR_reg                                                   0xB80BB8B0
#define  DSCD_PPS_DW10_CUR_inst_addr                                             "0x002C"
#define  set_DSCD_PPS_DW10_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW10_CUR_reg)=data)
#define  get_DSCD_PPS_DW10_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW10_CUR_reg))
#define  DSCD_PPS_DW10_CUR_pps043_shift                                          (24)
#define  DSCD_PPS_DW10_CUR_pps042_shift                                          (16)
#define  DSCD_PPS_DW10_CUR_pps041_shift                                          (8)
#define  DSCD_PPS_DW10_CUR_pps040_shift                                          (0)
#define  DSCD_PPS_DW10_CUR_pps043_mask                                           (0xFF000000)
#define  DSCD_PPS_DW10_CUR_pps042_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW10_CUR_pps041_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW10_CUR_pps040_mask                                           (0x000000FF)
#define  DSCD_PPS_DW10_CUR_pps043(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW10_CUR_pps042(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW10_CUR_pps041(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW10_CUR_pps040(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW10_CUR_get_pps043(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW10_CUR_get_pps042(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW10_CUR_get_pps041(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW10_CUR_get_pps040(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW11_CUR                                                      0x180BB8B4
#define  DSCD_PPS_DW11_CUR_reg_addr                                              "0xB80BB8B4"
#define  DSCD_PPS_DW11_CUR_reg                                                   0xB80BB8B4
#define  DSCD_PPS_DW11_CUR_inst_addr                                             "0x002D"
#define  set_DSCD_PPS_DW11_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW11_CUR_reg)=data)
#define  get_DSCD_PPS_DW11_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW11_CUR_reg))
#define  DSCD_PPS_DW11_CUR_pps047_shift                                          (24)
#define  DSCD_PPS_DW11_CUR_pps046_shift                                          (16)
#define  DSCD_PPS_DW11_CUR_pps045_shift                                          (8)
#define  DSCD_PPS_DW11_CUR_pps044_shift                                          (0)
#define  DSCD_PPS_DW11_CUR_pps047_mask                                           (0xFF000000)
#define  DSCD_PPS_DW11_CUR_pps046_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW11_CUR_pps045_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW11_CUR_pps044_mask                                           (0x000000FF)
#define  DSCD_PPS_DW11_CUR_pps047(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW11_CUR_pps046(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW11_CUR_pps045(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW11_CUR_pps044(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW11_CUR_get_pps047(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW11_CUR_get_pps046(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW11_CUR_get_pps045(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW11_CUR_get_pps044(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW12_CUR                                                      0x180BB8B8
#define  DSCD_PPS_DW12_CUR_reg_addr                                              "0xB80BB8B8"
#define  DSCD_PPS_DW12_CUR_reg                                                   0xB80BB8B8
#define  DSCD_PPS_DW12_CUR_inst_addr                                             "0x002E"
#define  set_DSCD_PPS_DW12_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW12_CUR_reg)=data)
#define  get_DSCD_PPS_DW12_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW12_CUR_reg))
#define  DSCD_PPS_DW12_CUR_pps051_shift                                          (24)
#define  DSCD_PPS_DW12_CUR_pps050_shift                                          (16)
#define  DSCD_PPS_DW12_CUR_pps049_shift                                          (8)
#define  DSCD_PPS_DW12_CUR_pps048_shift                                          (0)
#define  DSCD_PPS_DW12_CUR_pps051_mask                                           (0xFF000000)
#define  DSCD_PPS_DW12_CUR_pps050_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW12_CUR_pps049_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW12_CUR_pps048_mask                                           (0x000000FF)
#define  DSCD_PPS_DW12_CUR_pps051(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW12_CUR_pps050(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW12_CUR_pps049(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW12_CUR_pps048(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW12_CUR_get_pps051(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW12_CUR_get_pps050(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW12_CUR_get_pps049(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW12_CUR_get_pps048(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW13_CUR                                                      0x180BB8BC
#define  DSCD_PPS_DW13_CUR_reg_addr                                              "0xB80BB8BC"
#define  DSCD_PPS_DW13_CUR_reg                                                   0xB80BB8BC
#define  DSCD_PPS_DW13_CUR_inst_addr                                             "0x002F"
#define  set_DSCD_PPS_DW13_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW13_CUR_reg)=data)
#define  get_DSCD_PPS_DW13_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW13_CUR_reg))
#define  DSCD_PPS_DW13_CUR_pps055_shift                                          (24)
#define  DSCD_PPS_DW13_CUR_pps054_shift                                          (16)
#define  DSCD_PPS_DW13_CUR_pps053_shift                                          (8)
#define  DSCD_PPS_DW13_CUR_pps052_shift                                          (0)
#define  DSCD_PPS_DW13_CUR_pps055_mask                                           (0xFF000000)
#define  DSCD_PPS_DW13_CUR_pps054_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW13_CUR_pps053_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW13_CUR_pps052_mask                                           (0x000000FF)
#define  DSCD_PPS_DW13_CUR_pps055(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW13_CUR_pps054(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW13_CUR_pps053(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW13_CUR_pps052(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW13_CUR_get_pps055(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW13_CUR_get_pps054(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW13_CUR_get_pps053(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW13_CUR_get_pps052(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW14_CUR                                                      0x180BB8C0
#define  DSCD_PPS_DW14_CUR_reg_addr                                              "0xB80BB8C0"
#define  DSCD_PPS_DW14_CUR_reg                                                   0xB80BB8C0
#define  DSCD_PPS_DW14_CUR_inst_addr                                             "0x0030"
#define  set_DSCD_PPS_DW14_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW14_CUR_reg)=data)
#define  get_DSCD_PPS_DW14_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW14_CUR_reg))
#define  DSCD_PPS_DW14_CUR_pps059_shift                                          (24)
#define  DSCD_PPS_DW14_CUR_pps058_shift                                          (16)
#define  DSCD_PPS_DW14_CUR_pps057_shift                                          (8)
#define  DSCD_PPS_DW14_CUR_pps056_shift                                          (0)
#define  DSCD_PPS_DW14_CUR_pps059_mask                                           (0xFF000000)
#define  DSCD_PPS_DW14_CUR_pps058_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW14_CUR_pps057_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW14_CUR_pps056_mask                                           (0x000000FF)
#define  DSCD_PPS_DW14_CUR_pps059(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW14_CUR_pps058(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW14_CUR_pps057(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW14_CUR_pps056(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW14_CUR_get_pps059(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW14_CUR_get_pps058(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW14_CUR_get_pps057(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW14_CUR_get_pps056(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW15_CUR                                                      0x180BB8C4
#define  DSCD_PPS_DW15_CUR_reg_addr                                              "0xB80BB8C4"
#define  DSCD_PPS_DW15_CUR_reg                                                   0xB80BB8C4
#define  DSCD_PPS_DW15_CUR_inst_addr                                             "0x0031"
#define  set_DSCD_PPS_DW15_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW15_CUR_reg)=data)
#define  get_DSCD_PPS_DW15_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW15_CUR_reg))
#define  DSCD_PPS_DW15_CUR_pps063_shift                                          (24)
#define  DSCD_PPS_DW15_CUR_pps062_shift                                          (16)
#define  DSCD_PPS_DW15_CUR_pps061_shift                                          (8)
#define  DSCD_PPS_DW15_CUR_pps060_shift                                          (0)
#define  DSCD_PPS_DW15_CUR_pps063_mask                                           (0xFF000000)
#define  DSCD_PPS_DW15_CUR_pps062_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW15_CUR_pps061_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW15_CUR_pps060_mask                                           (0x000000FF)
#define  DSCD_PPS_DW15_CUR_pps063(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW15_CUR_pps062(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW15_CUR_pps061(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW15_CUR_pps060(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW15_CUR_get_pps063(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW15_CUR_get_pps062(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW15_CUR_get_pps061(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW15_CUR_get_pps060(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW16_CUR                                                      0x180BB8C8
#define  DSCD_PPS_DW16_CUR_reg_addr                                              "0xB80BB8C8"
#define  DSCD_PPS_DW16_CUR_reg                                                   0xB80BB8C8
#define  DSCD_PPS_DW16_CUR_inst_addr                                             "0x0032"
#define  set_DSCD_PPS_DW16_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW16_CUR_reg)=data)
#define  get_DSCD_PPS_DW16_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW16_CUR_reg))
#define  DSCD_PPS_DW16_CUR_pps067_shift                                          (24)
#define  DSCD_PPS_DW16_CUR_pps066_shift                                          (16)
#define  DSCD_PPS_DW16_CUR_pps065_shift                                          (8)
#define  DSCD_PPS_DW16_CUR_pps064_shift                                          (0)
#define  DSCD_PPS_DW16_CUR_pps067_mask                                           (0xFF000000)
#define  DSCD_PPS_DW16_CUR_pps066_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW16_CUR_pps065_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW16_CUR_pps064_mask                                           (0x000000FF)
#define  DSCD_PPS_DW16_CUR_pps067(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW16_CUR_pps066(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW16_CUR_pps065(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW16_CUR_pps064(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW16_CUR_get_pps067(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW16_CUR_get_pps066(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW16_CUR_get_pps065(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW16_CUR_get_pps064(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW17_CUR                                                      0x180BB8CC
#define  DSCD_PPS_DW17_CUR_reg_addr                                              "0xB80BB8CC"
#define  DSCD_PPS_DW17_CUR_reg                                                   0xB80BB8CC
#define  DSCD_PPS_DW17_CUR_inst_addr                                             "0x0033"
#define  set_DSCD_PPS_DW17_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW17_CUR_reg)=data)
#define  get_DSCD_PPS_DW17_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW17_CUR_reg))
#define  DSCD_PPS_DW17_CUR_pps071_shift                                          (24)
#define  DSCD_PPS_DW17_CUR_pps070_shift                                          (16)
#define  DSCD_PPS_DW17_CUR_pps069_shift                                          (8)
#define  DSCD_PPS_DW17_CUR_pps068_shift                                          (0)
#define  DSCD_PPS_DW17_CUR_pps071_mask                                           (0xFF000000)
#define  DSCD_PPS_DW17_CUR_pps070_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW17_CUR_pps069_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW17_CUR_pps068_mask                                           (0x000000FF)
#define  DSCD_PPS_DW17_CUR_pps071(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW17_CUR_pps070(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW17_CUR_pps069(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW17_CUR_pps068(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW17_CUR_get_pps071(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW17_CUR_get_pps070(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW17_CUR_get_pps069(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW17_CUR_get_pps068(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW18_CUR                                                      0x180BB8D0
#define  DSCD_PPS_DW18_CUR_reg_addr                                              "0xB80BB8D0"
#define  DSCD_PPS_DW18_CUR_reg                                                   0xB80BB8D0
#define  DSCD_PPS_DW18_CUR_inst_addr                                             "0x0034"
#define  set_DSCD_PPS_DW18_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW18_CUR_reg)=data)
#define  get_DSCD_PPS_DW18_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW18_CUR_reg))
#define  DSCD_PPS_DW18_CUR_pps075_shift                                          (24)
#define  DSCD_PPS_DW18_CUR_pps074_shift                                          (16)
#define  DSCD_PPS_DW18_CUR_pps073_shift                                          (8)
#define  DSCD_PPS_DW18_CUR_pps072_shift                                          (0)
#define  DSCD_PPS_DW18_CUR_pps075_mask                                           (0xFF000000)
#define  DSCD_PPS_DW18_CUR_pps074_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW18_CUR_pps073_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW18_CUR_pps072_mask                                           (0x000000FF)
#define  DSCD_PPS_DW18_CUR_pps075(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW18_CUR_pps074(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW18_CUR_pps073(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW18_CUR_pps072(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW18_CUR_get_pps075(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW18_CUR_get_pps074(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW18_CUR_get_pps073(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW18_CUR_get_pps072(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW19_CUR                                                      0x180BB8D4
#define  DSCD_PPS_DW19_CUR_reg_addr                                              "0xB80BB8D4"
#define  DSCD_PPS_DW19_CUR_reg                                                   0xB80BB8D4
#define  DSCD_PPS_DW19_CUR_inst_addr                                             "0x0035"
#define  set_DSCD_PPS_DW19_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW19_CUR_reg)=data)
#define  get_DSCD_PPS_DW19_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW19_CUR_reg))
#define  DSCD_PPS_DW19_CUR_pps079_shift                                          (24)
#define  DSCD_PPS_DW19_CUR_pps078_shift                                          (16)
#define  DSCD_PPS_DW19_CUR_pps077_shift                                          (8)
#define  DSCD_PPS_DW19_CUR_pps076_shift                                          (0)
#define  DSCD_PPS_DW19_CUR_pps079_mask                                           (0xFF000000)
#define  DSCD_PPS_DW19_CUR_pps078_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW19_CUR_pps077_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW19_CUR_pps076_mask                                           (0x000000FF)
#define  DSCD_PPS_DW19_CUR_pps079(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW19_CUR_pps078(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW19_CUR_pps077(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW19_CUR_pps076(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW19_CUR_get_pps079(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW19_CUR_get_pps078(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW19_CUR_get_pps077(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW19_CUR_get_pps076(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW20_CUR                                                      0x180BB8D8
#define  DSCD_PPS_DW20_CUR_reg_addr                                              "0xB80BB8D8"
#define  DSCD_PPS_DW20_CUR_reg                                                   0xB80BB8D8
#define  DSCD_PPS_DW20_CUR_inst_addr                                             "0x0036"
#define  set_DSCD_PPS_DW20_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW20_CUR_reg)=data)
#define  get_DSCD_PPS_DW20_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW20_CUR_reg))
#define  DSCD_PPS_DW20_CUR_pps083_shift                                          (24)
#define  DSCD_PPS_DW20_CUR_pps082_shift                                          (16)
#define  DSCD_PPS_DW20_CUR_pps081_shift                                          (8)
#define  DSCD_PPS_DW20_CUR_pps080_shift                                          (0)
#define  DSCD_PPS_DW20_CUR_pps083_mask                                           (0xFF000000)
#define  DSCD_PPS_DW20_CUR_pps082_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW20_CUR_pps081_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW20_CUR_pps080_mask                                           (0x000000FF)
#define  DSCD_PPS_DW20_CUR_pps083(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW20_CUR_pps082(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW20_CUR_pps081(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW20_CUR_pps080(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW20_CUR_get_pps083(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW20_CUR_get_pps082(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW20_CUR_get_pps081(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW20_CUR_get_pps080(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW21_CUR                                                      0x180BB8DC
#define  DSCD_PPS_DW21_CUR_reg_addr                                              "0xB80BB8DC"
#define  DSCD_PPS_DW21_CUR_reg                                                   0xB80BB8DC
#define  DSCD_PPS_DW21_CUR_inst_addr                                             "0x0037"
#define  set_DSCD_PPS_DW21_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW21_CUR_reg)=data)
#define  get_DSCD_PPS_DW21_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW21_CUR_reg))
#define  DSCD_PPS_DW21_CUR_pps087_shift                                          (24)
#define  DSCD_PPS_DW21_CUR_pps086_shift                                          (16)
#define  DSCD_PPS_DW21_CUR_pps085_shift                                          (8)
#define  DSCD_PPS_DW21_CUR_pps084_shift                                          (0)
#define  DSCD_PPS_DW21_CUR_pps087_mask                                           (0xFF000000)
#define  DSCD_PPS_DW21_CUR_pps086_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW21_CUR_pps085_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW21_CUR_pps084_mask                                           (0x000000FF)
#define  DSCD_PPS_DW21_CUR_pps087(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW21_CUR_pps086(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW21_CUR_pps085(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW21_CUR_pps084(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW21_CUR_get_pps087(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW21_CUR_get_pps086(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW21_CUR_get_pps085(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW21_CUR_get_pps084(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW22_CUR                                                      0x180BB8E0
#define  DSCD_PPS_DW22_CUR_reg_addr                                              "0xB80BB8E0"
#define  DSCD_PPS_DW22_CUR_reg                                                   0xB80BB8E0
#define  DSCD_PPS_DW22_CUR_inst_addr                                             "0x0038"
#define  set_DSCD_PPS_DW22_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW22_CUR_reg)=data)
#define  get_DSCD_PPS_DW22_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW22_CUR_reg))
#define  DSCD_PPS_DW22_CUR_pps091_shift                                          (24)
#define  DSCD_PPS_DW22_CUR_pps090_shift                                          (16)
#define  DSCD_PPS_DW22_CUR_pps089_shift                                          (8)
#define  DSCD_PPS_DW22_CUR_pps088_shift                                          (0)
#define  DSCD_PPS_DW22_CUR_pps091_mask                                           (0xFF000000)
#define  DSCD_PPS_DW22_CUR_pps090_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW22_CUR_pps089_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW22_CUR_pps088_mask                                           (0x000000FF)
#define  DSCD_PPS_DW22_CUR_pps091(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW22_CUR_pps090(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW22_CUR_pps089(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW22_CUR_pps088(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW22_CUR_get_pps091(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW22_CUR_get_pps090(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW22_CUR_get_pps089(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW22_CUR_get_pps088(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW23_CUR                                                      0x180BB8E4
#define  DSCD_PPS_DW23_CUR_reg_addr                                              "0xB80BB8E4"
#define  DSCD_PPS_DW23_CUR_reg                                                   0xB80BB8E4
#define  DSCD_PPS_DW23_CUR_inst_addr                                             "0x0039"
#define  set_DSCD_PPS_DW23_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW23_CUR_reg)=data)
#define  get_DSCD_PPS_DW23_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW23_CUR_reg))
#define  DSCD_PPS_DW23_CUR_pps095_shift                                          (24)
#define  DSCD_PPS_DW23_CUR_pps094_shift                                          (16)
#define  DSCD_PPS_DW23_CUR_pps093_shift                                          (8)
#define  DSCD_PPS_DW23_CUR_pps092_shift                                          (0)
#define  DSCD_PPS_DW23_CUR_pps095_mask                                           (0xFF000000)
#define  DSCD_PPS_DW23_CUR_pps094_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW23_CUR_pps093_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW23_CUR_pps092_mask                                           (0x000000FF)
#define  DSCD_PPS_DW23_CUR_pps095(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW23_CUR_pps094(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW23_CUR_pps093(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW23_CUR_pps092(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW23_CUR_get_pps095(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW23_CUR_get_pps094(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW23_CUR_get_pps093(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW23_CUR_get_pps092(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW24_CUR                                                      0x180BB8E8
#define  DSCD_PPS_DW24_CUR_reg_addr                                              "0xB80BB8E8"
#define  DSCD_PPS_DW24_CUR_reg                                                   0xB80BB8E8
#define  DSCD_PPS_DW24_CUR_inst_addr                                             "0x003A"
#define  set_DSCD_PPS_DW24_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW24_CUR_reg)=data)
#define  get_DSCD_PPS_DW24_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW24_CUR_reg))
#define  DSCD_PPS_DW24_CUR_pps099_shift                                          (24)
#define  DSCD_PPS_DW24_CUR_pps098_shift                                          (16)
#define  DSCD_PPS_DW24_CUR_pps097_shift                                          (8)
#define  DSCD_PPS_DW24_CUR_pps096_shift                                          (0)
#define  DSCD_PPS_DW24_CUR_pps099_mask                                           (0xFF000000)
#define  DSCD_PPS_DW24_CUR_pps098_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW24_CUR_pps097_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW24_CUR_pps096_mask                                           (0x000000FF)
#define  DSCD_PPS_DW24_CUR_pps099(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW24_CUR_pps098(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW24_CUR_pps097(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW24_CUR_pps096(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW24_CUR_get_pps099(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW24_CUR_get_pps098(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW24_CUR_get_pps097(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW24_CUR_get_pps096(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW25_CUR                                                      0x180BB8EC
#define  DSCD_PPS_DW25_CUR_reg_addr                                              "0xB80BB8EC"
#define  DSCD_PPS_DW25_CUR_reg                                                   0xB80BB8EC
#define  DSCD_PPS_DW25_CUR_inst_addr                                             "0x003B"
#define  set_DSCD_PPS_DW25_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW25_CUR_reg)=data)
#define  get_DSCD_PPS_DW25_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW25_CUR_reg))
#define  DSCD_PPS_DW25_CUR_pps103_shift                                          (24)
#define  DSCD_PPS_DW25_CUR_pps102_shift                                          (16)
#define  DSCD_PPS_DW25_CUR_pps101_shift                                          (8)
#define  DSCD_PPS_DW25_CUR_pps100_shift                                          (0)
#define  DSCD_PPS_DW25_CUR_pps103_mask                                           (0xFF000000)
#define  DSCD_PPS_DW25_CUR_pps102_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW25_CUR_pps101_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW25_CUR_pps100_mask                                           (0x000000FF)
#define  DSCD_PPS_DW25_CUR_pps103(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW25_CUR_pps102(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW25_CUR_pps101(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW25_CUR_pps100(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW25_CUR_get_pps103(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW25_CUR_get_pps102(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW25_CUR_get_pps101(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW25_CUR_get_pps100(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW26_CUR                                                      0x180BB8F0
#define  DSCD_PPS_DW26_CUR_reg_addr                                              "0xB80BB8F0"
#define  DSCD_PPS_DW26_CUR_reg                                                   0xB80BB8F0
#define  DSCD_PPS_DW26_CUR_inst_addr                                             "0x003C"
#define  set_DSCD_PPS_DW26_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW26_CUR_reg)=data)
#define  get_DSCD_PPS_DW26_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW26_CUR_reg))
#define  DSCD_PPS_DW26_CUR_pps107_shift                                          (24)
#define  DSCD_PPS_DW26_CUR_pps106_shift                                          (16)
#define  DSCD_PPS_DW26_CUR_pps105_shift                                          (8)
#define  DSCD_PPS_DW26_CUR_pps104_shift                                          (0)
#define  DSCD_PPS_DW26_CUR_pps107_mask                                           (0xFF000000)
#define  DSCD_PPS_DW26_CUR_pps106_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW26_CUR_pps105_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW26_CUR_pps104_mask                                           (0x000000FF)
#define  DSCD_PPS_DW26_CUR_pps107(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW26_CUR_pps106(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW26_CUR_pps105(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW26_CUR_pps104(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW26_CUR_get_pps107(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW26_CUR_get_pps106(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW26_CUR_get_pps105(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW26_CUR_get_pps104(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW27_CUR                                                      0x180BB8F4
#define  DSCD_PPS_DW27_CUR_reg_addr                                              "0xB80BB8F4"
#define  DSCD_PPS_DW27_CUR_reg                                                   0xB80BB8F4
#define  DSCD_PPS_DW27_CUR_inst_addr                                             "0x003D"
#define  set_DSCD_PPS_DW27_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW27_CUR_reg)=data)
#define  get_DSCD_PPS_DW27_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW27_CUR_reg))
#define  DSCD_PPS_DW27_CUR_pps111_shift                                          (24)
#define  DSCD_PPS_DW27_CUR_pps110_shift                                          (16)
#define  DSCD_PPS_DW27_CUR_pps109_shift                                          (8)
#define  DSCD_PPS_DW27_CUR_pps108_shift                                          (0)
#define  DSCD_PPS_DW27_CUR_pps111_mask                                           (0xFF000000)
#define  DSCD_PPS_DW27_CUR_pps110_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW27_CUR_pps109_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW27_CUR_pps108_mask                                           (0x000000FF)
#define  DSCD_PPS_DW27_CUR_pps111(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW27_CUR_pps110(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW27_CUR_pps109(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW27_CUR_pps108(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW27_CUR_get_pps111(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW27_CUR_get_pps110(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW27_CUR_get_pps109(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW27_CUR_get_pps108(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW28_CUR                                                      0x180BB8F8
#define  DSCD_PPS_DW28_CUR_reg_addr                                              "0xB80BB8F8"
#define  DSCD_PPS_DW28_CUR_reg                                                   0xB80BB8F8
#define  DSCD_PPS_DW28_CUR_inst_addr                                             "0x003E"
#define  set_DSCD_PPS_DW28_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW28_CUR_reg)=data)
#define  get_DSCD_PPS_DW28_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW28_CUR_reg))
#define  DSCD_PPS_DW28_CUR_pps115_shift                                          (24)
#define  DSCD_PPS_DW28_CUR_pps114_shift                                          (16)
#define  DSCD_PPS_DW28_CUR_pps113_shift                                          (8)
#define  DSCD_PPS_DW28_CUR_pps112_shift                                          (0)
#define  DSCD_PPS_DW28_CUR_pps115_mask                                           (0xFF000000)
#define  DSCD_PPS_DW28_CUR_pps114_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW28_CUR_pps113_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW28_CUR_pps112_mask                                           (0x000000FF)
#define  DSCD_PPS_DW28_CUR_pps115(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW28_CUR_pps114(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW28_CUR_pps113(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW28_CUR_pps112(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW28_CUR_get_pps115(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW28_CUR_get_pps114(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW28_CUR_get_pps113(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW28_CUR_get_pps112(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW29_CUR                                                      0x180BB8FC
#define  DSCD_PPS_DW29_CUR_reg_addr                                              "0xB80BB8FC"
#define  DSCD_PPS_DW29_CUR_reg                                                   0xB80BB8FC
#define  DSCD_PPS_DW29_CUR_inst_addr                                             "0x003F"
#define  set_DSCD_PPS_DW29_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW29_CUR_reg)=data)
#define  get_DSCD_PPS_DW29_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW29_CUR_reg))
#define  DSCD_PPS_DW29_CUR_pps119_shift                                          (24)
#define  DSCD_PPS_DW29_CUR_pps118_shift                                          (16)
#define  DSCD_PPS_DW29_CUR_pps117_shift                                          (8)
#define  DSCD_PPS_DW29_CUR_pps116_shift                                          (0)
#define  DSCD_PPS_DW29_CUR_pps119_mask                                           (0xFF000000)
#define  DSCD_PPS_DW29_CUR_pps118_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW29_CUR_pps117_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW29_CUR_pps116_mask                                           (0x000000FF)
#define  DSCD_PPS_DW29_CUR_pps119(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW29_CUR_pps118(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW29_CUR_pps117(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW29_CUR_pps116(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW29_CUR_get_pps119(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW29_CUR_get_pps118(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW29_CUR_get_pps117(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW29_CUR_get_pps116(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW30_CUR                                                      0x180BB900
#define  DSCD_PPS_DW30_CUR_reg_addr                                              "0xB80BB900"
#define  DSCD_PPS_DW30_CUR_reg                                                   0xB80BB900
#define  DSCD_PPS_DW30_CUR_inst_addr                                             "0x0040"
#define  set_DSCD_PPS_DW30_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW30_CUR_reg)=data)
#define  get_DSCD_PPS_DW30_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW30_CUR_reg))
#define  DSCD_PPS_DW30_CUR_pps123_shift                                          (24)
#define  DSCD_PPS_DW30_CUR_pps122_shift                                          (16)
#define  DSCD_PPS_DW30_CUR_pps121_shift                                          (8)
#define  DSCD_PPS_DW30_CUR_pps120_shift                                          (0)
#define  DSCD_PPS_DW30_CUR_pps123_mask                                           (0xFF000000)
#define  DSCD_PPS_DW30_CUR_pps122_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW30_CUR_pps121_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW30_CUR_pps120_mask                                           (0x000000FF)
#define  DSCD_PPS_DW30_CUR_pps123(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW30_CUR_pps122(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW30_CUR_pps121(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW30_CUR_pps120(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW30_CUR_get_pps123(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW30_CUR_get_pps122(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW30_CUR_get_pps121(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW30_CUR_get_pps120(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW31_CUR                                                      0x180BB904
#define  DSCD_PPS_DW31_CUR_reg_addr                                              "0xB80BB904"
#define  DSCD_PPS_DW31_CUR_reg                                                   0xB80BB904
#define  DSCD_PPS_DW31_CUR_inst_addr                                             "0x0041"
#define  set_DSCD_PPS_DW31_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW31_CUR_reg)=data)
#define  get_DSCD_PPS_DW31_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW31_CUR_reg))
#define  DSCD_PPS_DW31_CUR_pps127_shift                                          (24)
#define  DSCD_PPS_DW31_CUR_pps126_shift                                          (16)
#define  DSCD_PPS_DW31_CUR_pps125_shift                                          (8)
#define  DSCD_PPS_DW31_CUR_pps124_shift                                          (0)
#define  DSCD_PPS_DW31_CUR_pps127_mask                                           (0xFF000000)
#define  DSCD_PPS_DW31_CUR_pps126_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW31_CUR_pps125_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW31_CUR_pps124_mask                                           (0x000000FF)
#define  DSCD_PPS_DW31_CUR_pps127(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW31_CUR_pps126(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW31_CUR_pps125(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW31_CUR_pps124(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW31_CUR_get_pps127(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW31_CUR_get_pps126(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW31_CUR_get_pps125(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW31_CUR_get_pps124(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW32_CUR                                                      0x180BB908
#define  DSCD_PPS_DW32_CUR_reg_addr                                              "0xB80BB908"
#define  DSCD_PPS_DW32_CUR_reg                                                   0xB80BB908
#define  DSCD_PPS_DW32_CUR_inst_addr                                             "0x0042"
#define  set_DSCD_PPS_DW32_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW32_CUR_reg)=data)
#define  get_DSCD_PPS_DW32_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW32_CUR_reg))
#define  DSCD_PPS_DW32_CUR_pps131_shift                                          (24)
#define  DSCD_PPS_DW32_CUR_pps130_shift                                          (16)
#define  DSCD_PPS_DW32_CUR_pps129_shift                                          (8)
#define  DSCD_PPS_DW32_CUR_pps128_shift                                          (0)
#define  DSCD_PPS_DW32_CUR_pps131_mask                                           (0xFF000000)
#define  DSCD_PPS_DW32_CUR_pps130_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW32_CUR_pps129_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW32_CUR_pps128_mask                                           (0x000000FF)
#define  DSCD_PPS_DW32_CUR_pps131(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW32_CUR_pps130(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW32_CUR_pps129(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW32_CUR_pps128(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW32_CUR_get_pps131(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW32_CUR_get_pps130(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW32_CUR_get_pps129(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW32_CUR_get_pps128(data)                                      (0x000000FF&(data))

#define  DSCD_PPS_DW33_CUR                                                      0x180BB90C
#define  DSCD_PPS_DW33_CUR_reg_addr                                              "0xB80BB90C"
#define  DSCD_PPS_DW33_CUR_reg                                                   0xB80BB90C
#define  DSCD_PPS_DW33_CUR_inst_addr                                             "0x0043"
#define  set_DSCD_PPS_DW33_CUR_reg(data)                                         (*((volatile unsigned int*)DSCD_PPS_DW33_CUR_reg)=data)
#define  get_DSCD_PPS_DW33_CUR_reg                                               (*((volatile unsigned int*)DSCD_PPS_DW33_CUR_reg))
#define  DSCD_PPS_DW33_CUR_pps135_shift                                          (24)
#define  DSCD_PPS_DW33_CUR_pps134_shift                                          (16)
#define  DSCD_PPS_DW33_CUR_pps133_shift                                          (8)
#define  DSCD_PPS_DW33_CUR_pps132_shift                                          (0)
#define  DSCD_PPS_DW33_CUR_pps135_mask                                           (0xFF000000)
#define  DSCD_PPS_DW33_CUR_pps134_mask                                           (0x00FF0000)
#define  DSCD_PPS_DW33_CUR_pps133_mask                                           (0x0000FF00)
#define  DSCD_PPS_DW33_CUR_pps132_mask                                           (0x000000FF)
#define  DSCD_PPS_DW33_CUR_pps135(data)                                          (0xFF000000&((data)<<24))
#define  DSCD_PPS_DW33_CUR_pps134(data)                                          (0x00FF0000&((data)<<16))
#define  DSCD_PPS_DW33_CUR_pps133(data)                                          (0x0000FF00&((data)<<8))
#define  DSCD_PPS_DW33_CUR_pps132(data)                                          (0x000000FF&(data))
#define  DSCD_PPS_DW33_CUR_get_pps135(data)                                      ((0xFF000000&(data))>>24)
#define  DSCD_PPS_DW33_CUR_get_pps134(data)                                      ((0x00FF0000&(data))>>16)
#define  DSCD_PPS_DW33_CUR_get_pps133(data)                                      ((0x0000FF00&(data))>>8)
#define  DSCD_PPS_DW33_CUR_get_pps132(data)                                      (0x000000FF&(data))

#define  DSCD_DB_CTRL                                                           0x180BB910
#define  DSCD_DB_CTRL_reg_addr                                                   "0xB80BB910"
#define  DSCD_DB_CTRL_reg                                                        0xB80BB910
#define  DSCD_DB_CTRL_inst_addr                                                  "0x0044"
#define  set_DSCD_DB_CTRL_reg(data)                                              (*((volatile unsigned int*)DSCD_DB_CTRL_reg)=data)
#define  get_DSCD_DB_CTRL_reg                                                    (*((volatile unsigned int*)DSCD_DB_CTRL_reg))
#define  DSCD_DB_CTRL_db_en_shift                                                (2)
#define  DSCD_DB_CTRL_db_read_level_shift                                        (1)
#define  DSCD_DB_CTRL_db_apply_shift                                             (0)
#define  DSCD_DB_CTRL_db_en_mask                                                 (0x00000004)
#define  DSCD_DB_CTRL_db_read_level_mask                                         (0x00000002)
#define  DSCD_DB_CTRL_db_apply_mask                                              (0x00000001)
#define  DSCD_DB_CTRL_db_en(data)                                                (0x00000004&((data)<<2))
#define  DSCD_DB_CTRL_db_read_level(data)                                        (0x00000002&((data)<<1))
#define  DSCD_DB_CTRL_db_apply(data)                                             (0x00000001&(data))
#define  DSCD_DB_CTRL_get_db_en(data)                                            ((0x00000004&(data))>>2)
#define  DSCD_DB_CTRL_get_db_read_level(data)                                    ((0x00000002&(data))>>1)
#define  DSCD_DB_CTRL_get_db_apply(data)                                         (0x00000001&(data))

#define  DSCD_CTRL                                                              0x180BB914
#define  DSCD_CTRL_reg_addr                                                      "0xB80BB914"
#define  DSCD_CTRL_reg                                                           0xB80BB914
#define  DSCD_CTRL_inst_addr                                                     "0x0045"
#define  set_DSCD_CTRL_reg(data)                                                 (*((volatile unsigned int*)DSCD_CTRL_reg)=data)
#define  get_DSCD_CTRL_reg                                                       (*((volatile unsigned int*)DSCD_CTRL_reg))
#define  DSCD_CTRL_dscd_decode_fail_fw_value_shift                               (4)
#define  DSCD_CTRL_dscd_decode_fail_fw_mode_shift                                (3)
#define  DSCD_CTRL_dscd_decode_fail_clr_fw_shift                                 (2)
#define  DSCD_CTRL_dscd_enable_shift                                             (1)
#define  DSCD_CTRL_pps_fw_mode_shift                                             (0)
#define  DSCD_CTRL_dscd_decode_fail_fw_value_mask                                (0x00000010)
#define  DSCD_CTRL_dscd_decode_fail_fw_mode_mask                                 (0x00000008)
#define  DSCD_CTRL_dscd_decode_fail_clr_fw_mask                                  (0x00000004)
#define  DSCD_CTRL_dscd_enable_mask                                              (0x00000002)
#define  DSCD_CTRL_pps_fw_mode_mask                                              (0x00000001)
#define  DSCD_CTRL_dscd_decode_fail_fw_value(data)                               (0x00000010&((data)<<4))
#define  DSCD_CTRL_dscd_decode_fail_fw_mode(data)                                (0x00000008&((data)<<3))
#define  DSCD_CTRL_dscd_decode_fail_clr_fw(data)                                 (0x00000004&((data)<<2))
#define  DSCD_CTRL_dscd_enable(data)                                             (0x00000002&((data)<<1))
#define  DSCD_CTRL_pps_fw_mode(data)                                             (0x00000001&(data))
#define  DSCD_CTRL_get_dscd_decode_fail_fw_value(data)                           ((0x00000010&(data))>>4)
#define  DSCD_CTRL_get_dscd_decode_fail_fw_mode(data)                            ((0x00000008&(data))>>3)
#define  DSCD_CTRL_get_dscd_decode_fail_clr_fw(data)                             ((0x00000004&(data))>>2)
#define  DSCD_CTRL_get_dscd_enable(data)                                         ((0x00000002&(data))>>1)
#define  DSCD_CTRL_get_pps_fw_mode(data)                                         (0x00000001&(data))

#define  DSCD_STATUS                                                            0x180BB918
#define  DSCD_STATUS_reg_addr                                                    "0xB80BB918"
#define  DSCD_STATUS_reg                                                         0xB80BB918
#define  DSCD_STATUS_inst_addr                                                   "0x0046"
#define  set_DSCD_STATUS_reg(data)                                               (*((volatile unsigned int*)DSCD_STATUS_reg)=data)
#define  get_DSCD_STATUS_reg                                                     (*((volatile unsigned int*)DSCD_STATUS_reg))
#define  DSCD_STATUS_em_pack_loss_dscd_shift                                     (4)
#define  DSCD_STATUS_em_pack_bch_err_dscd_shift                                  (3)
#define  DSCD_STATUS_dscd_decode_update_shift                                    (2)
#define  DSCD_STATUS_dscd_decode_fail_shift                                      (1)
#define  DSCD_STATUS_idle_shift                                                  (0)
#define  DSCD_STATUS_em_pack_loss_dscd_mask                                      (0x00000010)
#define  DSCD_STATUS_em_pack_bch_err_dscd_mask                                   (0x00000008)
#define  DSCD_STATUS_dscd_decode_update_mask                                     (0x00000004)
#define  DSCD_STATUS_dscd_decode_fail_mask                                       (0x00000002)
#define  DSCD_STATUS_idle_mask                                                   (0x00000001)
#define  DSCD_STATUS_em_pack_loss_dscd(data)                                     (0x00000010&((data)<<4))
#define  DSCD_STATUS_em_pack_bch_err_dscd(data)                                  (0x00000008&((data)<<3))
#define  DSCD_STATUS_dscd_decode_update(data)                                    (0x00000004&((data)<<2))
#define  DSCD_STATUS_dscd_decode_fail(data)                                      (0x00000002&((data)<<1))
#define  DSCD_STATUS_idle(data)                                                  (0x00000001&(data))
#define  DSCD_STATUS_get_em_pack_loss_dscd(data)                                 ((0x00000010&(data))>>4)
#define  DSCD_STATUS_get_em_pack_bch_err_dscd(data)                              ((0x00000008&(data))>>3)
#define  DSCD_STATUS_get_dscd_decode_update(data)                                ((0x00000004&(data))>>2)
#define  DSCD_STATUS_get_dscd_decode_fail(data)                                  ((0x00000002&(data))>>1)
#define  DSCD_STATUS_get_idle(data)                                              (0x00000001&(data))

#define  DSCD_WDE_DSCD                                                          0x180BB920
#define  DSCD_WDE_DSCD_reg_addr                                                  "0xB80BB920"
#define  DSCD_WDE_DSCD_reg                                                       0xB80BB920
#define  DSCD_WDE_DSCD_inst_addr                                                 "0x0047"
#define  set_DSCD_WDE_DSCD_reg(data)                                             (*((volatile unsigned int*)DSCD_WDE_DSCD_reg)=data)
#define  get_DSCD_WDE_DSCD_reg                                                   (*((volatile unsigned int*)DSCD_WDE_DSCD_reg))
#define  DSCD_WDE_DSCD_p_n_s_not_finish_even_wd_en_shift                         (29)
#define  DSCD_WDE_DSCD_pic_not_finish_even_wd_en_shift                           (28)
#define  DSCD_WDE_DSCD_rc_fifo_overflow_even_wd_en_shift                         (11)
#define  DSCD_WDE_DSCD_bs_demux_overflow_even_wd_en_shift                        (10)
#define  DSCD_WDE_DSCD_in_async_overflow_even_wd_en_shift                        (9)
#define  DSCD_WDE_DSCD_dec_not_finish_even_wd_en_shift                           (8)
#define  DSCD_WDE_DSCD_p_n_s_not_finish_even_wd_en_mask                          (0x20000000)
#define  DSCD_WDE_DSCD_pic_not_finish_even_wd_en_mask                            (0x10000000)
#define  DSCD_WDE_DSCD_rc_fifo_overflow_even_wd_en_mask                          (0x00000800)
#define  DSCD_WDE_DSCD_bs_demux_overflow_even_wd_en_mask                         (0x00000400)
#define  DSCD_WDE_DSCD_in_async_overflow_even_wd_en_mask                         (0x00000200)
#define  DSCD_WDE_DSCD_dec_not_finish_even_wd_en_mask                            (0x00000100)
#define  DSCD_WDE_DSCD_p_n_s_not_finish_even_wd_en(data)                         (0x20000000&((data)<<29))
#define  DSCD_WDE_DSCD_pic_not_finish_even_wd_en(data)                           (0x10000000&((data)<<28))
#define  DSCD_WDE_DSCD_rc_fifo_overflow_even_wd_en(data)                         (0x00000800&((data)<<11))
#define  DSCD_WDE_DSCD_bs_demux_overflow_even_wd_en(data)                        (0x00000400&((data)<<10))
#define  DSCD_WDE_DSCD_in_async_overflow_even_wd_en(data)                        (0x00000200&((data)<<9))
#define  DSCD_WDE_DSCD_dec_not_finish_even_wd_en(data)                           (0x00000100&((data)<<8))
#define  DSCD_WDE_DSCD_get_p_n_s_not_finish_even_wd_en(data)                     ((0x20000000&(data))>>29)
#define  DSCD_WDE_DSCD_get_pic_not_finish_even_wd_en(data)                       ((0x10000000&(data))>>28)
#define  DSCD_WDE_DSCD_get_rc_fifo_overflow_even_wd_en(data)                     ((0x00000800&(data))>>11)
#define  DSCD_WDE_DSCD_get_bs_demux_overflow_even_wd_en(data)                    ((0x00000400&(data))>>10)
#define  DSCD_WDE_DSCD_get_in_async_overflow_even_wd_en(data)                    ((0x00000200&(data))>>9)
#define  DSCD_WDE_DSCD_get_dec_not_finish_even_wd_en(data)                       ((0x00000100&(data))>>8)

#define  DSCD_INTE_DSCD                                                         0x180BB924
#define  DSCD_INTE_DSCD_reg_addr                                                 "0xB80BB924"
#define  DSCD_INTE_DSCD_reg                                                      0xB80BB924
#define  DSCD_INTE_DSCD_inst_addr                                                "0x0048"
#define  set_DSCD_INTE_DSCD_reg(data)                                            (*((volatile unsigned int*)DSCD_INTE_DSCD_reg)=data)
#define  get_DSCD_INTE_DSCD_reg                                                  (*((volatile unsigned int*)DSCD_INTE_DSCD_reg))
#define  DSCD_INTE_DSCD_dscd_in_vsync_irq_en_shift                               (30)
#define  DSCD_INTE_DSCD_p_n_s_not_finish_even_irq_en_shift                       (29)
#define  DSCD_INTE_DSCD_pic_not_finish_even_irq_en_shift                         (28)
#define  DSCD_INTE_DSCD_rc_fifo_overflow_even_irq_en_shift                       (11)
#define  DSCD_INTE_DSCD_bs_demux_overflow_even_irq_en_shift                      (10)
#define  DSCD_INTE_DSCD_in_async_overflow_even_irq_en_shift                      (9)
#define  DSCD_INTE_DSCD_dec_not_finish_even_irq_en_shift                         (8)
#define  DSCD_INTE_DSCD_dscd_in_vsync_irq_en_mask                                (0x40000000)
#define  DSCD_INTE_DSCD_p_n_s_not_finish_even_irq_en_mask                        (0x20000000)
#define  DSCD_INTE_DSCD_pic_not_finish_even_irq_en_mask                          (0x10000000)
#define  DSCD_INTE_DSCD_rc_fifo_overflow_even_irq_en_mask                        (0x00000800)
#define  DSCD_INTE_DSCD_bs_demux_overflow_even_irq_en_mask                       (0x00000400)
#define  DSCD_INTE_DSCD_in_async_overflow_even_irq_en_mask                       (0x00000200)
#define  DSCD_INTE_DSCD_dec_not_finish_even_irq_en_mask                          (0x00000100)
#define  DSCD_INTE_DSCD_dscd_in_vsync_irq_en(data)                               (0x40000000&((data)<<30))
#define  DSCD_INTE_DSCD_p_n_s_not_finish_even_irq_en(data)                       (0x20000000&((data)<<29))
#define  DSCD_INTE_DSCD_pic_not_finish_even_irq_en(data)                         (0x10000000&((data)<<28))
#define  DSCD_INTE_DSCD_rc_fifo_overflow_even_irq_en(data)                       (0x00000800&((data)<<11))
#define  DSCD_INTE_DSCD_bs_demux_overflow_even_irq_en(data)                      (0x00000400&((data)<<10))
#define  DSCD_INTE_DSCD_in_async_overflow_even_irq_en(data)                      (0x00000200&((data)<<9))
#define  DSCD_INTE_DSCD_dec_not_finish_even_irq_en(data)                         (0x00000100&((data)<<8))
#define  DSCD_INTE_DSCD_get_dscd_in_vsync_irq_en(data)                           ((0x40000000&(data))>>30)
#define  DSCD_INTE_DSCD_get_p_n_s_not_finish_even_irq_en(data)                   ((0x20000000&(data))>>29)
#define  DSCD_INTE_DSCD_get_pic_not_finish_even_irq_en(data)                     ((0x10000000&(data))>>28)
#define  DSCD_INTE_DSCD_get_rc_fifo_overflow_even_irq_en(data)                   ((0x00000800&(data))>>11)
#define  DSCD_INTE_DSCD_get_bs_demux_overflow_even_irq_en(data)                  ((0x00000400&(data))>>10)
#define  DSCD_INTE_DSCD_get_in_async_overflow_even_irq_en(data)                  ((0x00000200&(data))>>9)
#define  DSCD_INTE_DSCD_get_dec_not_finish_even_irq_en(data)                     ((0x00000100&(data))>>8)

#define  DSCD_INTS_DSCD                                                         0x180BB928
#define  DSCD_INTS_DSCD_reg_addr                                                 "0xB80BB928"
#define  DSCD_INTS_DSCD_reg                                                      0xB80BB928
#define  DSCD_INTS_DSCD_inst_addr                                                "0x0049"
#define  set_DSCD_INTS_DSCD_reg(data)                                            (*((volatile unsigned int*)DSCD_INTS_DSCD_reg)=data)
#define  get_DSCD_INTS_DSCD_reg                                                  (*((volatile unsigned int*)DSCD_INTS_DSCD_reg))
#define  DSCD_INTS_DSCD_dscd_in_vsync_irq_shift                                  (30)
#define  DSCD_INTS_DSCD_p_n_s_not_finish_even_irq_shift                          (29)
#define  DSCD_INTS_DSCD_pic_not_finish_even_irq_shift                            (28)
#define  DSCD_INTS_DSCD_rc_fifo_overflow_even_irq_shift                          (11)
#define  DSCD_INTS_DSCD_bs_demux_overflow_even_irq_shift                         (10)
#define  DSCD_INTS_DSCD_in_async_overflow_even_irq_shift                         (9)
#define  DSCD_INTS_DSCD_dec_not_finish_even_irq_shift                            (8)
#define  DSCD_INTS_DSCD_dscd_in_vsync_irq_mask                                   (0x40000000)
#define  DSCD_INTS_DSCD_p_n_s_not_finish_even_irq_mask                           (0x20000000)
#define  DSCD_INTS_DSCD_pic_not_finish_even_irq_mask                             (0x10000000)
#define  DSCD_INTS_DSCD_rc_fifo_overflow_even_irq_mask                           (0x00000800)
#define  DSCD_INTS_DSCD_bs_demux_overflow_even_irq_mask                          (0x00000400)
#define  DSCD_INTS_DSCD_in_async_overflow_even_irq_mask                          (0x00000200)
#define  DSCD_INTS_DSCD_dec_not_finish_even_irq_mask                             (0x00000100)
#define  DSCD_INTS_DSCD_dscd_in_vsync_irq(data)                                  (0x40000000&((data)<<30))
#define  DSCD_INTS_DSCD_p_n_s_not_finish_even_irq(data)                          (0x20000000&((data)<<29))
#define  DSCD_INTS_DSCD_pic_not_finish_even_irq(data)                            (0x10000000&((data)<<28))
#define  DSCD_INTS_DSCD_rc_fifo_overflow_even_irq(data)                          (0x00000800&((data)<<11))
#define  DSCD_INTS_DSCD_bs_demux_overflow_even_irq(data)                         (0x00000400&((data)<<10))
#define  DSCD_INTS_DSCD_in_async_overflow_even_irq(data)                         (0x00000200&((data)<<9))
#define  DSCD_INTS_DSCD_dec_not_finish_even_irq(data)                            (0x00000100&((data)<<8))
#define  DSCD_INTS_DSCD_get_dscd_in_vsync_irq(data)                              ((0x40000000&(data))>>30)
#define  DSCD_INTS_DSCD_get_p_n_s_not_finish_even_irq(data)                      ((0x20000000&(data))>>29)
#define  DSCD_INTS_DSCD_get_pic_not_finish_even_irq(data)                        ((0x10000000&(data))>>28)
#define  DSCD_INTS_DSCD_get_rc_fifo_overflow_even_irq(data)                      ((0x00000800&(data))>>11)
#define  DSCD_INTS_DSCD_get_bs_demux_overflow_even_irq(data)                     ((0x00000400&(data))>>10)
#define  DSCD_INTS_DSCD_get_in_async_overflow_even_irq(data)                     ((0x00000200&(data))>>9)
#define  DSCD_INTS_DSCD_get_dec_not_finish_even_irq(data)                        ((0x00000100&(data))>>8)

#define  DSCD_dummy                                                             0x180BB92C
#define  DSCD_dummy_reg_addr                                                     "0xB80BB92C"
#define  DSCD_dummy_reg                                                          0xB80BB92C
#define  DSCD_dummy_inst_addr                                                    "0x004A"
#define  set_DSCD_dummy_reg(data)                                                (*((volatile unsigned int*)DSCD_dummy_reg)=data)
#define  get_DSCD_dummy_reg                                                      (*((volatile unsigned int*)DSCD_dummy_reg))
#define  DSCD_dummy_dummy_31_0_shift                                             (0)
#define  DSCD_dummy_dummy_31_0_mask                                              (0xFFFFFFFF)
#define  DSCD_dummy_dummy_31_0(data)                                             (0xFFFFFFFF&(data))
#define  DSCD_dummy_get_dummy_31_0(data)                                         (0xFFFFFFFF&(data))

#define  DSCD_debug                                                             0x180BB930
#define  DSCD_debug_reg_addr                                                     "0xB80BB930"
#define  DSCD_debug_reg                                                          0xB80BB930
#define  DSCD_debug_inst_addr                                                    "0x004B"
#define  set_DSCD_debug_reg(data)                                                (*((volatile unsigned int*)DSCD_debug_reg)=data)
#define  get_DSCD_debug_reg                                                      (*((volatile unsigned int*)DSCD_debug_reg))
#define  DSCD_debug_dbg_sel_shift                                                (4)
#define  DSCD_debug_outwrap_fapa_done_off_shift                                  (2)
#define  DSCD_debug_dec_fsm_trig_vsync_en_shift                                  (1)
#define  DSCD_debug_dbg_en_shift                                                 (0)
#define  DSCD_debug_dbg_sel_mask                                                 (0x000000F0)
#define  DSCD_debug_outwrap_fapa_done_off_mask                                   (0x00000004)
#define  DSCD_debug_dec_fsm_trig_vsync_en_mask                                   (0x00000002)
#define  DSCD_debug_dbg_en_mask                                                  (0x00000001)
#define  DSCD_debug_dbg_sel(data)                                                (0x000000F0&((data)<<4))
#define  DSCD_debug_outwrap_fapa_done_off(data)                                  (0x00000004&((data)<<2))
#define  DSCD_debug_dec_fsm_trig_vsync_en(data)                                  (0x00000002&((data)<<1))
#define  DSCD_debug_dbg_en(data)                                                 (0x00000001&(data))
#define  DSCD_debug_get_dbg_sel(data)                                            ((0x000000F0&(data))>>4)
#define  DSCD_debug_get_outwrap_fapa_done_off(data)                              ((0x00000004&(data))>>2)
#define  DSCD_debug_get_dec_fsm_trig_vsync_en(data)                              ((0x00000002&(data))>>1)
#define  DSCD_debug_get_dbg_en(data)                                             (0x00000001&(data))

#define  DSCD_OUT_IV_DELAY                                                      0x180BB940
#define  DSCD_OUT_IV_DELAY_reg_addr                                              "0xB80BB940"
#define  DSCD_OUT_IV_DELAY_reg                                                   0xB80BB940
#define  DSCD_OUT_IV_DELAY_inst_addr                                             "0x004C"
#define  set_DSCD_OUT_IV_DELAY_reg(data)                                         (*((volatile unsigned int*)DSCD_OUT_IV_DELAY_reg)=data)
#define  get_DSCD_OUT_IV_DELAY_reg                                               (*((volatile unsigned int*)DSCD_OUT_IV_DELAY_reg))
#define  DSCD_OUT_IV_DELAY_dscd_iv_delay_shift                                   (0)
#define  DSCD_OUT_IV_DELAY_dscd_iv_delay_mask                                    (0xFFFFFFFF)
#define  DSCD_OUT_IV_DELAY_dscd_iv_delay(data)                                   (0xFFFFFFFF&(data))
#define  DSCD_OUT_IV_DELAY_get_dscd_iv_delay(data)                               (0xFFFFFFFF&(data))

#define  DSCD_OUT_VS_WIDTH                                                      0x180BB944
#define  DSCD_OUT_VS_WIDTH_reg_addr                                              "0xB80BB944"
#define  DSCD_OUT_VS_WIDTH_reg                                                   0xB80BB944
#define  DSCD_OUT_VS_WIDTH_inst_addr                                             "0x004D"
#define  set_DSCD_OUT_VS_WIDTH_reg(data)                                         (*((volatile unsigned int*)DSCD_OUT_VS_WIDTH_reg)=data)
#define  get_DSCD_OUT_VS_WIDTH_reg                                               (*((volatile unsigned int*)DSCD_OUT_VS_WIDTH_reg))
#define  DSCD_OUT_VS_WIDTH_dscd_out_dly_hw_mode_shift                            (16)
#define  DSCD_OUT_VS_WIDTH_dscd_vs_width_shift                                   (0)
#define  DSCD_OUT_VS_WIDTH_dscd_out_dly_hw_mode_mask                             (0x00010000)
#define  DSCD_OUT_VS_WIDTH_dscd_vs_width_mask                                    (0x0000FFFF)
#define  DSCD_OUT_VS_WIDTH_dscd_out_dly_hw_mode(data)                            (0x00010000&((data)<<16))
#define  DSCD_OUT_VS_WIDTH_dscd_vs_width(data)                                   (0x0000FFFF&(data))
#define  DSCD_OUT_VS_WIDTH_get_dscd_out_dly_hw_mode(data)                        ((0x00010000&(data))>>16)
#define  DSCD_OUT_VS_WIDTH_get_dscd_vs_width(data)                               (0x0000FFFF&(data))

#define  DSCD_OUT_DEN_DELAY                                                     0x180BB948
#define  DSCD_OUT_DEN_DELAY_reg_addr                                             "0xB80BB948"
#define  DSCD_OUT_DEN_DELAY_reg                                                  0xB80BB948
#define  DSCD_OUT_DEN_DELAY_inst_addr                                            "0x004E"
#define  set_DSCD_OUT_DEN_DELAY_reg(data)                                        (*((volatile unsigned int*)DSCD_OUT_DEN_DELAY_reg)=data)
#define  get_DSCD_OUT_DEN_DELAY_reg                                              (*((volatile unsigned int*)DSCD_OUT_DEN_DELAY_reg))
#define  DSCD_OUT_DEN_DELAY_dscd_hporch_shift                                    (16)
#define  DSCD_OUT_DEN_DELAY_dscd_out_den_delay_shift                             (0)
#define  DSCD_OUT_DEN_DELAY_dscd_hporch_mask                                     (0xFFFF0000)
#define  DSCD_OUT_DEN_DELAY_dscd_out_den_delay_mask                              (0x0000FFFF)
#define  DSCD_OUT_DEN_DELAY_dscd_hporch(data)                                    (0xFFFF0000&((data)<<16))
#define  DSCD_OUT_DEN_DELAY_dscd_out_den_delay(data)                             (0x0000FFFF&(data))
#define  DSCD_OUT_DEN_DELAY_get_dscd_hporch(data)                                ((0xFFFF0000&(data))>>16)
#define  DSCD_OUT_DEN_DELAY_get_dscd_out_den_delay(data)                         (0x0000FFFF&(data))

#define  DSCD_OUT_SWAP                                                          0x180BB94C
#define  DSCD_OUT_SWAP_reg_addr                                                  "0xB80BB94C"
#define  DSCD_OUT_SWAP_reg                                                       0xB80BB94C
#define  DSCD_OUT_SWAP_inst_addr                                                 "0x004F"
#define  set_DSCD_OUT_SWAP_reg(data)                                             (*((volatile unsigned int*)DSCD_OUT_SWAP_reg)=data)
#define  get_DSCD_OUT_SWAP_reg                                                   (*((volatile unsigned int*)DSCD_OUT_SWAP_reg))
#define  DSCD_OUT_SWAP_dscd_out_swap_444_rgb_shift                               (12)
#define  DSCD_OUT_SWAP_dscd_out_swap_444_shift                                   (8)
#define  DSCD_OUT_SWAP_dscd_out_swap_422_shift                                   (4)
#define  DSCD_OUT_SWAP_dscd_out_swap_420_shift                                   (0)
#define  DSCD_OUT_SWAP_dscd_out_swap_444_rgb_mask                                (0x00007000)
#define  DSCD_OUT_SWAP_dscd_out_swap_444_mask                                    (0x00000700)
#define  DSCD_OUT_SWAP_dscd_out_swap_422_mask                                    (0x00000070)
#define  DSCD_OUT_SWAP_dscd_out_swap_420_mask                                    (0x00000007)
#define  DSCD_OUT_SWAP_dscd_out_swap_444_rgb(data)                               (0x00007000&((data)<<12))
#define  DSCD_OUT_SWAP_dscd_out_swap_444(data)                                   (0x00000700&((data)<<8))
#define  DSCD_OUT_SWAP_dscd_out_swap_422(data)                                   (0x00000070&((data)<<4))
#define  DSCD_OUT_SWAP_dscd_out_swap_420(data)                                   (0x00000007&(data))
#define  DSCD_OUT_SWAP_get_dscd_out_swap_444_rgb(data)                           ((0x00007000&(data))>>12)
#define  DSCD_OUT_SWAP_get_dscd_out_swap_444(data)                               ((0x00000700&(data))>>8)
#define  DSCD_OUT_SWAP_get_dscd_out_swap_422(data)                               ((0x00000070&(data))>>4)
#define  DSCD_OUT_SWAP_get_dscd_out_swap_420(data)                               (0x00000007&(data))

#define  DSCD_OUT_MEASURE                                                       0x180BB960
#define  DSCD_OUT_MEASURE_reg_addr                                               "0xB80BB960"
#define  DSCD_OUT_MEASURE_reg                                                    0xB80BB960
#define  DSCD_OUT_MEASURE_inst_addr                                              "0x0050"
#define  set_DSCD_OUT_MEASURE_reg(data)                                          (*((volatile unsigned int*)DSCD_OUT_MEASURE_reg)=data)
#define  get_DSCD_OUT_MEASURE_reg                                                (*((volatile unsigned int*)DSCD_OUT_MEASURE_reg))
#define  DSCD_OUT_MEASURE_out_measure_long_term_shift                            (1)
#define  DSCD_OUT_MEASURE_out_measure_en_shift                                   (0)
#define  DSCD_OUT_MEASURE_out_measure_long_term_mask                             (0x00000002)
#define  DSCD_OUT_MEASURE_out_measure_en_mask                                    (0x00000001)
#define  DSCD_OUT_MEASURE_out_measure_long_term(data)                            (0x00000002&((data)<<1))
#define  DSCD_OUT_MEASURE_out_measure_en(data)                                   (0x00000001&(data))
#define  DSCD_OUT_MEASURE_get_out_measure_long_term(data)                        ((0x00000002&(data))>>1)
#define  DSCD_OUT_MEASURE_get_out_measure_en(data)                               (0x00000001&(data))

#define  DSCD_OUT_MEASURE_OUTBUF1                                               0x180BB964
#define  DSCD_OUT_MEASURE_OUTBUF1_reg_addr                                       "0xB80BB964"
#define  DSCD_OUT_MEASURE_OUTBUF1_reg                                            0xB80BB964
#define  DSCD_OUT_MEASURE_OUTBUF1_inst_addr                                      "0x0051"
#define  set_DSCD_OUT_MEASURE_OUTBUF1_reg(data)                                  (*((volatile unsigned int*)DSCD_OUT_MEASURE_OUTBUF1_reg)=data)
#define  get_DSCD_OUT_MEASURE_OUTBUF1_reg                                        (*((volatile unsigned int*)DSCD_OUT_MEASURE_OUTBUF1_reg))
#define  DSCD_OUT_MEASURE_OUTBUF1_out_buf_max_wl_even_shift                      (16)
#define  DSCD_OUT_MEASURE_OUTBUF1_out_buf_min_wl_even_shift                      (0)
#define  DSCD_OUT_MEASURE_OUTBUF1_out_buf_max_wl_even_mask                       (0xFFFF0000)
#define  DSCD_OUT_MEASURE_OUTBUF1_out_buf_min_wl_even_mask                       (0x0000FFFF)
#define  DSCD_OUT_MEASURE_OUTBUF1_out_buf_max_wl_even(data)                      (0xFFFF0000&((data)<<16))
#define  DSCD_OUT_MEASURE_OUTBUF1_out_buf_min_wl_even(data)                      (0x0000FFFF&(data))
#define  DSCD_OUT_MEASURE_OUTBUF1_get_out_buf_max_wl_even(data)                  ((0xFFFF0000&(data))>>16)
#define  DSCD_OUT_MEASURE_OUTBUF1_get_out_buf_min_wl_even(data)                  (0x0000FFFF&(data))

#define  DSCD_DSCD_Timing_monitor_ctrl                                          0x180BB970
#define  DSCD_DSCD_Timing_monitor_ctrl_reg_addr                                  "0xB80BB970"
#define  DSCD_DSCD_Timing_monitor_ctrl_reg                                       0xB80BB970
#define  DSCD_DSCD_Timing_monitor_ctrl_inst_addr                                 "0x0052"
#define  set_DSCD_DSCD_Timing_monitor_ctrl_reg(data)                             (*((volatile unsigned int*)DSCD_DSCD_Timing_monitor_ctrl_reg)=data)
#define  get_DSCD_DSCD_Timing_monitor_ctrl_reg                                   (*((volatile unsigned int*)DSCD_DSCD_Timing_monitor_ctrl_reg))
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_en_shift                   (31)
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_i2rnd_mode_shift           (29)
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_src_shift                  (28)
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_unit_shift                 (27)
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_multi_mode_shift           (26)
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_compare_shift              (24)
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_sta0_shift                 (12)
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_end0_shift                 (8)
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_sta1_shift                 (4)
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_end1_shift                 (0)
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_en_mask                    (0x80000000)
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_i2rnd_mode_mask            (0x60000000)
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_src_mask                   (0x10000000)
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_unit_mask                  (0x08000000)
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_multi_mode_mask            (0x04000000)
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_compare_mask               (0x03000000)
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_sta0_mask                  (0x0000F000)
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_end0_mask                  (0x00000F00)
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_sta1_mask                  (0x000000F0)
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_end1_mask                  (0x0000000F)
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_en(data)                   (0x80000000&((data)<<31))
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_i2rnd_mode(data)           (0x60000000&((data)<<29))
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_src(data)                  (0x10000000&((data)<<28))
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_unit(data)                 (0x08000000&((data)<<27))
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_multi_mode(data)           (0x04000000&((data)<<26))
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_compare(data)              (0x03000000&((data)<<24))
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_sta0(data)                 (0x0000F000&((data)<<12))
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_end0(data)                 (0x00000F00&((data)<<8))
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_sta1(data)                 (0x000000F0&((data)<<4))
#define  DSCD_DSCD_Timing_monitor_ctrl_timing_monitor_end1(data)                 (0x0000000F&(data))
#define  DSCD_DSCD_Timing_monitor_ctrl_get_timing_monitor_en(data)               ((0x80000000&(data))>>31)
#define  DSCD_DSCD_Timing_monitor_ctrl_get_timing_monitor_i2rnd_mode(data)       ((0x60000000&(data))>>29)
#define  DSCD_DSCD_Timing_monitor_ctrl_get_timing_monitor_src(data)              ((0x10000000&(data))>>28)
#define  DSCD_DSCD_Timing_monitor_ctrl_get_timing_monitor_unit(data)             ((0x08000000&(data))>>27)
#define  DSCD_DSCD_Timing_monitor_ctrl_get_timing_monitor_multi_mode(data)       ((0x04000000&(data))>>26)
#define  DSCD_DSCD_Timing_monitor_ctrl_get_timing_monitor_compare(data)          ((0x03000000&(data))>>24)
#define  DSCD_DSCD_Timing_monitor_ctrl_get_timing_monitor_sta0(data)             ((0x0000F000&(data))>>12)
#define  DSCD_DSCD_Timing_monitor_ctrl_get_timing_monitor_end0(data)             ((0x00000F00&(data))>>8)
#define  DSCD_DSCD_Timing_monitor_ctrl_get_timing_monitor_sta1(data)             ((0x000000F0&(data))>>4)
#define  DSCD_DSCD_Timing_monitor_ctrl_get_timing_monitor_end1(data)             (0x0000000F&(data))

#define  DSCD_DSCD_Timing_monitor_multi                                         0x180BB974
#define  DSCD_DSCD_Timing_monitor_multi_reg_addr                                 "0xB80BB974"
#define  DSCD_DSCD_Timing_monitor_multi_reg                                      0xB80BB974
#define  DSCD_DSCD_Timing_monitor_multi_inst_addr                                "0x0053"
#define  set_DSCD_DSCD_Timing_monitor_multi_reg(data)                            (*((volatile unsigned int*)DSCD_DSCD_Timing_monitor_multi_reg)=data)
#define  get_DSCD_DSCD_Timing_monitor_multi_reg                                  (*((volatile unsigned int*)DSCD_DSCD_Timing_monitor_multi_reg))
#define  DSCD_DSCD_Timing_monitor_multi_timing_monitor_sta2_shift                (28)
#define  DSCD_DSCD_Timing_monitor_multi_timing_monitor_end2_shift                (24)
#define  DSCD_DSCD_Timing_monitor_multi_timing_monitor_sta3_shift                (20)
#define  DSCD_DSCD_Timing_monitor_multi_timing_monitor_end3_shift                (16)
#define  DSCD_DSCD_Timing_monitor_multi_timing_monitor_sta4_shift                (12)
#define  DSCD_DSCD_Timing_monitor_multi_timing_monitor_end4_shift                (8)
#define  DSCD_DSCD_Timing_monitor_multi_timing_monitor_sta5_shift                (4)
#define  DSCD_DSCD_Timing_monitor_multi_timing_monitor_end5_shift                (0)
#define  DSCD_DSCD_Timing_monitor_multi_timing_monitor_sta2_mask                 (0xF0000000)
#define  DSCD_DSCD_Timing_monitor_multi_timing_monitor_end2_mask                 (0x0F000000)
#define  DSCD_DSCD_Timing_monitor_multi_timing_monitor_sta3_mask                 (0x00F00000)
#define  DSCD_DSCD_Timing_monitor_multi_timing_monitor_end3_mask                 (0x000F0000)
#define  DSCD_DSCD_Timing_monitor_multi_timing_monitor_sta4_mask                 (0x0000F000)
#define  DSCD_DSCD_Timing_monitor_multi_timing_monitor_end4_mask                 (0x00000F00)
#define  DSCD_DSCD_Timing_monitor_multi_timing_monitor_sta5_mask                 (0x000000F0)
#define  DSCD_DSCD_Timing_monitor_multi_timing_monitor_end5_mask                 (0x0000000F)
#define  DSCD_DSCD_Timing_monitor_multi_timing_monitor_sta2(data)                (0xF0000000&((data)<<28))
#define  DSCD_DSCD_Timing_monitor_multi_timing_monitor_end2(data)                (0x0F000000&((data)<<24))
#define  DSCD_DSCD_Timing_monitor_multi_timing_monitor_sta3(data)                (0x00F00000&((data)<<20))
#define  DSCD_DSCD_Timing_monitor_multi_timing_monitor_end3(data)                (0x000F0000&((data)<<16))
#define  DSCD_DSCD_Timing_monitor_multi_timing_monitor_sta4(data)                (0x0000F000&((data)<<12))
#define  DSCD_DSCD_Timing_monitor_multi_timing_monitor_end4(data)                (0x00000F00&((data)<<8))
#define  DSCD_DSCD_Timing_monitor_multi_timing_monitor_sta5(data)                (0x000000F0&((data)<<4))
#define  DSCD_DSCD_Timing_monitor_multi_timing_monitor_end5(data)                (0x0000000F&(data))
#define  DSCD_DSCD_Timing_monitor_multi_get_timing_monitor_sta2(data)            ((0xF0000000&(data))>>28)
#define  DSCD_DSCD_Timing_monitor_multi_get_timing_monitor_end2(data)            ((0x0F000000&(data))>>24)
#define  DSCD_DSCD_Timing_monitor_multi_get_timing_monitor_sta3(data)            ((0x00F00000&(data))>>20)
#define  DSCD_DSCD_Timing_monitor_multi_get_timing_monitor_end3(data)            ((0x000F0000&(data))>>16)
#define  DSCD_DSCD_Timing_monitor_multi_get_timing_monitor_sta4(data)            ((0x0000F000&(data))>>12)
#define  DSCD_DSCD_Timing_monitor_multi_get_timing_monitor_end4(data)            ((0x00000F00&(data))>>8)
#define  DSCD_DSCD_Timing_monitor_multi_get_timing_monitor_sta5(data)            ((0x000000F0&(data))>>4)
#define  DSCD_DSCD_Timing_monitor_multi_get_timing_monitor_end5(data)            (0x0000000F&(data))

#define  DSCD_DSCD_Timing_monitor_compare_th                                    0x180BB978
#define  DSCD_DSCD_Timing_monitor_compare_th_reg_addr                            "0xB80BB978"
#define  DSCD_DSCD_Timing_monitor_compare_th_reg                                 0xB80BB978
#define  DSCD_DSCD_Timing_monitor_compare_th_inst_addr                           "0x0054"
#define  set_DSCD_DSCD_Timing_monitor_compare_th_reg(data)                       (*((volatile unsigned int*)DSCD_DSCD_Timing_monitor_compare_th_reg)=data)
#define  get_DSCD_DSCD_Timing_monitor_compare_th_reg                             (*((volatile unsigned int*)DSCD_DSCD_Timing_monitor_compare_th_reg))
#define  DSCD_DSCD_Timing_monitor_compare_th_t_m_compare_th_shift                (0)
#define  DSCD_DSCD_Timing_monitor_compare_th_t_m_compare_th_mask                 (0x0FFFFFFF)
#define  DSCD_DSCD_Timing_monitor_compare_th_t_m_compare_th(data)                (0x0FFFFFFF&(data))
#define  DSCD_DSCD_Timing_monitor_compare_th_get_t_m_compare_th(data)            (0x0FFFFFFF&(data))

#define  DSCD_DSCD_Timing_monitor_golden                                        0x180BB97C
#define  DSCD_DSCD_Timing_monitor_golden_reg_addr                                "0xB80BB97C"
#define  DSCD_DSCD_Timing_monitor_golden_reg                                     0xB80BB97C
#define  DSCD_DSCD_Timing_monitor_golden_inst_addr                               "0x0055"
#define  set_DSCD_DSCD_Timing_monitor_golden_reg(data)                           (*((volatile unsigned int*)DSCD_DSCD_Timing_monitor_golden_reg)=data)
#define  get_DSCD_DSCD_Timing_monitor_golden_reg                                 (*((volatile unsigned int*)DSCD_DSCD_Timing_monitor_golden_reg))
#define  DSCD_DSCD_Timing_monitor_golden_t_m_golden_shift                        (0)
#define  DSCD_DSCD_Timing_monitor_golden_t_m_golden_mask                         (0x0FFFFFFF)
#define  DSCD_DSCD_Timing_monitor_golden_t_m_golden(data)                        (0x0FFFFFFF&(data))
#define  DSCD_DSCD_Timing_monitor_golden_get_t_m_golden(data)                    (0x0FFFFFFF&(data))

#define  DSCD_DSCD_Timing_monitor_result1                                       0x180BB980
#define  DSCD_DSCD_Timing_monitor_result1_reg_addr                               "0xB80BB980"
#define  DSCD_DSCD_Timing_monitor_result1_reg                                    0xB80BB980
#define  DSCD_DSCD_Timing_monitor_result1_inst_addr                              "0x0056"
#define  set_DSCD_DSCD_Timing_monitor_result1_reg(data)                          (*((volatile unsigned int*)DSCD_DSCD_Timing_monitor_result1_reg)=data)
#define  get_DSCD_DSCD_Timing_monitor_result1_reg                                (*((volatile unsigned int*)DSCD_DSCD_Timing_monitor_result1_reg))
#define  DSCD_DSCD_Timing_monitor_result1_t_m_result_previous1_shift             (0)
#define  DSCD_DSCD_Timing_monitor_result1_t_m_result_previous1_mask              (0x0FFFFFFF)
#define  DSCD_DSCD_Timing_monitor_result1_t_m_result_previous1(data)             (0x0FFFFFFF&(data))
#define  DSCD_DSCD_Timing_monitor_result1_get_t_m_result_previous1(data)         (0x0FFFFFFF&(data))

#define  DSCD_DSCD_Timing_monitor_result2                                       0x180BB984
#define  DSCD_DSCD_Timing_monitor_result2_reg_addr                               "0xB80BB984"
#define  DSCD_DSCD_Timing_monitor_result2_reg                                    0xB80BB984
#define  DSCD_DSCD_Timing_monitor_result2_inst_addr                              "0x0057"
#define  set_DSCD_DSCD_Timing_monitor_result2_reg(data)                          (*((volatile unsigned int*)DSCD_DSCD_Timing_monitor_result2_reg)=data)
#define  get_DSCD_DSCD_Timing_monitor_result2_reg                                (*((volatile unsigned int*)DSCD_DSCD_Timing_monitor_result2_reg))
#define  DSCD_DSCD_Timing_monitor_result2_t_m_result_previous2_shift             (0)
#define  DSCD_DSCD_Timing_monitor_result2_t_m_result_previous2_mask              (0x0FFFFFFF)
#define  DSCD_DSCD_Timing_monitor_result2_t_m_result_previous2(data)             (0x0FFFFFFF&(data))
#define  DSCD_DSCD_Timing_monitor_result2_get_t_m_result_previous2(data)         (0x0FFFFFFF&(data))

#define  DSCD_DSCD_Timing_monitor_result3                                       0x180BB988
#define  DSCD_DSCD_Timing_monitor_result3_reg_addr                               "0xB80BB988"
#define  DSCD_DSCD_Timing_monitor_result3_reg                                    0xB80BB988
#define  DSCD_DSCD_Timing_monitor_result3_inst_addr                              "0x0058"
#define  set_DSCD_DSCD_Timing_monitor_result3_reg(data)                          (*((volatile unsigned int*)DSCD_DSCD_Timing_monitor_result3_reg)=data)
#define  get_DSCD_DSCD_Timing_monitor_result3_reg                                (*((volatile unsigned int*)DSCD_DSCD_Timing_monitor_result3_reg))
#define  DSCD_DSCD_Timing_monitor_result3_t_m_result_previous3_shift             (0)
#define  DSCD_DSCD_Timing_monitor_result3_t_m_result_previous3_mask              (0x0FFFFFFF)
#define  DSCD_DSCD_Timing_monitor_result3_t_m_result_previous3(data)             (0x0FFFFFFF&(data))
#define  DSCD_DSCD_Timing_monitor_result3_get_t_m_result_previous3(data)         (0x0FFFFFFF&(data))

#define  DSCD_DSCD_Timing_monitor_result4                                       0x180BB98C
#define  DSCD_DSCD_Timing_monitor_result4_reg_addr                               "0xB80BB98C"
#define  DSCD_DSCD_Timing_monitor_result4_reg                                    0xB80BB98C
#define  DSCD_DSCD_Timing_monitor_result4_inst_addr                              "0x0059"
#define  set_DSCD_DSCD_Timing_monitor_result4_reg(data)                          (*((volatile unsigned int*)DSCD_DSCD_Timing_monitor_result4_reg)=data)
#define  get_DSCD_DSCD_Timing_monitor_result4_reg                                (*((volatile unsigned int*)DSCD_DSCD_Timing_monitor_result4_reg))
#define  DSCD_DSCD_Timing_monitor_result4_t_m_result_previous4_shift             (0)
#define  DSCD_DSCD_Timing_monitor_result4_t_m_result_previous4_mask              (0x0FFFFFFF)
#define  DSCD_DSCD_Timing_monitor_result4_t_m_result_previous4(data)             (0x0FFFFFFF&(data))
#define  DSCD_DSCD_Timing_monitor_result4_get_t_m_result_previous4(data)         (0x0FFFFFFF&(data))

#define  DSCD_DSCD_Timing_monitor_max                                           0x180BB990
#define  DSCD_DSCD_Timing_monitor_max_reg_addr                                   "0xB80BB990"
#define  DSCD_DSCD_Timing_monitor_max_reg                                        0xB80BB990
#define  DSCD_DSCD_Timing_monitor_max_inst_addr                                  "0x005A"
#define  set_DSCD_DSCD_Timing_monitor_max_reg(data)                              (*((volatile unsigned int*)DSCD_DSCD_Timing_monitor_max_reg)=data)
#define  get_DSCD_DSCD_Timing_monitor_max_reg                                    (*((volatile unsigned int*)DSCD_DSCD_Timing_monitor_max_reg))
#define  DSCD_DSCD_Timing_monitor_max_t_m_result_max_shift                       (0)
#define  DSCD_DSCD_Timing_monitor_max_t_m_result_max_mask                        (0x0FFFFFFF)
#define  DSCD_DSCD_Timing_monitor_max_t_m_result_max(data)                       (0x0FFFFFFF&(data))
#define  DSCD_DSCD_Timing_monitor_max_get_t_m_result_max(data)                   (0x0FFFFFFF&(data))

#define  DSCD_DSCD_Timing_monitor_min                                           0x180BB994
#define  DSCD_DSCD_Timing_monitor_min_reg_addr                                   "0xB80BB994"
#define  DSCD_DSCD_Timing_monitor_min_reg                                        0xB80BB994
#define  DSCD_DSCD_Timing_monitor_min_inst_addr                                  "0x005B"
#define  set_DSCD_DSCD_Timing_monitor_min_reg(data)                              (*((volatile unsigned int*)DSCD_DSCD_Timing_monitor_min_reg)=data)
#define  get_DSCD_DSCD_Timing_monitor_min_reg                                    (*((volatile unsigned int*)DSCD_DSCD_Timing_monitor_min_reg))
#define  DSCD_DSCD_Timing_monitor_min_t_m_result_min_shift                       (0)
#define  DSCD_DSCD_Timing_monitor_min_t_m_result_min_mask                        (0x0FFFFFFF)
#define  DSCD_DSCD_Timing_monitor_min_t_m_result_min(data)                       (0x0FFFFFFF&(data))
#define  DSCD_DSCD_Timing_monitor_min_get_t_m_result_min(data)                   (0x0FFFFFFF&(data))

#define  DSCD_DSCD_Timing_monitor_st                                            0x180BB998
#define  DSCD_DSCD_Timing_monitor_st_reg_addr                                    "0xB80BB998"
#define  DSCD_DSCD_Timing_monitor_st_reg                                         0xB80BB998
#define  DSCD_DSCD_Timing_monitor_st_inst_addr                                   "0x005C"
#define  set_DSCD_DSCD_Timing_monitor_st_reg(data)                               (*((volatile unsigned int*)DSCD_DSCD_Timing_monitor_st_reg)=data)
#define  get_DSCD_DSCD_Timing_monitor_st_reg                                     (*((volatile unsigned int*)DSCD_DSCD_Timing_monitor_st_reg))
#define  DSCD_DSCD_Timing_monitor_st_compare_hit_shift                           (2)
#define  DSCD_DSCD_Timing_monitor_st_hsync_hit_den_error_shift                   (1)
#define  DSCD_DSCD_Timing_monitor_st_vsync_hit_den_error_shift                   (0)
#define  DSCD_DSCD_Timing_monitor_st_compare_hit_mask                            (0x00000004)
#define  DSCD_DSCD_Timing_monitor_st_hsync_hit_den_error_mask                    (0x00000002)
#define  DSCD_DSCD_Timing_monitor_st_vsync_hit_den_error_mask                    (0x00000001)
#define  DSCD_DSCD_Timing_monitor_st_compare_hit(data)                           (0x00000004&((data)<<2))
#define  DSCD_DSCD_Timing_monitor_st_hsync_hit_den_error(data)                   (0x00000002&((data)<<1))
#define  DSCD_DSCD_Timing_monitor_st_vsync_hit_den_error(data)                   (0x00000001&(data))
#define  DSCD_DSCD_Timing_monitor_st_get_compare_hit(data)                       ((0x00000004&(data))>>2)
#define  DSCD_DSCD_Timing_monitor_st_get_hsync_hit_den_error(data)               ((0x00000002&(data))>>1)
#define  DSCD_DSCD_Timing_monitor_st_get_vsync_hit_den_error(data)               (0x00000001&(data))

#define  DSCD_DSCD_out_crc_en                                                   0x180BB9A0
#define  DSCD_DSCD_out_crc_en_reg_addr                                           "0xB80BB9A0"
#define  DSCD_DSCD_out_crc_en_reg                                                0xB80BB9A0
#define  DSCD_DSCD_out_crc_en_inst_addr                                          "0x005D"
#define  set_DSCD_DSCD_out_crc_en_reg(data)                                      (*((volatile unsigned int*)DSCD_DSCD_out_crc_en_reg)=data)
#define  get_DSCD_DSCD_out_crc_en_reg                                            (*((volatile unsigned int*)DSCD_DSCD_out_crc_en_reg))
#define  DSCD_DSCD_out_crc_en_dscd_out_crc_en_shift                              (31)
#define  DSCD_DSCD_out_crc_en_dscd_out_crc_sel_shift                             (0)
#define  DSCD_DSCD_out_crc_en_dscd_out_crc_en_mask                               (0x80000000)
#define  DSCD_DSCD_out_crc_en_dscd_out_crc_sel_mask                              (0x0000000F)
#define  DSCD_DSCD_out_crc_en_dscd_out_crc_en(data)                              (0x80000000&((data)<<31))
#define  DSCD_DSCD_out_crc_en_dscd_out_crc_sel(data)                             (0x0000000F&(data))
#define  DSCD_DSCD_out_crc_en_get_dscd_out_crc_en(data)                          ((0x80000000&(data))>>31)
#define  DSCD_DSCD_out_crc_en_get_dscd_out_crc_sel(data)                         (0x0000000F&(data))

#define  DSCD_DSCD_out_crc_result                                               0x180BB9A4
#define  DSCD_DSCD_out_crc_result_reg_addr                                       "0xB80BB9A4"
#define  DSCD_DSCD_out_crc_result_reg                                            0xB80BB9A4
#define  DSCD_DSCD_out_crc_result_inst_addr                                      "0x005E"
#define  set_DSCD_DSCD_out_crc_result_reg(data)                                  (*((volatile unsigned int*)DSCD_DSCD_out_crc_result_reg)=data)
#define  get_DSCD_DSCD_out_crc_result_reg                                        (*((volatile unsigned int*)DSCD_DSCD_out_crc_result_reg))
#define  DSCD_DSCD_out_crc_result_dscd_out_crc_result_shift                      (0)
#define  DSCD_DSCD_out_crc_result_dscd_out_crc_result_mask                       (0xFFFFFFFF)
#define  DSCD_DSCD_out_crc_result_dscd_out_crc_result(data)                      (0xFFFFFFFF&(data))
#define  DSCD_DSCD_out_crc_result_get_dscd_out_crc_result(data)                  (0xFFFFFFFF&(data))

#define  DSCD_Dscd_in_crc_en                                                    0x180BB9A8
#define  DSCD_Dscd_in_crc_en_reg_addr                                            "0xB80BB9A8"
#define  DSCD_Dscd_in_crc_en_reg                                                 0xB80BB9A8
#define  DSCD_Dscd_in_crc_en_inst_addr                                           "0x005F"
#define  set_DSCD_Dscd_in_crc_en_reg(data)                                       (*((volatile unsigned int*)DSCD_Dscd_in_crc_en_reg)=data)
#define  get_DSCD_Dscd_in_crc_en_reg                                             (*((volatile unsigned int*)DSCD_Dscd_in_crc_en_reg))
#define  DSCD_Dscd_in_crc_en_dscd_in_crc_en_shift                                (31)
#define  DSCD_Dscd_in_crc_en_dscd_in_crc_sel_shift                               (0)
#define  DSCD_Dscd_in_crc_en_dscd_in_crc_en_mask                                 (0x80000000)
#define  DSCD_Dscd_in_crc_en_dscd_in_crc_sel_mask                                (0x0000000F)
#define  DSCD_Dscd_in_crc_en_dscd_in_crc_en(data)                                (0x80000000&((data)<<31))
#define  DSCD_Dscd_in_crc_en_dscd_in_crc_sel(data)                               (0x0000000F&(data))
#define  DSCD_Dscd_in_crc_en_get_dscd_in_crc_en(data)                            ((0x80000000&(data))>>31)
#define  DSCD_Dscd_in_crc_en_get_dscd_in_crc_sel(data)                           (0x0000000F&(data))

#define  DSCD_Dscd_in_crc_result                                                0x180BB9AC
#define  DSCD_Dscd_in_crc_result_reg_addr                                        "0xB80BB9AC"
#define  DSCD_Dscd_in_crc_result_reg                                             0xB80BB9AC
#define  DSCD_Dscd_in_crc_result_inst_addr                                       "0x0060"
#define  set_DSCD_Dscd_in_crc_result_reg(data)                                   (*((volatile unsigned int*)DSCD_Dscd_in_crc_result_reg)=data)
#define  get_DSCD_Dscd_in_crc_result_reg                                         (*((volatile unsigned int*)DSCD_Dscd_in_crc_result_reg))
#define  DSCD_Dscd_in_crc_result_dscd_in_crc_result_shift                        (0)
#define  DSCD_Dscd_in_crc_result_dscd_in_crc_result_mask                         (0xFFFFFFFF)
#define  DSCD_Dscd_in_crc_result_dscd_in_crc_result(data)                        (0xFFFFFFFF&(data))
#define  DSCD_Dscd_in_crc_result_get_dscd_in_crc_result(data)                    (0xFFFFFFFF&(data))

#define  DSCD_DSCD_pps_crc_en                                                   0x180BB9B0
#define  DSCD_DSCD_pps_crc_en_reg_addr                                           "0xB80BB9B0"
#define  DSCD_DSCD_pps_crc_en_reg                                                0xB80BB9B0
#define  DSCD_DSCD_pps_crc_en_inst_addr                                          "0x0061"
#define  set_DSCD_DSCD_pps_crc_en_reg(data)                                      (*((volatile unsigned int*)DSCD_DSCD_pps_crc_en_reg)=data)
#define  get_DSCD_DSCD_pps_crc_en_reg                                            (*((volatile unsigned int*)DSCD_DSCD_pps_crc_en_reg))
#define  DSCD_DSCD_pps_crc_en_dscd_pps_crc_en_shift                              (31)
#define  DSCD_DSCD_pps_crc_en_dscd_pps_crc_sel_shift                             (0)
#define  DSCD_DSCD_pps_crc_en_dscd_pps_crc_en_mask                               (0x80000000)
#define  DSCD_DSCD_pps_crc_en_dscd_pps_crc_sel_mask                              (0x0000000F)
#define  DSCD_DSCD_pps_crc_en_dscd_pps_crc_en(data)                              (0x80000000&((data)<<31))
#define  DSCD_DSCD_pps_crc_en_dscd_pps_crc_sel(data)                             (0x0000000F&(data))
#define  DSCD_DSCD_pps_crc_en_get_dscd_pps_crc_en(data)                          ((0x80000000&(data))>>31)
#define  DSCD_DSCD_pps_crc_en_get_dscd_pps_crc_sel(data)                         (0x0000000F&(data))

#define  DSCD_DSCD_pps_crc_result                                               0x180BB9B4
#define  DSCD_DSCD_pps_crc_result_reg_addr                                       "0xB80BB9B4"
#define  DSCD_DSCD_pps_crc_result_reg                                            0xB80BB9B4
#define  DSCD_DSCD_pps_crc_result_inst_addr                                      "0x0062"
#define  set_DSCD_DSCD_pps_crc_result_reg(data)                                  (*((volatile unsigned int*)DSCD_DSCD_pps_crc_result_reg)=data)
#define  get_DSCD_DSCD_pps_crc_result_reg                                        (*((volatile unsigned int*)DSCD_DSCD_pps_crc_result_reg))
#define  DSCD_DSCD_pps_crc_result_dscd_pps_crc_resul_shift                       (0)
#define  DSCD_DSCD_pps_crc_result_dscd_pps_crc_resul_mask                        (0xFFFFFFFF)
#define  DSCD_DSCD_pps_crc_result_dscd_pps_crc_resul(data)                       (0xFFFFFFFF&(data))
#define  DSCD_DSCD_pps_crc_result_get_dscd_pps_crc_resul(data)                   (0xFFFFFFFF&(data))

#define  DSCD_DSCD_dbg_en                                                       0x180BBA00
#define  DSCD_DSCD_dbg_en_reg_addr                                               "0xB80BBA00"
#define  DSCD_DSCD_dbg_en_reg                                                    0xB80BBA00
#define  DSCD_DSCD_dbg_en_inst_addr                                              "0x0063"
#define  set_DSCD_DSCD_dbg_en_reg(data)                                          (*((volatile unsigned int*)DSCD_DSCD_dbg_en_reg)=data)
#define  get_DSCD_DSCD_dbg_en_reg                                                (*((volatile unsigned int*)DSCD_DSCD_dbg_en_reg))
#define  DSCD_DSCD_dbg_en_dbg_out_sel_shift                                      (16)
#define  DSCD_DSCD_dbg_en_dbg_mode1_shift                                        (1)
#define  DSCD_DSCD_dbg_en_dbg_out_sel_mask                                       (0x000F0000)
#define  DSCD_DSCD_dbg_en_dbg_mode1_mask                                         (0x00000002)
#define  DSCD_DSCD_dbg_en_dbg_out_sel(data)                                      (0x000F0000&((data)<<16))
#define  DSCD_DSCD_dbg_en_dbg_mode1(data)                                        (0x00000002&((data)<<1))
#define  DSCD_DSCD_dbg_en_get_dbg_out_sel(data)                                  ((0x000F0000&(data))>>16)
#define  DSCD_DSCD_dbg_en_get_dbg_mode1(data)                                    ((0x00000002&(data))>>1)

#define  DSCD_DSCD_dbg1                                                         0x180BBA08
#define  DSCD_DSCD_dbg1_reg_addr                                                 "0xB80BBA08"
#define  DSCD_DSCD_dbg1_reg                                                      0xB80BBA08
#define  DSCD_DSCD_dbg1_inst_addr                                                "0x0064"
#define  set_DSCD_DSCD_dbg1_reg(data)                                            (*((volatile unsigned int*)DSCD_DSCD_dbg1_reg)=data)
#define  get_DSCD_DSCD_dbg1_reg                                                  (*((volatile unsigned int*)DSCD_DSCD_dbg1_reg))
#define  DSCD_DSCD_dbg1_dbg1_sel_v_slice_shift                                   (16)
#define  DSCD_DSCD_dbg1_dbg1_sel_v_slice_mask                                    (0xFFFF0000)
#define  DSCD_DSCD_dbg1_dbg1_sel_v_slice(data)                                   (0xFFFF0000&((data)<<16))
#define  DSCD_DSCD_dbg1_get_dbg1_sel_v_slice(data)                               ((0xFFFF0000&(data))>>16)

#define  DSCD_DSCD_dbg1_size                                                    0x180BBA0C
#define  DSCD_DSCD_dbg1_size_reg_addr                                            "0xB80BBA0C"
#define  DSCD_DSCD_dbg1_size_reg                                                 0xB80BBA0C
#define  DSCD_DSCD_dbg1_size_inst_addr                                           "0x0065"
#define  set_DSCD_DSCD_dbg1_size_reg(data)                                       (*((volatile unsigned int*)DSCD_DSCD_dbg1_size_reg)=data)
#define  get_DSCD_DSCD_dbg1_size_reg                                             (*((volatile unsigned int*)DSCD_DSCD_dbg1_size_reg))
#define  DSCD_DSCD_dbg1_size_dbg1_pic_height_shift                               (16)
#define  DSCD_DSCD_dbg1_size_dbg1_pic_width_shift                                (0)
#define  DSCD_DSCD_dbg1_size_dbg1_pic_height_mask                                (0xFFFF0000)
#define  DSCD_DSCD_dbg1_size_dbg1_pic_width_mask                                 (0x0000FFFF)
#define  DSCD_DSCD_dbg1_size_dbg1_pic_height(data)                               (0xFFFF0000&((data)<<16))
#define  DSCD_DSCD_dbg1_size_dbg1_pic_width(data)                                (0x0000FFFF&(data))
#define  DSCD_DSCD_dbg1_size_get_dbg1_pic_height(data)                           ((0xFFFF0000&(data))>>16)
#define  DSCD_DSCD_dbg1_size_get_dbg1_pic_width(data)                            (0x0000FFFF&(data))

#define  DSCD_DSCD_dbg_sram                                                     0x180BBA14
#define  DSCD_DSCD_dbg_sram_reg_addr                                             "0xB80BBA14"
#define  DSCD_DSCD_dbg_sram_reg                                                  0xB80BBA14
#define  DSCD_DSCD_dbg_sram_inst_addr                                            "0x0066"
#define  set_DSCD_DSCD_dbg_sram_reg(data)                                        (*((volatile unsigned int*)DSCD_DSCD_dbg_sram_reg)=data)
#define  get_DSCD_DSCD_dbg_sram_reg                                              (*((volatile unsigned int*)DSCD_DSCD_dbg_sram_reg))
#define  DSCD_DSCD_dbg_sram_dbg_sram_owner_shift                                 (30)
#define  DSCD_DSCD_dbg_sram_dbg_sram_is_write_shift                              (16)
#define  DSCD_DSCD_dbg_sram_dbg_sram_addr_shift                                  (0)
#define  DSCD_DSCD_dbg_sram_dbg_sram_owner_mask                                  (0xC0000000)
#define  DSCD_DSCD_dbg_sram_dbg_sram_is_write_mask                               (0x00010000)
#define  DSCD_DSCD_dbg_sram_dbg_sram_addr_mask                                   (0x0000FFFF)
#define  DSCD_DSCD_dbg_sram_dbg_sram_owner(data)                                 (0xC0000000&((data)<<30))
#define  DSCD_DSCD_dbg_sram_dbg_sram_is_write(data)                              (0x00010000&((data)<<16))
#define  DSCD_DSCD_dbg_sram_dbg_sram_addr(data)                                  (0x0000FFFF&(data))
#define  DSCD_DSCD_dbg_sram_get_dbg_sram_owner(data)                             ((0xC0000000&(data))>>30)
#define  DSCD_DSCD_dbg_sram_get_dbg_sram_is_write(data)                          ((0x00010000&(data))>>16)
#define  DSCD_DSCD_dbg_sram_get_dbg_sram_addr(data)                              (0x0000FFFF&(data))

#define  DSCD_DSCD_sram_d0                                                      0x180BBA18
#define  DSCD_DSCD_sram_d0_reg_addr                                              "0xB80BBA18"
#define  DSCD_DSCD_sram_d0_reg                                                   0xB80BBA18
#define  DSCD_DSCD_sram_d0_inst_addr                                             "0x0067"
#define  set_DSCD_DSCD_sram_d0_reg(data)                                         (*((volatile unsigned int*)DSCD_DSCD_sram_d0_reg)=data)
#define  get_DSCD_DSCD_sram_d0_reg                                               (*((volatile unsigned int*)DSCD_DSCD_sram_d0_reg))
#define  DSCD_DSCD_sram_d0_dbg_sram_d0_shift                                     (0)
#define  DSCD_DSCD_sram_d0_dbg_sram_d0_mask                                      (0xFFFFFFFF)
#define  DSCD_DSCD_sram_d0_dbg_sram_d0(data)                                     (0xFFFFFFFF&(data))
#define  DSCD_DSCD_sram_d0_get_dbg_sram_d0(data)                                 (0xFFFFFFFF&(data))

#define  DSCD_DSCD_sram_d1                                                      0x180BBA1C
#define  DSCD_DSCD_sram_d1_reg_addr                                              "0xB80BBA1C"
#define  DSCD_DSCD_sram_d1_reg                                                   0xB80BBA1C
#define  DSCD_DSCD_sram_d1_inst_addr                                             "0x0068"
#define  set_DSCD_DSCD_sram_d1_reg(data)                                         (*((volatile unsigned int*)DSCD_DSCD_sram_d1_reg)=data)
#define  get_DSCD_DSCD_sram_d1_reg                                               (*((volatile unsigned int*)DSCD_DSCD_sram_d1_reg))
#define  DSCD_DSCD_sram_d1_dbg_sram_d1_shift                                     (0)
#define  DSCD_DSCD_sram_d1_dbg_sram_d1_mask                                      (0xFFFFFFFF)
#define  DSCD_DSCD_sram_d1_dbg_sram_d1(data)                                     (0xFFFFFFFF&(data))
#define  DSCD_DSCD_sram_d1_get_dbg_sram_d1(data)                                 (0xFFFFFFFF&(data))

#define  DSCD_DSCD_sram_d2                                                      0x180BBA20
#define  DSCD_DSCD_sram_d2_reg_addr                                              "0xB80BBA20"
#define  DSCD_DSCD_sram_d2_reg                                                   0xB80BBA20
#define  DSCD_DSCD_sram_d2_inst_addr                                             "0x0069"
#define  set_DSCD_DSCD_sram_d2_reg(data)                                         (*((volatile unsigned int*)DSCD_DSCD_sram_d2_reg)=data)
#define  get_DSCD_DSCD_sram_d2_reg                                               (*((volatile unsigned int*)DSCD_DSCD_sram_d2_reg))
#define  DSCD_DSCD_sram_d2_dbg_sram_d2_shift                                     (0)
#define  DSCD_DSCD_sram_d2_dbg_sram_d2_mask                                      (0xFFFFFFFF)
#define  DSCD_DSCD_sram_d2_dbg_sram_d2(data)                                     (0xFFFFFFFF&(data))
#define  DSCD_DSCD_sram_d2_get_dbg_sram_d2(data)                                 (0xFFFFFFFF&(data))

#define  DSCD_DSCD_sram_d3                                                      0x180BBA24
#define  DSCD_DSCD_sram_d3_reg_addr                                              "0xB80BBA24"
#define  DSCD_DSCD_sram_d3_reg                                                   0xB80BBA24
#define  DSCD_DSCD_sram_d3_inst_addr                                             "0x006A"
#define  set_DSCD_DSCD_sram_d3_reg(data)                                         (*((volatile unsigned int*)DSCD_DSCD_sram_d3_reg)=data)
#define  get_DSCD_DSCD_sram_d3_reg                                               (*((volatile unsigned int*)DSCD_DSCD_sram_d3_reg))
#define  DSCD_DSCD_sram_d3_dbg_sram_d3_shift                                     (0)
#define  DSCD_DSCD_sram_d3_dbg_sram_d3_mask                                      (0xFFFFFFFF)
#define  DSCD_DSCD_sram_d3_dbg_sram_d3(data)                                     (0xFFFFFFFF&(data))
#define  DSCD_DSCD_sram_d3_get_dbg_sram_d3(data)                                 (0xFFFFFFFF&(data))

#define  DSCD_DSCD_sram_d4                                                      0x180BBA28
#define  DSCD_DSCD_sram_d4_reg_addr                                              "0xB80BBA28"
#define  DSCD_DSCD_sram_d4_reg                                                   0xB80BBA28
#define  DSCD_DSCD_sram_d4_inst_addr                                             "0x006B"
#define  set_DSCD_DSCD_sram_d4_reg(data)                                         (*((volatile unsigned int*)DSCD_DSCD_sram_d4_reg)=data)
#define  get_DSCD_DSCD_sram_d4_reg                                               (*((volatile unsigned int*)DSCD_DSCD_sram_d4_reg))
#define  DSCD_DSCD_sram_d4_dbg_sram_d4_shift                                     (0)
#define  DSCD_DSCD_sram_d4_dbg_sram_d4_mask                                      (0xFFFFFFFF)
#define  DSCD_DSCD_sram_d4_dbg_sram_d4(data)                                     (0xFFFFFFFF&(data))
#define  DSCD_DSCD_sram_d4_get_dbg_sram_d4(data)                                 (0xFFFFFFFF&(data))

#define  DSCD_DSCD_sram_d5                                                      0x180BBA2C
#define  DSCD_DSCD_sram_d5_reg_addr                                              "0xB80BBA2C"
#define  DSCD_DSCD_sram_d5_reg                                                   0xB80BBA2C
#define  DSCD_DSCD_sram_d5_inst_addr                                             "0x006C"
#define  set_DSCD_DSCD_sram_d5_reg(data)                                         (*((volatile unsigned int*)DSCD_DSCD_sram_d5_reg)=data)
#define  get_DSCD_DSCD_sram_d5_reg                                               (*((volatile unsigned int*)DSCD_DSCD_sram_d5_reg))
#define  DSCD_DSCD_sram_d5_dbg_sram_d5_shift                                     (0)
#define  DSCD_DSCD_sram_d5_dbg_sram_d5_mask                                      (0xFFFFFFFF)
#define  DSCD_DSCD_sram_d5_dbg_sram_d5(data)                                     (0xFFFFFFFF&(data))
#define  DSCD_DSCD_sram_d5_get_dbg_sram_d5(data)                                 (0xFFFFFFFF&(data))

#define  DSCD_DSCD_sram_d6                                                      0x180BBA30
#define  DSCD_DSCD_sram_d6_reg_addr                                              "0xB80BBA30"
#define  DSCD_DSCD_sram_d6_reg                                                   0xB80BBA30
#define  DSCD_DSCD_sram_d6_inst_addr                                             "0x006D"
#define  set_DSCD_DSCD_sram_d6_reg(data)                                         (*((volatile unsigned int*)DSCD_DSCD_sram_d6_reg)=data)
#define  get_DSCD_DSCD_sram_d6_reg                                               (*((volatile unsigned int*)DSCD_DSCD_sram_d6_reg))
#define  DSCD_DSCD_sram_d6_dbg_sram_d6_shift                                     (0)
#define  DSCD_DSCD_sram_d6_dbg_sram_d6_mask                                      (0xFFFFFFFF)
#define  DSCD_DSCD_sram_d6_dbg_sram_d6(data)                                     (0xFFFFFFFF&(data))
#define  DSCD_DSCD_sram_d6_get_dbg_sram_d6(data)                                 (0xFFFFFFFF&(data))

#define  DSCD_DSCD_sram_d7                                                      0x180BBA34
#define  DSCD_DSCD_sram_d7_reg_addr                                              "0xB80BBA34"
#define  DSCD_DSCD_sram_d7_reg                                                   0xB80BBA34
#define  DSCD_DSCD_sram_d7_inst_addr                                             "0x006E"
#define  set_DSCD_DSCD_sram_d7_reg(data)                                         (*((volatile unsigned int*)DSCD_DSCD_sram_d7_reg)=data)
#define  get_DSCD_DSCD_sram_d7_reg                                               (*((volatile unsigned int*)DSCD_DSCD_sram_d7_reg))
#define  DSCD_DSCD_sram_d7_dbg_sram_d7_shift                                     (0)
#define  DSCD_DSCD_sram_d7_dbg_sram_d7_mask                                      (0xFFFFFFFF)
#define  DSCD_DSCD_sram_d7_dbg_sram_d7(data)                                     (0xFFFFFFFF&(data))
#define  DSCD_DSCD_sram_d7_get_dbg_sram_d7(data)                                 (0xFFFFFFFF&(data))

#define  DSCD_DSCD_dbg_sram_rw                                                  0x180BBA48
#define  DSCD_DSCD_dbg_sram_rw_reg_addr                                          "0xB80BBA48"
#define  DSCD_DSCD_dbg_sram_rw_reg                                               0xB80BBA48
#define  DSCD_DSCD_dbg_sram_rw_inst_addr                                         "0x006F"
#define  set_DSCD_DSCD_dbg_sram_rw_reg(data)                                     (*((volatile unsigned int*)DSCD_DSCD_dbg_sram_rw_reg)=data)
#define  get_DSCD_DSCD_dbg_sram_rw_reg                                           (*((volatile unsigned int*)DSCD_DSCD_dbg_sram_rw_reg))
#define  DSCD_DSCD_dbg_sram_rw_dbg_sram_rw_now_shift                             (0)
#define  DSCD_DSCD_dbg_sram_rw_dbg_sram_rw_now_mask                              (0x00000001)
#define  DSCD_DSCD_dbg_sram_rw_dbg_sram_rw_now(data)                             (0x00000001&(data))
#define  DSCD_DSCD_dbg_sram_rw_get_dbg_sram_rw_now(data)                         (0x00000001&(data))

#define  DSCD_DSCD_sram_q0                                                      0x180BBA4C
#define  DSCD_DSCD_sram_q0_reg_addr                                              "0xB80BBA4C"
#define  DSCD_DSCD_sram_q0_reg                                                   0xB80BBA4C
#define  DSCD_DSCD_sram_q0_inst_addr                                             "0x0070"
#define  set_DSCD_DSCD_sram_q0_reg(data)                                         (*((volatile unsigned int*)DSCD_DSCD_sram_q0_reg)=data)
#define  get_DSCD_DSCD_sram_q0_reg                                               (*((volatile unsigned int*)DSCD_DSCD_sram_q0_reg))
#define  DSCD_DSCD_sram_q0_dbg_sram_q0_shift                                     (0)
#define  DSCD_DSCD_sram_q0_dbg_sram_q0_mask                                      (0xFFFFFFFF)
#define  DSCD_DSCD_sram_q0_dbg_sram_q0(data)                                     (0xFFFFFFFF&(data))
#define  DSCD_DSCD_sram_q0_get_dbg_sram_q0(data)                                 (0xFFFFFFFF&(data))

#define  DSCD_DSCD_sram_q1                                                      0x180BBA50
#define  DSCD_DSCD_sram_q1_reg_addr                                              "0xB80BBA50"
#define  DSCD_DSCD_sram_q1_reg                                                   0xB80BBA50
#define  DSCD_DSCD_sram_q1_inst_addr                                             "0x0071"
#define  set_DSCD_DSCD_sram_q1_reg(data)                                         (*((volatile unsigned int*)DSCD_DSCD_sram_q1_reg)=data)
#define  get_DSCD_DSCD_sram_q1_reg                                               (*((volatile unsigned int*)DSCD_DSCD_sram_q1_reg))
#define  DSCD_DSCD_sram_q1_dbg_sram_q1_shift                                     (0)
#define  DSCD_DSCD_sram_q1_dbg_sram_q1_mask                                      (0xFFFFFFFF)
#define  DSCD_DSCD_sram_q1_dbg_sram_q1(data)                                     (0xFFFFFFFF&(data))
#define  DSCD_DSCD_sram_q1_get_dbg_sram_q1(data)                                 (0xFFFFFFFF&(data))

#define  DSCD_DSCD_sram_q2                                                      0x180BBA54
#define  DSCD_DSCD_sram_q2_reg_addr                                              "0xB80BBA54"
#define  DSCD_DSCD_sram_q2_reg                                                   0xB80BBA54
#define  DSCD_DSCD_sram_q2_inst_addr                                             "0x0072"
#define  set_DSCD_DSCD_sram_q2_reg(data)                                         (*((volatile unsigned int*)DSCD_DSCD_sram_q2_reg)=data)
#define  get_DSCD_DSCD_sram_q2_reg                                               (*((volatile unsigned int*)DSCD_DSCD_sram_q2_reg))
#define  DSCD_DSCD_sram_q2_dbg_sram_q2_shift                                     (0)
#define  DSCD_DSCD_sram_q2_dbg_sram_q2_mask                                      (0xFFFFFFFF)
#define  DSCD_DSCD_sram_q2_dbg_sram_q2(data)                                     (0xFFFFFFFF&(data))
#define  DSCD_DSCD_sram_q2_get_dbg_sram_q2(data)                                 (0xFFFFFFFF&(data))

#define  DSCD_DSCD_sram_q3                                                      0x180BBA58
#define  DSCD_DSCD_sram_q3_reg_addr                                              "0xB80BBA58"
#define  DSCD_DSCD_sram_q3_reg                                                   0xB80BBA58
#define  DSCD_DSCD_sram_q3_inst_addr                                             "0x0073"
#define  set_DSCD_DSCD_sram_q3_reg(data)                                         (*((volatile unsigned int*)DSCD_DSCD_sram_q3_reg)=data)
#define  get_DSCD_DSCD_sram_q3_reg                                               (*((volatile unsigned int*)DSCD_DSCD_sram_q3_reg))
#define  DSCD_DSCD_sram_q3_dbg_sram_q3_shift                                     (0)
#define  DSCD_DSCD_sram_q3_dbg_sram_q3_mask                                      (0xFFFFFFFF)
#define  DSCD_DSCD_sram_q3_dbg_sram_q3(data)                                     (0xFFFFFFFF&(data))
#define  DSCD_DSCD_sram_q3_get_dbg_sram_q3(data)                                 (0xFFFFFFFF&(data))

#define  DSCD_DSCD_sram_q4                                                      0x180BBA5C
#define  DSCD_DSCD_sram_q4_reg_addr                                              "0xB80BBA5C"
#define  DSCD_DSCD_sram_q4_reg                                                   0xB80BBA5C
#define  DSCD_DSCD_sram_q4_inst_addr                                             "0x0074"
#define  set_DSCD_DSCD_sram_q4_reg(data)                                         (*((volatile unsigned int*)DSCD_DSCD_sram_q4_reg)=data)
#define  get_DSCD_DSCD_sram_q4_reg                                               (*((volatile unsigned int*)DSCD_DSCD_sram_q4_reg))
#define  DSCD_DSCD_sram_q4_dbg_sram_q4_shift                                     (0)
#define  DSCD_DSCD_sram_q4_dbg_sram_q4_mask                                      (0xFFFFFFFF)
#define  DSCD_DSCD_sram_q4_dbg_sram_q4(data)                                     (0xFFFFFFFF&(data))
#define  DSCD_DSCD_sram_q4_get_dbg_sram_q4(data)                                 (0xFFFFFFFF&(data))

#define  DSCD_DSCD_sram_q5                                                      0x180BBA60
#define  DSCD_DSCD_sram_q5_reg_addr                                              "0xB80BBA60"
#define  DSCD_DSCD_sram_q5_reg                                                   0xB80BBA60
#define  DSCD_DSCD_sram_q5_inst_addr                                             "0x0075"
#define  set_DSCD_DSCD_sram_q5_reg(data)                                         (*((volatile unsigned int*)DSCD_DSCD_sram_q5_reg)=data)
#define  get_DSCD_DSCD_sram_q5_reg                                               (*((volatile unsigned int*)DSCD_DSCD_sram_q5_reg))
#define  DSCD_DSCD_sram_q5_dbg_sram_q5_shift                                     (0)
#define  DSCD_DSCD_sram_q5_dbg_sram_q5_mask                                      (0xFFFFFFFF)
#define  DSCD_DSCD_sram_q5_dbg_sram_q5(data)                                     (0xFFFFFFFF&(data))
#define  DSCD_DSCD_sram_q5_get_dbg_sram_q5(data)                                 (0xFFFFFFFF&(data))

#define  DSCD_DSCD_sram_q6                                                      0x180BBA64
#define  DSCD_DSCD_sram_q6_reg_addr                                              "0xB80BBA64"
#define  DSCD_DSCD_sram_q6_reg                                                   0xB80BBA64
#define  DSCD_DSCD_sram_q6_inst_addr                                             "0x0076"
#define  set_DSCD_DSCD_sram_q6_reg(data)                                         (*((volatile unsigned int*)DSCD_DSCD_sram_q6_reg)=data)
#define  get_DSCD_DSCD_sram_q6_reg                                               (*((volatile unsigned int*)DSCD_DSCD_sram_q6_reg))
#define  DSCD_DSCD_sram_q6_dbg_sram_q6_shift                                     (0)
#define  DSCD_DSCD_sram_q6_dbg_sram_q6_mask                                      (0xFFFFFFFF)
#define  DSCD_DSCD_sram_q6_dbg_sram_q6(data)                                     (0xFFFFFFFF&(data))
#define  DSCD_DSCD_sram_q6_get_dbg_sram_q6(data)                                 (0xFFFFFFFF&(data))

#define  DSCD_DSCD_sram_q7                                                      0x180BBA68
#define  DSCD_DSCD_sram_q7_reg_addr                                              "0xB80BBA68"
#define  DSCD_DSCD_sram_q7_reg                                                   0xB80BBA68
#define  DSCD_DSCD_sram_q7_inst_addr                                             "0x0077"
#define  set_DSCD_DSCD_sram_q7_reg(data)                                         (*((volatile unsigned int*)DSCD_DSCD_sram_q7_reg)=data)
#define  get_DSCD_DSCD_sram_q7_reg                                               (*((volatile unsigned int*)DSCD_DSCD_sram_q7_reg))
#define  DSCD_DSCD_sram_q7_dbg_sram_q7_shift                                     (0)
#define  DSCD_DSCD_sram_q7_dbg_sram_q7_mask                                      (0xFFFFFFFF)
#define  DSCD_DSCD_sram_q7_dbg_sram_q7(data)                                     (0xFFFFFFFF&(data))
#define  DSCD_DSCD_sram_q7_get_dbg_sram_q7(data)                                 (0xFFFFFFFF&(data))

#define  DSCD_DSCD_TIMING_GEN_CTRL                                              0x180BBA7C
#define  DSCD_DSCD_TIMING_GEN_CTRL_reg_addr                                      "0xB80BBA7C"
#define  DSCD_DSCD_TIMING_GEN_CTRL_reg                                           0xB80BBA7C
#define  DSCD_DSCD_TIMING_GEN_CTRL_inst_addr                                     "0x0078"
#define  set_DSCD_DSCD_TIMING_GEN_CTRL_reg(data)                                 (*((volatile unsigned int*)DSCD_DSCD_TIMING_GEN_CTRL_reg)=data)
#define  get_DSCD_DSCD_TIMING_GEN_CTRL_reg                                       (*((volatile unsigned int*)DSCD_DSCD_TIMING_GEN_CTRL_reg))
#define  DSCD_DSCD_TIMING_GEN_CTRL_self_tg_gt_rate_shift                         (16)
#define  DSCD_DSCD_TIMING_GEN_CTRL_self_tg_en_shift                              (0)
#define  DSCD_DSCD_TIMING_GEN_CTRL_self_tg_gt_rate_mask                          (0x1FFF0000)
#define  DSCD_DSCD_TIMING_GEN_CTRL_self_tg_en_mask                               (0x00000001)
#define  DSCD_DSCD_TIMING_GEN_CTRL_self_tg_gt_rate(data)                         (0x1FFF0000&((data)<<16))
#define  DSCD_DSCD_TIMING_GEN_CTRL_self_tg_en(data)                              (0x00000001&(data))
#define  DSCD_DSCD_TIMING_GEN_CTRL_get_self_tg_gt_rate(data)                     ((0x1FFF0000&(data))>>16)
#define  DSCD_DSCD_TIMING_GEN_CTRL_get_self_tg_en(data)                          (0x00000001&(data))

#define  DSCD_DSCD_TIMING_GEN_STA                                               0x180BBA80
#define  DSCD_DSCD_TIMING_GEN_STA_reg_addr                                       "0xB80BBA80"
#define  DSCD_DSCD_TIMING_GEN_STA_reg                                            0xB80BBA80
#define  DSCD_DSCD_TIMING_GEN_STA_inst_addr                                      "0x0079"
#define  set_DSCD_DSCD_TIMING_GEN_STA_reg(data)                                  (*((volatile unsigned int*)DSCD_DSCD_TIMING_GEN_STA_reg)=data)
#define  get_DSCD_DSCD_TIMING_GEN_STA_reg                                        (*((volatile unsigned int*)DSCD_DSCD_TIMING_GEN_STA_reg))
#define  DSCD_DSCD_TIMING_GEN_STA_self_tg_x_sta_shift                            (16)
#define  DSCD_DSCD_TIMING_GEN_STA_self_tg_y_sta_shift                            (0)
#define  DSCD_DSCD_TIMING_GEN_STA_self_tg_x_sta_mask                             (0x1FFF0000)
#define  DSCD_DSCD_TIMING_GEN_STA_self_tg_y_sta_mask                             (0x00001FFF)
#define  DSCD_DSCD_TIMING_GEN_STA_self_tg_x_sta(data)                            (0x1FFF0000&((data)<<16))
#define  DSCD_DSCD_TIMING_GEN_STA_self_tg_y_sta(data)                            (0x00001FFF&(data))
#define  DSCD_DSCD_TIMING_GEN_STA_get_self_tg_x_sta(data)                        ((0x1FFF0000&(data))>>16)
#define  DSCD_DSCD_TIMING_GEN_STA_get_self_tg_y_sta(data)                        (0x00001FFF&(data))

#define  DSCD_DSCD_TIMING_GEN_SIZE                                              0x180BBA84
#define  DSCD_DSCD_TIMING_GEN_SIZE_reg_addr                                      "0xB80BBA84"
#define  DSCD_DSCD_TIMING_GEN_SIZE_reg                                           0xB80BBA84
#define  DSCD_DSCD_TIMING_GEN_SIZE_inst_addr                                     "0x007A"
#define  set_DSCD_DSCD_TIMING_GEN_SIZE_reg(data)                                 (*((volatile unsigned int*)DSCD_DSCD_TIMING_GEN_SIZE_reg)=data)
#define  get_DSCD_DSCD_TIMING_GEN_SIZE_reg                                       (*((volatile unsigned int*)DSCD_DSCD_TIMING_GEN_SIZE_reg))
#define  DSCD_DSCD_TIMING_GEN_SIZE_self_tg_x_size_shift                          (16)
#define  DSCD_DSCD_TIMING_GEN_SIZE_self_tg_y_size_shift                          (0)
#define  DSCD_DSCD_TIMING_GEN_SIZE_self_tg_x_size_mask                           (0x1FFF0000)
#define  DSCD_DSCD_TIMING_GEN_SIZE_self_tg_y_size_mask                           (0x00001FFF)
#define  DSCD_DSCD_TIMING_GEN_SIZE_self_tg_x_size(data)                          (0x1FFF0000&((data)<<16))
#define  DSCD_DSCD_TIMING_GEN_SIZE_self_tg_y_size(data)                          (0x00001FFF&(data))
#define  DSCD_DSCD_TIMING_GEN_SIZE_get_self_tg_x_size(data)                      ((0x1FFF0000&(data))>>16)
#define  DSCD_DSCD_TIMING_GEN_SIZE_get_self_tg_y_size(data)                      (0x00001FFF&(data))

#define  DSCD_DSCD_TIMING_GEN_END                                               0x180BBA88
#define  DSCD_DSCD_TIMING_GEN_END_reg_addr                                       "0xB80BBA88"
#define  DSCD_DSCD_TIMING_GEN_END_reg                                            0xB80BBA88
#define  DSCD_DSCD_TIMING_GEN_END_inst_addr                                      "0x007B"
#define  set_DSCD_DSCD_TIMING_GEN_END_reg(data)                                  (*((volatile unsigned int*)DSCD_DSCD_TIMING_GEN_END_reg)=data)
#define  get_DSCD_DSCD_TIMING_GEN_END_reg                                        (*((volatile unsigned int*)DSCD_DSCD_TIMING_GEN_END_reg))
#define  DSCD_DSCD_TIMING_GEN_END_self_tg_x_end_shift                            (16)
#define  DSCD_DSCD_TIMING_GEN_END_self_tg_y_end_shift                            (0)
#define  DSCD_DSCD_TIMING_GEN_END_self_tg_x_end_mask                             (0x1FFF0000)
#define  DSCD_DSCD_TIMING_GEN_END_self_tg_y_end_mask                             (0x00001FFF)
#define  DSCD_DSCD_TIMING_GEN_END_self_tg_x_end(data)                            (0x1FFF0000&((data)<<16))
#define  DSCD_DSCD_TIMING_GEN_END_self_tg_y_end(data)                            (0x00001FFF&(data))
#define  DSCD_DSCD_TIMING_GEN_END_get_self_tg_x_end(data)                        ((0x1FFF0000&(data))>>16)
#define  DSCD_DSCD_TIMING_GEN_END_get_self_tg_y_end(data)                        (0x00001FFF&(data))

#define  DSCD_DSCD_TIMING_GEN_FRAME_RATE                                        0x180BBA8C
#define  DSCD_DSCD_TIMING_GEN_FRAME_RATE_reg_addr                                "0xB80BBA8C"
#define  DSCD_DSCD_TIMING_GEN_FRAME_RATE_reg                                     0xB80BBA8C
#define  DSCD_DSCD_TIMING_GEN_FRAME_RATE_inst_addr                               "0x007C"
#define  set_DSCD_DSCD_TIMING_GEN_FRAME_RATE_reg(data)                           (*((volatile unsigned int*)DSCD_DSCD_TIMING_GEN_FRAME_RATE_reg)=data)
#define  get_DSCD_DSCD_TIMING_GEN_FRAME_RATE_reg                                 (*((volatile unsigned int*)DSCD_DSCD_TIMING_GEN_FRAME_RATE_reg))
#define  DSCD_DSCD_TIMING_GEN_FRAME_RATE_frame_rate_measure_en_shift             (31)
#define  DSCD_DSCD_TIMING_GEN_FRAME_RATE_vs2vs_cycle_shift                       (0)
#define  DSCD_DSCD_TIMING_GEN_FRAME_RATE_frame_rate_measure_en_mask              (0x80000000)
#define  DSCD_DSCD_TIMING_GEN_FRAME_RATE_vs2vs_cycle_mask                        (0x7FFFFFFF)
#define  DSCD_DSCD_TIMING_GEN_FRAME_RATE_frame_rate_measure_en(data)             (0x80000000&((data)<<31))
#define  DSCD_DSCD_TIMING_GEN_FRAME_RATE_vs2vs_cycle(data)                       (0x7FFFFFFF&(data))
#define  DSCD_DSCD_TIMING_GEN_FRAME_RATE_get_frame_rate_measure_en(data)         ((0x80000000&(data))>>31)
#define  DSCD_DSCD_TIMING_GEN_FRAME_RATE_get_vs2vs_cycle(data)                   (0x7FFFFFFF&(data))

#define  DSCD_DSCD_PATTERN_GEN_CTRL                                             0x180BBA90
#define  DSCD_DSCD_PATTERN_GEN_CTRL_reg_addr                                     "0xB80BBA90"
#define  DSCD_DSCD_PATTERN_GEN_CTRL_reg                                          0xB80BBA90
#define  DSCD_DSCD_PATTERN_GEN_CTRL_inst_addr                                    "0x007D"
#define  set_DSCD_DSCD_PATTERN_GEN_CTRL_reg(data)                                (*((volatile unsigned int*)DSCD_DSCD_PATTERN_GEN_CTRL_reg)=data)
#define  get_DSCD_DSCD_PATTERN_GEN_CTRL_reg                                      (*((volatile unsigned int*)DSCD_DSCD_PATTERN_GEN_CTRL_reg))
#define  DSCD_DSCD_PATTERN_GEN_CTRL_patgen_en_shift                              (31)
#define  DSCD_DSCD_PATTERN_GEN_CTRL_patgen_rand_mode_shift                       (29)
#define  DSCD_DSCD_PATTERN_GEN_CTRL_patgen_width_shift                           (0)
#define  DSCD_DSCD_PATTERN_GEN_CTRL_patgen_en_mask                               (0x80000000)
#define  DSCD_DSCD_PATTERN_GEN_CTRL_patgen_rand_mode_mask                        (0x60000000)
#define  DSCD_DSCD_PATTERN_GEN_CTRL_patgen_width_mask                            (0x003FFFFF)
#define  DSCD_DSCD_PATTERN_GEN_CTRL_patgen_en(data)                              (0x80000000&((data)<<31))
#define  DSCD_DSCD_PATTERN_GEN_CTRL_patgen_rand_mode(data)                       (0x60000000&((data)<<29))
#define  DSCD_DSCD_PATTERN_GEN_CTRL_patgen_width(data)                           (0x003FFFFF&(data))
#define  DSCD_DSCD_PATTERN_GEN_CTRL_get_patgen_en(data)                          ((0x80000000&(data))>>31)
#define  DSCD_DSCD_PATTERN_GEN_CTRL_get_patgen_rand_mode(data)                   ((0x60000000&(data))>>29)
#define  DSCD_DSCD_PATTERN_GEN_CTRL_get_patgen_width(data)                       (0x003FFFFF&(data))

#define  DSCD_DSCD_PATTERN_GEN_C0_RGB                                           0x180BBA94
#define  DSCD_DSCD_PATTERN_GEN_C0_RGB_reg_addr                                   "0xB80BBA94"
#define  DSCD_DSCD_PATTERN_GEN_C0_RGB_reg                                        0xB80BBA94
#define  DSCD_DSCD_PATTERN_GEN_C0_RGB_inst_addr                                  "0x007E"
#define  set_DSCD_DSCD_PATTERN_GEN_C0_RGB_reg(data)                              (*((volatile unsigned int*)DSCD_DSCD_PATTERN_GEN_C0_RGB_reg)=data)
#define  get_DSCD_DSCD_PATTERN_GEN_C0_RGB_reg                                    (*((volatile unsigned int*)DSCD_DSCD_PATTERN_GEN_C0_RGB_reg))
#define  DSCD_DSCD_PATTERN_GEN_C0_RGB_patgen_c0_b_shift                          (24)
#define  DSCD_DSCD_PATTERN_GEN_C0_RGB_patgen_c0_g_shift                          (12)
#define  DSCD_DSCD_PATTERN_GEN_C0_RGB_patgen_c0_r_shift                          (0)
#define  DSCD_DSCD_PATTERN_GEN_C0_RGB_patgen_c0_b_mask                           (0xFF000000)
#define  DSCD_DSCD_PATTERN_GEN_C0_RGB_patgen_c0_g_mask                           (0x00FFF000)
#define  DSCD_DSCD_PATTERN_GEN_C0_RGB_patgen_c0_r_mask                           (0x00000FFF)
#define  DSCD_DSCD_PATTERN_GEN_C0_RGB_patgen_c0_b(data)                          (0xFF000000&((data)<<24))
#define  DSCD_DSCD_PATTERN_GEN_C0_RGB_patgen_c0_g(data)                          (0x00FFF000&((data)<<12))
#define  DSCD_DSCD_PATTERN_GEN_C0_RGB_patgen_c0_r(data)                          (0x00000FFF&(data))
#define  DSCD_DSCD_PATTERN_GEN_C0_RGB_get_patgen_c0_b(data)                      ((0xFF000000&(data))>>24)
#define  DSCD_DSCD_PATTERN_GEN_C0_RGB_get_patgen_c0_g(data)                      ((0x00FFF000&(data))>>12)
#define  DSCD_DSCD_PATTERN_GEN_C0_RGB_get_patgen_c0_r(data)                      (0x00000FFF&(data))

#define  DSCD_DSCD_PATTERN_GEN_C1_RGB                                           0x180BBA98
#define  DSCD_DSCD_PATTERN_GEN_C1_RGB_reg_addr                                   "0xB80BBA98"
#define  DSCD_DSCD_PATTERN_GEN_C1_RGB_reg                                        0xB80BBA98
#define  DSCD_DSCD_PATTERN_GEN_C1_RGB_inst_addr                                  "0x007F"
#define  set_DSCD_DSCD_PATTERN_GEN_C1_RGB_reg(data)                              (*((volatile unsigned int*)DSCD_DSCD_PATTERN_GEN_C1_RGB_reg)=data)
#define  get_DSCD_DSCD_PATTERN_GEN_C1_RGB_reg                                    (*((volatile unsigned int*)DSCD_DSCD_PATTERN_GEN_C1_RGB_reg))
#define  DSCD_DSCD_PATTERN_GEN_C1_RGB_patgen_c1_b_shift                          (24)
#define  DSCD_DSCD_PATTERN_GEN_C1_RGB_patgen_c1_g_shift                          (12)
#define  DSCD_DSCD_PATTERN_GEN_C1_RGB_patgen_c1_r_shift                          (0)
#define  DSCD_DSCD_PATTERN_GEN_C1_RGB_patgen_c1_b_mask                           (0xFF000000)
#define  DSCD_DSCD_PATTERN_GEN_C1_RGB_patgen_c1_g_mask                           (0x00FFF000)
#define  DSCD_DSCD_PATTERN_GEN_C1_RGB_patgen_c1_r_mask                           (0x00000FFF)
#define  DSCD_DSCD_PATTERN_GEN_C1_RGB_patgen_c1_b(data)                          (0xFF000000&((data)<<24))
#define  DSCD_DSCD_PATTERN_GEN_C1_RGB_patgen_c1_g(data)                          (0x00FFF000&((data)<<12))
#define  DSCD_DSCD_PATTERN_GEN_C1_RGB_patgen_c1_r(data)                          (0x00000FFF&(data))
#define  DSCD_DSCD_PATTERN_GEN_C1_RGB_get_patgen_c1_b(data)                      ((0xFF000000&(data))>>24)
#define  DSCD_DSCD_PATTERN_GEN_C1_RGB_get_patgen_c1_g(data)                      ((0x00FFF000&(data))>>12)
#define  DSCD_DSCD_PATTERN_GEN_C1_RGB_get_patgen_c1_r(data)                      (0x00000FFF&(data))

#define  DSCD_DSCD_PATTERN_GEN_C2_RGB                                           0x180BBA9C
#define  DSCD_DSCD_PATTERN_GEN_C2_RGB_reg_addr                                   "0xB80BBA9C"
#define  DSCD_DSCD_PATTERN_GEN_C2_RGB_reg                                        0xB80BBA9C
#define  DSCD_DSCD_PATTERN_GEN_C2_RGB_inst_addr                                  "0x0080"
#define  set_DSCD_DSCD_PATTERN_GEN_C2_RGB_reg(data)                              (*((volatile unsigned int*)DSCD_DSCD_PATTERN_GEN_C2_RGB_reg)=data)
#define  get_DSCD_DSCD_PATTERN_GEN_C2_RGB_reg                                    (*((volatile unsigned int*)DSCD_DSCD_PATTERN_GEN_C2_RGB_reg))
#define  DSCD_DSCD_PATTERN_GEN_C2_RGB_patgen_c2_b_shift                          (24)
#define  DSCD_DSCD_PATTERN_GEN_C2_RGB_patgen_c2_g_shift                          (12)
#define  DSCD_DSCD_PATTERN_GEN_C2_RGB_patgen_c2_r_shift                          (0)
#define  DSCD_DSCD_PATTERN_GEN_C2_RGB_patgen_c2_b_mask                           (0xFF000000)
#define  DSCD_DSCD_PATTERN_GEN_C2_RGB_patgen_c2_g_mask                           (0x00FFF000)
#define  DSCD_DSCD_PATTERN_GEN_C2_RGB_patgen_c2_r_mask                           (0x00000FFF)
#define  DSCD_DSCD_PATTERN_GEN_C2_RGB_patgen_c2_b(data)                          (0xFF000000&((data)<<24))
#define  DSCD_DSCD_PATTERN_GEN_C2_RGB_patgen_c2_g(data)                          (0x00FFF000&((data)<<12))
#define  DSCD_DSCD_PATTERN_GEN_C2_RGB_patgen_c2_r(data)                          (0x00000FFF&(data))
#define  DSCD_DSCD_PATTERN_GEN_C2_RGB_get_patgen_c2_b(data)                      ((0xFF000000&(data))>>24)
#define  DSCD_DSCD_PATTERN_GEN_C2_RGB_get_patgen_c2_g(data)                      ((0x00FFF000&(data))>>12)
#define  DSCD_DSCD_PATTERN_GEN_C2_RGB_get_patgen_c2_r(data)                      (0x00000FFF&(data))

#define  DSCD_DSCD_PATTERN_GEN_C3_RGB                                           0x180BBAA0
#define  DSCD_DSCD_PATTERN_GEN_C3_RGB_reg_addr                                   "0xB80BBAA0"
#define  DSCD_DSCD_PATTERN_GEN_C3_RGB_reg                                        0xB80BBAA0
#define  DSCD_DSCD_PATTERN_GEN_C3_RGB_inst_addr                                  "0x0081"
#define  set_DSCD_DSCD_PATTERN_GEN_C3_RGB_reg(data)                              (*((volatile unsigned int*)DSCD_DSCD_PATTERN_GEN_C3_RGB_reg)=data)
#define  get_DSCD_DSCD_PATTERN_GEN_C3_RGB_reg                                    (*((volatile unsigned int*)DSCD_DSCD_PATTERN_GEN_C3_RGB_reg))
#define  DSCD_DSCD_PATTERN_GEN_C3_RGB_patgen_c3_b_shift                          (24)
#define  DSCD_DSCD_PATTERN_GEN_C3_RGB_patgen_c3_g_shift                          (12)
#define  DSCD_DSCD_PATTERN_GEN_C3_RGB_patgen_c3_r_shift                          (0)
#define  DSCD_DSCD_PATTERN_GEN_C3_RGB_patgen_c3_b_mask                           (0xFF000000)
#define  DSCD_DSCD_PATTERN_GEN_C3_RGB_patgen_c3_g_mask                           (0x00FFF000)
#define  DSCD_DSCD_PATTERN_GEN_C3_RGB_patgen_c3_r_mask                           (0x00000FFF)
#define  DSCD_DSCD_PATTERN_GEN_C3_RGB_patgen_c3_b(data)                          (0xFF000000&((data)<<24))
#define  DSCD_DSCD_PATTERN_GEN_C3_RGB_patgen_c3_g(data)                          (0x00FFF000&((data)<<12))
#define  DSCD_DSCD_PATTERN_GEN_C3_RGB_patgen_c3_r(data)                          (0x00000FFF&(data))
#define  DSCD_DSCD_PATTERN_GEN_C3_RGB_get_patgen_c3_b(data)                      ((0xFF000000&(data))>>24)
#define  DSCD_DSCD_PATTERN_GEN_C3_RGB_get_patgen_c3_g(data)                      ((0x00FFF000&(data))>>12)
#define  DSCD_DSCD_PATTERN_GEN_C3_RGB_get_patgen_c3_r(data)                      (0x00000FFF&(data))

#define  DSCD_DSCD_PATTERN_GEN_C4_RGB                                           0x180BBAA4
#define  DSCD_DSCD_PATTERN_GEN_C4_RGB_reg_addr                                   "0xB80BBAA4"
#define  DSCD_DSCD_PATTERN_GEN_C4_RGB_reg                                        0xB80BBAA4
#define  DSCD_DSCD_PATTERN_GEN_C4_RGB_inst_addr                                  "0x0082"
#define  set_DSCD_DSCD_PATTERN_GEN_C4_RGB_reg(data)                              (*((volatile unsigned int*)DSCD_DSCD_PATTERN_GEN_C4_RGB_reg)=data)
#define  get_DSCD_DSCD_PATTERN_GEN_C4_RGB_reg                                    (*((volatile unsigned int*)DSCD_DSCD_PATTERN_GEN_C4_RGB_reg))
#define  DSCD_DSCD_PATTERN_GEN_C4_RGB_patgen_c4_b_shift                          (24)
#define  DSCD_DSCD_PATTERN_GEN_C4_RGB_patgen_c4_g_shift                          (12)
#define  DSCD_DSCD_PATTERN_GEN_C4_RGB_patgen_c4_r_shift                          (0)
#define  DSCD_DSCD_PATTERN_GEN_C4_RGB_patgen_c4_b_mask                           (0xFF000000)
#define  DSCD_DSCD_PATTERN_GEN_C4_RGB_patgen_c4_g_mask                           (0x00FFF000)
#define  DSCD_DSCD_PATTERN_GEN_C4_RGB_patgen_c4_r_mask                           (0x00000FFF)
#define  DSCD_DSCD_PATTERN_GEN_C4_RGB_patgen_c4_b(data)                          (0xFF000000&((data)<<24))
#define  DSCD_DSCD_PATTERN_GEN_C4_RGB_patgen_c4_g(data)                          (0x00FFF000&((data)<<12))
#define  DSCD_DSCD_PATTERN_GEN_C4_RGB_patgen_c4_r(data)                          (0x00000FFF&(data))
#define  DSCD_DSCD_PATTERN_GEN_C4_RGB_get_patgen_c4_b(data)                      ((0xFF000000&(data))>>24)
#define  DSCD_DSCD_PATTERN_GEN_C4_RGB_get_patgen_c4_g(data)                      ((0x00FFF000&(data))>>12)
#define  DSCD_DSCD_PATTERN_GEN_C4_RGB_get_patgen_c4_r(data)                      (0x00000FFF&(data))

#define  DSCD_DSCD_PATTERN_GEN_C5_RGB                                           0x180BBAA8
#define  DSCD_DSCD_PATTERN_GEN_C5_RGB_reg_addr                                   "0xB80BBAA8"
#define  DSCD_DSCD_PATTERN_GEN_C5_RGB_reg                                        0xB80BBAA8
#define  DSCD_DSCD_PATTERN_GEN_C5_RGB_inst_addr                                  "0x0083"
#define  set_DSCD_DSCD_PATTERN_GEN_C5_RGB_reg(data)                              (*((volatile unsigned int*)DSCD_DSCD_PATTERN_GEN_C5_RGB_reg)=data)
#define  get_DSCD_DSCD_PATTERN_GEN_C5_RGB_reg                                    (*((volatile unsigned int*)DSCD_DSCD_PATTERN_GEN_C5_RGB_reg))
#define  DSCD_DSCD_PATTERN_GEN_C5_RGB_patgen_c5_b_shift                          (24)
#define  DSCD_DSCD_PATTERN_GEN_C5_RGB_patgen_c5_g_shift                          (12)
#define  DSCD_DSCD_PATTERN_GEN_C5_RGB_patgen_c5_r_shift                          (0)
#define  DSCD_DSCD_PATTERN_GEN_C5_RGB_patgen_c5_b_mask                           (0xFF000000)
#define  DSCD_DSCD_PATTERN_GEN_C5_RGB_patgen_c5_g_mask                           (0x00FFF000)
#define  DSCD_DSCD_PATTERN_GEN_C5_RGB_patgen_c5_r_mask                           (0x00000FFF)
#define  DSCD_DSCD_PATTERN_GEN_C5_RGB_patgen_c5_b(data)                          (0xFF000000&((data)<<24))
#define  DSCD_DSCD_PATTERN_GEN_C5_RGB_patgen_c5_g(data)                          (0x00FFF000&((data)<<12))
#define  DSCD_DSCD_PATTERN_GEN_C5_RGB_patgen_c5_r(data)                          (0x00000FFF&(data))
#define  DSCD_DSCD_PATTERN_GEN_C5_RGB_get_patgen_c5_b(data)                      ((0xFF000000&(data))>>24)
#define  DSCD_DSCD_PATTERN_GEN_C5_RGB_get_patgen_c5_g(data)                      ((0x00FFF000&(data))>>12)
#define  DSCD_DSCD_PATTERN_GEN_C5_RGB_get_patgen_c5_r(data)                      (0x00000FFF&(data))

#define  DSCD_DSCD_PATTERN_GEN_C6_RGB                                           0x180BBAAC
#define  DSCD_DSCD_PATTERN_GEN_C6_RGB_reg_addr                                   "0xB80BBAAC"
#define  DSCD_DSCD_PATTERN_GEN_C6_RGB_reg                                        0xB80BBAAC
#define  DSCD_DSCD_PATTERN_GEN_C6_RGB_inst_addr                                  "0x0084"
#define  set_DSCD_DSCD_PATTERN_GEN_C6_RGB_reg(data)                              (*((volatile unsigned int*)DSCD_DSCD_PATTERN_GEN_C6_RGB_reg)=data)
#define  get_DSCD_DSCD_PATTERN_GEN_C6_RGB_reg                                    (*((volatile unsigned int*)DSCD_DSCD_PATTERN_GEN_C6_RGB_reg))
#define  DSCD_DSCD_PATTERN_GEN_C6_RGB_patgen_c6_b_shift                          (24)
#define  DSCD_DSCD_PATTERN_GEN_C6_RGB_patgen_c6_g_shift                          (12)
#define  DSCD_DSCD_PATTERN_GEN_C6_RGB_patgen_c6_r_shift                          (0)
#define  DSCD_DSCD_PATTERN_GEN_C6_RGB_patgen_c6_b_mask                           (0xFF000000)
#define  DSCD_DSCD_PATTERN_GEN_C6_RGB_patgen_c6_g_mask                           (0x00FFF000)
#define  DSCD_DSCD_PATTERN_GEN_C6_RGB_patgen_c6_r_mask                           (0x00000FFF)
#define  DSCD_DSCD_PATTERN_GEN_C6_RGB_patgen_c6_b(data)                          (0xFF000000&((data)<<24))
#define  DSCD_DSCD_PATTERN_GEN_C6_RGB_patgen_c6_g(data)                          (0x00FFF000&((data)<<12))
#define  DSCD_DSCD_PATTERN_GEN_C6_RGB_patgen_c6_r(data)                          (0x00000FFF&(data))
#define  DSCD_DSCD_PATTERN_GEN_C6_RGB_get_patgen_c6_b(data)                      ((0xFF000000&(data))>>24)
#define  DSCD_DSCD_PATTERN_GEN_C6_RGB_get_patgen_c6_g(data)                      ((0x00FFF000&(data))>>12)
#define  DSCD_DSCD_PATTERN_GEN_C6_RGB_get_patgen_c6_r(data)                      (0x00000FFF&(data))

#define  DSCD_DSCD_PATTERN_GEN_C7_RGB                                           0x180BBAB0
#define  DSCD_DSCD_PATTERN_GEN_C7_RGB_reg_addr                                   "0xB80BBAB0"
#define  DSCD_DSCD_PATTERN_GEN_C7_RGB_reg                                        0xB80BBAB0
#define  DSCD_DSCD_PATTERN_GEN_C7_RGB_inst_addr                                  "0x0085"
#define  set_DSCD_DSCD_PATTERN_GEN_C7_RGB_reg(data)                              (*((volatile unsigned int*)DSCD_DSCD_PATTERN_GEN_C7_RGB_reg)=data)
#define  get_DSCD_DSCD_PATTERN_GEN_C7_RGB_reg                                    (*((volatile unsigned int*)DSCD_DSCD_PATTERN_GEN_C7_RGB_reg))
#define  DSCD_DSCD_PATTERN_GEN_C7_RGB_patgen_c7_b_shift                          (24)
#define  DSCD_DSCD_PATTERN_GEN_C7_RGB_patgen_c7_g_shift                          (12)
#define  DSCD_DSCD_PATTERN_GEN_C7_RGB_patgen_c7_r_shift                          (0)
#define  DSCD_DSCD_PATTERN_GEN_C7_RGB_patgen_c7_b_mask                           (0xFF000000)
#define  DSCD_DSCD_PATTERN_GEN_C7_RGB_patgen_c7_g_mask                           (0x00FFF000)
#define  DSCD_DSCD_PATTERN_GEN_C7_RGB_patgen_c7_r_mask                           (0x00000FFF)
#define  DSCD_DSCD_PATTERN_GEN_C7_RGB_patgen_c7_b(data)                          (0xFF000000&((data)<<24))
#define  DSCD_DSCD_PATTERN_GEN_C7_RGB_patgen_c7_g(data)                          (0x00FFF000&((data)<<12))
#define  DSCD_DSCD_PATTERN_GEN_C7_RGB_patgen_c7_r(data)                          (0x00000FFF&(data))
#define  DSCD_DSCD_PATTERN_GEN_C7_RGB_get_patgen_c7_b(data)                      ((0xFF000000&(data))>>24)
#define  DSCD_DSCD_PATTERN_GEN_C7_RGB_get_patgen_c7_g(data)                      ((0x00FFF000&(data))>>12)
#define  DSCD_DSCD_PATTERN_GEN_C7_RGB_get_patgen_c7_r(data)                      (0x00000FFF&(data))

#define  DSCD_DSCD_PATTERN_GEN_B_MSB                                            0x180BBAB4
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_reg_addr                                    "0xB80BBAB4"
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_reg                                         0xB80BBAB4
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_inst_addr                                   "0x0086"
#define  set_DSCD_DSCD_PATTERN_GEN_B_MSB_reg(data)                               (*((volatile unsigned int*)DSCD_DSCD_PATTERN_GEN_B_MSB_reg)=data)
#define  get_DSCD_DSCD_PATTERN_GEN_B_MSB_reg                                     (*((volatile unsigned int*)DSCD_DSCD_PATTERN_GEN_B_MSB_reg))
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_patgen_c7_b_msb_shift                       (28)
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_patgen_c6_b_msb_shift                       (24)
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_patgen_c5_b_msb_shift                       (20)
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_patgen_c4_b_msb_shift                       (16)
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_patgen_c3_b_msb_shift                       (12)
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_patgen_c2_b_msb_shift                       (8)
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_patgen_c1_b_msb_shift                       (4)
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_patgen_c0_b_msb_shift                       (0)
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_patgen_c7_b_msb_mask                        (0xF0000000)
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_patgen_c6_b_msb_mask                        (0x0F000000)
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_patgen_c5_b_msb_mask                        (0x00F00000)
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_patgen_c4_b_msb_mask                        (0x000F0000)
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_patgen_c3_b_msb_mask                        (0x0000F000)
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_patgen_c2_b_msb_mask                        (0x00000F00)
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_patgen_c1_b_msb_mask                        (0x000000F0)
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_patgen_c0_b_msb_mask                        (0x0000000F)
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_patgen_c7_b_msb(data)                       (0xF0000000&((data)<<28))
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_patgen_c6_b_msb(data)                       (0x0F000000&((data)<<24))
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_patgen_c5_b_msb(data)                       (0x00F00000&((data)<<20))
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_patgen_c4_b_msb(data)                       (0x000F0000&((data)<<16))
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_patgen_c3_b_msb(data)                       (0x0000F000&((data)<<12))
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_patgen_c2_b_msb(data)                       (0x00000F00&((data)<<8))
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_patgen_c1_b_msb(data)                       (0x000000F0&((data)<<4))
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_patgen_c0_b_msb(data)                       (0x0000000F&(data))
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_get_patgen_c7_b_msb(data)                   ((0xF0000000&(data))>>28)
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_get_patgen_c6_b_msb(data)                   ((0x0F000000&(data))>>24)
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_get_patgen_c5_b_msb(data)                   ((0x00F00000&(data))>>20)
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_get_patgen_c4_b_msb(data)                   ((0x000F0000&(data))>>16)
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_get_patgen_c3_b_msb(data)                   ((0x0000F000&(data))>>12)
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_get_patgen_c2_b_msb(data)                   ((0x00000F00&(data))>>8)
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_get_patgen_c1_b_msb(data)                   ((0x000000F0&(data))>>4)
#define  DSCD_DSCD_PATTERN_GEN_B_MSB_get_patgen_c0_b_msb(data)                   (0x0000000F&(data))

#define  DSCD_DSCD_MBIST_READ_MARGIN_0                                          0x180BBAC0
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_reg_addr                                  "0xB80BBAC0"
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_reg                                       0xB80BBAC0
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_inst_addr                                 "0x0087"
#define  set_DSCD_DSCD_MBIST_READ_MARGIN_0_reg(data)                             (*((volatile unsigned int*)DSCD_DSCD_MBIST_READ_MARGIN_0_reg)=data)
#define  get_DSCD_DSCD_MBIST_READ_MARGIN_0_reg                                   (*((volatile unsigned int*)DSCD_DSCD_MBIST_READ_MARGIN_0_reg))
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_test_rwm_1_shift             (31)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_test1_1_shift                (30)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_ls_1_shift                   (29)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_rm_1_shift                   (25)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_rme_1_shift                  (24)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_test_rwm_0_shift             (23)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_test1_0_shift                (22)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_ls_0_shift                   (21)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_rm_0_shift                   (17)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_rme_0_shift                  (16)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_in_async_test1_1_shift               (14)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_in_async_ls_1_shift                  (13)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_in_async_rm_1_shift                  (9)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_in_async_rme_1_shift                 (8)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_in_async_test1_0_shift               (6)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_in_async_ls_0_shift                  (5)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_in_async_rm_0_shift                  (1)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_in_async_rme_0_shift                 (0)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_test_rwm_1_mask              (0x80000000)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_test1_1_mask                 (0x40000000)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_ls_1_mask                    (0x20000000)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_rm_1_mask                    (0x1E000000)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_rme_1_mask                   (0x01000000)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_test_rwm_0_mask              (0x00800000)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_test1_0_mask                 (0x00400000)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_ls_0_mask                    (0x00200000)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_rm_0_mask                    (0x001E0000)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_rme_0_mask                   (0x00010000)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_in_async_test1_1_mask                (0x00004000)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_in_async_ls_1_mask                   (0x00002000)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_in_async_rm_1_mask                   (0x00001E00)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_in_async_rme_1_mask                  (0x00000100)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_in_async_test1_0_mask                (0x00000040)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_in_async_ls_0_mask                   (0x00000020)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_in_async_rm_0_mask                   (0x0000001E)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_in_async_rme_0_mask                  (0x00000001)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_test_rwm_1(data)             (0x80000000&((data)<<31))
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_test1_1(data)                (0x40000000&((data)<<30))
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_ls_1(data)                   (0x20000000&((data)<<29))
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_rm_1(data)                   (0x1E000000&((data)<<25))
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_rme_1(data)                  (0x01000000&((data)<<24))
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_test_rwm_0(data)             (0x00800000&((data)<<23))
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_test1_0(data)                (0x00400000&((data)<<22))
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_ls_0(data)                   (0x00200000&((data)<<21))
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_rm_0(data)                   (0x001E0000&((data)<<17))
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_rc_fifo_rme_0(data)                  (0x00010000&((data)<<16))
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_in_async_test1_1(data)               (0x00004000&((data)<<14))
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_in_async_ls_1(data)                  (0x00002000&((data)<<13))
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_in_async_rm_1(data)                  (0x00001E00&((data)<<9))
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_in_async_rme_1(data)                 (0x00000100&((data)<<8))
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_in_async_test1_0(data)               (0x00000040&((data)<<6))
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_in_async_ls_0(data)                  (0x00000020&((data)<<5))
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_in_async_rm_0(data)                  (0x0000001E&((data)<<1))
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_dscd_in_async_rme_0(data)                 (0x00000001&(data))
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_get_dscd_rc_fifo_test_rwm_1(data)         ((0x80000000&(data))>>31)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_get_dscd_rc_fifo_test1_1(data)            ((0x40000000&(data))>>30)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_get_dscd_rc_fifo_ls_1(data)               ((0x20000000&(data))>>29)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_get_dscd_rc_fifo_rm_1(data)               ((0x1E000000&(data))>>25)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_get_dscd_rc_fifo_rme_1(data)              ((0x01000000&(data))>>24)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_get_dscd_rc_fifo_test_rwm_0(data)         ((0x00800000&(data))>>23)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_get_dscd_rc_fifo_test1_0(data)            ((0x00400000&(data))>>22)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_get_dscd_rc_fifo_ls_0(data)               ((0x00200000&(data))>>21)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_get_dscd_rc_fifo_rm_0(data)               ((0x001E0000&(data))>>17)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_get_dscd_rc_fifo_rme_0(data)              ((0x00010000&(data))>>16)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_get_dscd_in_async_test1_1(data)           ((0x00004000&(data))>>14)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_get_dscd_in_async_ls_1(data)              ((0x00002000&(data))>>13)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_get_dscd_in_async_rm_1(data)              ((0x00001E00&(data))>>9)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_get_dscd_in_async_rme_1(data)             ((0x00000100&(data))>>8)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_get_dscd_in_async_test1_0(data)           ((0x00000040&(data))>>6)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_get_dscd_in_async_ls_0(data)              ((0x00000020&(data))>>5)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_get_dscd_in_async_rm_0(data)              ((0x0000001E&(data))>>1)
#define  DSCD_DSCD_MBIST_READ_MARGIN_0_get_dscd_in_async_rme_0(data)             (0x00000001&(data))

#define  DSCD_DSCD_MBIST_READ_MARGIN_1                                          0x180BBAC4
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_reg_addr                                  "0xB80BBAC4"
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_reg                                       0xB80BBAC4
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_inst_addr                                 "0x0088"
#define  set_DSCD_DSCD_MBIST_READ_MARGIN_1_reg(data)                             (*((volatile unsigned int*)DSCD_DSCD_MBIST_READ_MARGIN_1_reg)=data)
#define  get_DSCD_DSCD_MBIST_READ_MARGIN_1_reg                                   (*((volatile unsigned int*)DSCD_DSCD_MBIST_READ_MARGIN_1_reg))
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_dscd_lbs_test1_1_shift                    (14)
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_dscd_lbs_ls_1_shift                       (13)
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_dscd_lbs_rm_1_shift                       (9)
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_dscd_lbs_rme_1_shift                      (8)
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_dscd_lbs_test1_0_shift                    (6)
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_dscd_lbs_ls_0_shift                       (5)
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_dscd_lbs_rm_0_shift                       (1)
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_dscd_lbs_rme_0_shift                      (0)
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_dscd_lbs_test1_1_mask                     (0x00004000)
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_dscd_lbs_ls_1_mask                        (0x00002000)
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_dscd_lbs_rm_1_mask                        (0x00001E00)
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_dscd_lbs_rme_1_mask                       (0x00000100)
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_dscd_lbs_test1_0_mask                     (0x00000040)
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_dscd_lbs_ls_0_mask                        (0x00000020)
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_dscd_lbs_rm_0_mask                        (0x0000001E)
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_dscd_lbs_rme_0_mask                       (0x00000001)
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_dscd_lbs_test1_1(data)                    (0x00004000&((data)<<14))
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_dscd_lbs_ls_1(data)                       (0x00002000&((data)<<13))
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_dscd_lbs_rm_1(data)                       (0x00001E00&((data)<<9))
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_dscd_lbs_rme_1(data)                      (0x00000100&((data)<<8))
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_dscd_lbs_test1_0(data)                    (0x00000040&((data)<<6))
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_dscd_lbs_ls_0(data)                       (0x00000020&((data)<<5))
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_dscd_lbs_rm_0(data)                       (0x0000001E&((data)<<1))
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_dscd_lbs_rme_0(data)                      (0x00000001&(data))
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_get_dscd_lbs_test1_1(data)                ((0x00004000&(data))>>14)
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_get_dscd_lbs_ls_1(data)                   ((0x00002000&(data))>>13)
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_get_dscd_lbs_rm_1(data)                   ((0x00001E00&(data))>>9)
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_get_dscd_lbs_rme_1(data)                  ((0x00000100&(data))>>8)
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_get_dscd_lbs_test1_0(data)                ((0x00000040&(data))>>6)
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_get_dscd_lbs_ls_0(data)                   ((0x00000020&(data))>>5)
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_get_dscd_lbs_rm_0(data)                   ((0x0000001E&(data))>>1)
#define  DSCD_DSCD_MBIST_READ_MARGIN_1_get_dscd_lbs_rme_0(data)                  (0x00000001&(data))

#define  DSCD_DSCD_MBIST_READ_MARGIN_2                                          0x180BBAC8
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_reg_addr                                  "0xB80BBAC8"
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_reg                                       0xB80BBAC8
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_inst_addr                                 "0x0089"
#define  set_DSCD_DSCD_MBIST_READ_MARGIN_2_reg(data)                             (*((volatile unsigned int*)DSCD_DSCD_MBIST_READ_MARGIN_2_reg)=data)
#define  get_DSCD_DSCD_MBIST_READ_MARGIN_2_reg                                   (*((volatile unsigned int*)DSCD_DSCD_MBIST_READ_MARGIN_2_reg))
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_test1_3_shift               (30)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_ls_3_shift                  (29)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_rm_3_shift                  (25)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_rme_3_shift                 (24)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_test1_2_shift               (22)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_ls_2_shift                  (21)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_rm_2_shift                  (17)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_rme_2_shift                 (16)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_test1_1_shift               (14)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_ls_1_shift                  (13)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_rm_1_shift                  (9)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_rme_1_shift                 (8)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_test1_0_shift               (6)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_ls_0_shift                  (5)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_rm_0_shift                  (1)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_rme_0_shift                 (0)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_test1_3_mask                (0x40000000)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_ls_3_mask                   (0x20000000)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_rm_3_mask                   (0x1E000000)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_rme_3_mask                  (0x01000000)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_test1_2_mask                (0x00400000)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_ls_2_mask                   (0x00200000)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_rm_2_mask                   (0x001E0000)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_rme_2_mask                  (0x00010000)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_test1_1_mask                (0x00004000)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_ls_1_mask                   (0x00002000)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_rm_1_mask                   (0x00001E00)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_rme_1_mask                  (0x00000100)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_test1_0_mask                (0x00000040)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_ls_0_mask                   (0x00000020)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_rm_0_mask                   (0x0000001E)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_rme_0_mask                  (0x00000001)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_test1_3(data)               (0x40000000&((data)<<30))
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_ls_3(data)                  (0x20000000&((data)<<29))
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_rm_3(data)                  (0x1E000000&((data)<<25))
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_rme_3(data)                 (0x01000000&((data)<<24))
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_test1_2(data)               (0x00400000&((data)<<22))
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_ls_2(data)                  (0x00200000&((data)<<21))
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_rm_2(data)                  (0x001E0000&((data)<<17))
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_rme_2(data)                 (0x00010000&((data)<<16))
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_test1_1(data)               (0x00004000&((data)<<14))
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_ls_1(data)                  (0x00002000&((data)<<13))
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_rm_1(data)                  (0x00001E00&((data)<<9))
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_rme_1(data)                 (0x00000100&((data)<<8))
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_test1_0(data)               (0x00000040&((data)<<6))
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_ls_0(data)                  (0x00000020&((data)<<5))
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_rm_0(data)                  (0x0000001E&((data)<<1))
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_dscd_out_bufs_rme_0(data)                 (0x00000001&(data))
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_get_dscd_out_bufs_test1_3(data)           ((0x40000000&(data))>>30)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_get_dscd_out_bufs_ls_3(data)              ((0x20000000&(data))>>29)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_get_dscd_out_bufs_rm_3(data)              ((0x1E000000&(data))>>25)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_get_dscd_out_bufs_rme_3(data)             ((0x01000000&(data))>>24)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_get_dscd_out_bufs_test1_2(data)           ((0x00400000&(data))>>22)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_get_dscd_out_bufs_ls_2(data)              ((0x00200000&(data))>>21)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_get_dscd_out_bufs_rm_2(data)              ((0x001E0000&(data))>>17)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_get_dscd_out_bufs_rme_2(data)             ((0x00010000&(data))>>16)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_get_dscd_out_bufs_test1_1(data)           ((0x00004000&(data))>>14)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_get_dscd_out_bufs_ls_1(data)              ((0x00002000&(data))>>13)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_get_dscd_out_bufs_rm_1(data)              ((0x00001E00&(data))>>9)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_get_dscd_out_bufs_rme_1(data)             ((0x00000100&(data))>>8)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_get_dscd_out_bufs_test1_0(data)           ((0x00000040&(data))>>6)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_get_dscd_out_bufs_ls_0(data)              ((0x00000020&(data))>>5)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_get_dscd_out_bufs_rm_0(data)              ((0x0000001E&(data))>>1)
#define  DSCD_DSCD_MBIST_READ_MARGIN_2_get_dscd_out_bufs_rme_0(data)             (0x00000001&(data))

#define  DSCD_DSCD_BIST_MODE                                                    0x180BBACC
#define  DSCD_DSCD_BIST_MODE_reg_addr                                            "0xB80BBACC"
#define  DSCD_DSCD_BIST_MODE_reg                                                 0xB80BBACC
#define  DSCD_DSCD_BIST_MODE_inst_addr                                           "0x008A"
#define  set_DSCD_DSCD_BIST_MODE_reg(data)                                       (*((volatile unsigned int*)DSCD_DSCD_BIST_MODE_reg)=data)
#define  get_DSCD_DSCD_BIST_MODE_reg                                             (*((volatile unsigned int*)DSCD_DSCD_BIST_MODE_reg))
#define  DSCD_DSCD_BIST_MODE_dscd_out_bufs_bist_mode_1_shift                     (5)
#define  DSCD_DSCD_BIST_MODE_dscd_out_bufs_bist_mode_0_shift                     (4)
#define  DSCD_DSCD_BIST_MODE_dscd_lbs_bist_mode_1_shift                          (3)
#define  DSCD_DSCD_BIST_MODE_dscd_lbs_bist_mode_0_shift                          (2)
#define  DSCD_DSCD_BIST_MODE_dscd_rc_fifo_bist_mode_shift                        (1)
#define  DSCD_DSCD_BIST_MODE_dscd_in_async_bist_mode_shift                       (0)
#define  DSCD_DSCD_BIST_MODE_dscd_out_bufs_bist_mode_1_mask                      (0x00000020)
#define  DSCD_DSCD_BIST_MODE_dscd_out_bufs_bist_mode_0_mask                      (0x00000010)
#define  DSCD_DSCD_BIST_MODE_dscd_lbs_bist_mode_1_mask                           (0x00000008)
#define  DSCD_DSCD_BIST_MODE_dscd_lbs_bist_mode_0_mask                           (0x00000004)
#define  DSCD_DSCD_BIST_MODE_dscd_rc_fifo_bist_mode_mask                         (0x00000002)
#define  DSCD_DSCD_BIST_MODE_dscd_in_async_bist_mode_mask                        (0x00000001)
#define  DSCD_DSCD_BIST_MODE_dscd_out_bufs_bist_mode_1(data)                     (0x00000020&((data)<<5))
#define  DSCD_DSCD_BIST_MODE_dscd_out_bufs_bist_mode_0(data)                     (0x00000010&((data)<<4))
#define  DSCD_DSCD_BIST_MODE_dscd_lbs_bist_mode_1(data)                          (0x00000008&((data)<<3))
#define  DSCD_DSCD_BIST_MODE_dscd_lbs_bist_mode_0(data)                          (0x00000004&((data)<<2))
#define  DSCD_DSCD_BIST_MODE_dscd_rc_fifo_bist_mode(data)                        (0x00000002&((data)<<1))
#define  DSCD_DSCD_BIST_MODE_dscd_in_async_bist_mode(data)                       (0x00000001&(data))
#define  DSCD_DSCD_BIST_MODE_get_dscd_out_bufs_bist_mode_1(data)                 ((0x00000020&(data))>>5)
#define  DSCD_DSCD_BIST_MODE_get_dscd_out_bufs_bist_mode_0(data)                 ((0x00000010&(data))>>4)
#define  DSCD_DSCD_BIST_MODE_get_dscd_lbs_bist_mode_1(data)                      ((0x00000008&(data))>>3)
#define  DSCD_DSCD_BIST_MODE_get_dscd_lbs_bist_mode_0(data)                      ((0x00000004&(data))>>2)
#define  DSCD_DSCD_BIST_MODE_get_dscd_rc_fifo_bist_mode(data)                    ((0x00000002&(data))>>1)
#define  DSCD_DSCD_BIST_MODE_get_dscd_in_async_bist_mode(data)                   (0x00000001&(data))

#define  DSCD_DSCD_BIST_DONE                                                    0x180BBAD0
#define  DSCD_DSCD_BIST_DONE_reg_addr                                            "0xB80BBAD0"
#define  DSCD_DSCD_BIST_DONE_reg                                                 0xB80BBAD0
#define  DSCD_DSCD_BIST_DONE_inst_addr                                           "0x008B"
#define  set_DSCD_DSCD_BIST_DONE_reg(data)                                       (*((volatile unsigned int*)DSCD_DSCD_BIST_DONE_reg)=data)
#define  get_DSCD_DSCD_BIST_DONE_reg                                             (*((volatile unsigned int*)DSCD_DSCD_BIST_DONE_reg))
#define  DSCD_DSCD_BIST_DONE_dscd_out_bufs_bist_done_1_shift                     (5)
#define  DSCD_DSCD_BIST_DONE_dscd_out_bufs_bist_done_0_shift                     (4)
#define  DSCD_DSCD_BIST_DONE_dscd_lbs_bist_done_1_shift                          (3)
#define  DSCD_DSCD_BIST_DONE_dscd_lbs_bist_done_0_shift                          (2)
#define  DSCD_DSCD_BIST_DONE_dscd_rc_fifo_bist_done_shift                        (1)
#define  DSCD_DSCD_BIST_DONE_dscd_in_async_bist_done_shift                       (0)
#define  DSCD_DSCD_BIST_DONE_dscd_out_bufs_bist_done_1_mask                      (0x00000020)
#define  DSCD_DSCD_BIST_DONE_dscd_out_bufs_bist_done_0_mask                      (0x00000010)
#define  DSCD_DSCD_BIST_DONE_dscd_lbs_bist_done_1_mask                           (0x00000008)
#define  DSCD_DSCD_BIST_DONE_dscd_lbs_bist_done_0_mask                           (0x00000004)
#define  DSCD_DSCD_BIST_DONE_dscd_rc_fifo_bist_done_mask                         (0x00000002)
#define  DSCD_DSCD_BIST_DONE_dscd_in_async_bist_done_mask                        (0x00000001)
#define  DSCD_DSCD_BIST_DONE_dscd_out_bufs_bist_done_1(data)                     (0x00000020&((data)<<5))
#define  DSCD_DSCD_BIST_DONE_dscd_out_bufs_bist_done_0(data)                     (0x00000010&((data)<<4))
#define  DSCD_DSCD_BIST_DONE_dscd_lbs_bist_done_1(data)                          (0x00000008&((data)<<3))
#define  DSCD_DSCD_BIST_DONE_dscd_lbs_bist_done_0(data)                          (0x00000004&((data)<<2))
#define  DSCD_DSCD_BIST_DONE_dscd_rc_fifo_bist_done(data)                        (0x00000002&((data)<<1))
#define  DSCD_DSCD_BIST_DONE_dscd_in_async_bist_done(data)                       (0x00000001&(data))
#define  DSCD_DSCD_BIST_DONE_get_dscd_out_bufs_bist_done_1(data)                 ((0x00000020&(data))>>5)
#define  DSCD_DSCD_BIST_DONE_get_dscd_out_bufs_bist_done_0(data)                 ((0x00000010&(data))>>4)
#define  DSCD_DSCD_BIST_DONE_get_dscd_lbs_bist_done_1(data)                      ((0x00000008&(data))>>3)
#define  DSCD_DSCD_BIST_DONE_get_dscd_lbs_bist_done_0(data)                      ((0x00000004&(data))>>2)
#define  DSCD_DSCD_BIST_DONE_get_dscd_rc_fifo_bist_done(data)                    ((0x00000002&(data))>>1)
#define  DSCD_DSCD_BIST_DONE_get_dscd_in_async_bist_done(data)                   (0x00000001&(data))

#define  DSCD_DSCD_BIST_FAIL_GROUP                                              0x180BBAD4
#define  DSCD_DSCD_BIST_FAIL_GROUP_reg_addr                                      "0xB80BBAD4"
#define  DSCD_DSCD_BIST_FAIL_GROUP_reg                                           0xB80BBAD4
#define  DSCD_DSCD_BIST_FAIL_GROUP_inst_addr                                     "0x008C"
#define  set_DSCD_DSCD_BIST_FAIL_GROUP_reg(data)                                 (*((volatile unsigned int*)DSCD_DSCD_BIST_FAIL_GROUP_reg)=data)
#define  get_DSCD_DSCD_BIST_FAIL_GROUP_reg                                       (*((volatile unsigned int*)DSCD_DSCD_BIST_FAIL_GROUP_reg))
#define  DSCD_DSCD_BIST_FAIL_GROUP_dscd_out_bufs_bist_fail_group_1_shift         (5)
#define  DSCD_DSCD_BIST_FAIL_GROUP_dscd_out_bufs_bist_fail_group_0_shift         (4)
#define  DSCD_DSCD_BIST_FAIL_GROUP_dscd_lbs_bist_fail_group_1_shift              (3)
#define  DSCD_DSCD_BIST_FAIL_GROUP_dscd_lbs_bist_fail_group_0_shift              (2)
#define  DSCD_DSCD_BIST_FAIL_GROUP_dscd_rc_fifo_bist_fail_group_shift            (1)
#define  DSCD_DSCD_BIST_FAIL_GROUP_dscd_in_async_bist_fail_group_shift           (0)
#define  DSCD_DSCD_BIST_FAIL_GROUP_dscd_out_bufs_bist_fail_group_1_mask          (0x00000020)
#define  DSCD_DSCD_BIST_FAIL_GROUP_dscd_out_bufs_bist_fail_group_0_mask          (0x00000010)
#define  DSCD_DSCD_BIST_FAIL_GROUP_dscd_lbs_bist_fail_group_1_mask               (0x00000008)
#define  DSCD_DSCD_BIST_FAIL_GROUP_dscd_lbs_bist_fail_group_0_mask               (0x00000004)
#define  DSCD_DSCD_BIST_FAIL_GROUP_dscd_rc_fifo_bist_fail_group_mask             (0x00000002)
#define  DSCD_DSCD_BIST_FAIL_GROUP_dscd_in_async_bist_fail_group_mask            (0x00000001)
#define  DSCD_DSCD_BIST_FAIL_GROUP_dscd_out_bufs_bist_fail_group_1(data)         (0x00000020&((data)<<5))
#define  DSCD_DSCD_BIST_FAIL_GROUP_dscd_out_bufs_bist_fail_group_0(data)         (0x00000010&((data)<<4))
#define  DSCD_DSCD_BIST_FAIL_GROUP_dscd_lbs_bist_fail_group_1(data)              (0x00000008&((data)<<3))
#define  DSCD_DSCD_BIST_FAIL_GROUP_dscd_lbs_bist_fail_group_0(data)              (0x00000004&((data)<<2))
#define  DSCD_DSCD_BIST_FAIL_GROUP_dscd_rc_fifo_bist_fail_group(data)            (0x00000002&((data)<<1))
#define  DSCD_DSCD_BIST_FAIL_GROUP_dscd_in_async_bist_fail_group(data)           (0x00000001&(data))
#define  DSCD_DSCD_BIST_FAIL_GROUP_get_dscd_out_bufs_bist_fail_group_1(data)     ((0x00000020&(data))>>5)
#define  DSCD_DSCD_BIST_FAIL_GROUP_get_dscd_out_bufs_bist_fail_group_0(data)     ((0x00000010&(data))>>4)
#define  DSCD_DSCD_BIST_FAIL_GROUP_get_dscd_lbs_bist_fail_group_1(data)          ((0x00000008&(data))>>3)
#define  DSCD_DSCD_BIST_FAIL_GROUP_get_dscd_lbs_bist_fail_group_0(data)          ((0x00000004&(data))>>2)
#define  DSCD_DSCD_BIST_FAIL_GROUP_get_dscd_rc_fifo_bist_fail_group(data)        ((0x00000002&(data))>>1)
#define  DSCD_DSCD_BIST_FAIL_GROUP_get_dscd_in_async_bist_fail_group(data)       (0x00000001&(data))

#define  DSCD_DSCD_BIST_FAIL                                                    0x180BBAD8
#define  DSCD_DSCD_BIST_FAIL_reg_addr                                            "0xB80BBAD8"
#define  DSCD_DSCD_BIST_FAIL_reg                                                 0xB80BBAD8
#define  DSCD_DSCD_BIST_FAIL_inst_addr                                           "0x008D"
#define  set_DSCD_DSCD_BIST_FAIL_reg(data)                                       (*((volatile unsigned int*)DSCD_DSCD_BIST_FAIL_reg)=data)
#define  get_DSCD_DSCD_BIST_FAIL_reg                                             (*((volatile unsigned int*)DSCD_DSCD_BIST_FAIL_reg))
#define  DSCD_DSCD_BIST_FAIL_dscd_out_bufs_bist_fail_1_1_shift                   (19)
#define  DSCD_DSCD_BIST_FAIL_dscd_out_bufs_bist_fail_0_1_shift                   (18)
#define  DSCD_DSCD_BIST_FAIL_dscd_out_bufs_bist_fail_1_0_shift                   (17)
#define  DSCD_DSCD_BIST_FAIL_dscd_out_bufs_bist_fail_0_0_shift                   (16)
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_5_1_shift                        (15)
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_4_1_shift                        (14)
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_3_1_shift                        (13)
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_2_1_shift                        (12)
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_1_1_shift                        (11)
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_0_1_shift                        (10)
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_5_0_shift                        (9)
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_4_0_shift                        (8)
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_3_0_shift                        (7)
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_2_0_shift                        (6)
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_1_0_shift                        (5)
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_0_0_shift                        (4)
#define  DSCD_DSCD_BIST_FAIL_dscd_rc_fifo_bist_fail_1_shift                      (3)
#define  DSCD_DSCD_BIST_FAIL_dscd_rc_fifo_bist_fail_0_shift                      (2)
#define  DSCD_DSCD_BIST_FAIL_dscd_in_async_bist_fail_1_shift                     (1)
#define  DSCD_DSCD_BIST_FAIL_dscd_in_async_bist_fail_0_shift                     (0)
#define  DSCD_DSCD_BIST_FAIL_dscd_out_bufs_bist_fail_1_1_mask                    (0x00080000)
#define  DSCD_DSCD_BIST_FAIL_dscd_out_bufs_bist_fail_0_1_mask                    (0x00040000)
#define  DSCD_DSCD_BIST_FAIL_dscd_out_bufs_bist_fail_1_0_mask                    (0x00020000)
#define  DSCD_DSCD_BIST_FAIL_dscd_out_bufs_bist_fail_0_0_mask                    (0x00010000)
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_5_1_mask                         (0x00008000)
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_4_1_mask                         (0x00004000)
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_3_1_mask                         (0x00002000)
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_2_1_mask                         (0x00001000)
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_1_1_mask                         (0x00000800)
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_0_1_mask                         (0x00000400)
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_5_0_mask                         (0x00000200)
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_4_0_mask                         (0x00000100)
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_3_0_mask                         (0x00000080)
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_2_0_mask                         (0x00000040)
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_1_0_mask                         (0x00000020)
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_0_0_mask                         (0x00000010)
#define  DSCD_DSCD_BIST_FAIL_dscd_rc_fifo_bist_fail_1_mask                       (0x00000008)
#define  DSCD_DSCD_BIST_FAIL_dscd_rc_fifo_bist_fail_0_mask                       (0x00000004)
#define  DSCD_DSCD_BIST_FAIL_dscd_in_async_bist_fail_1_mask                      (0x00000002)
#define  DSCD_DSCD_BIST_FAIL_dscd_in_async_bist_fail_0_mask                      (0x00000001)
#define  DSCD_DSCD_BIST_FAIL_dscd_out_bufs_bist_fail_1_1(data)                   (0x00080000&((data)<<19))
#define  DSCD_DSCD_BIST_FAIL_dscd_out_bufs_bist_fail_0_1(data)                   (0x00040000&((data)<<18))
#define  DSCD_DSCD_BIST_FAIL_dscd_out_bufs_bist_fail_1_0(data)                   (0x00020000&((data)<<17))
#define  DSCD_DSCD_BIST_FAIL_dscd_out_bufs_bist_fail_0_0(data)                   (0x00010000&((data)<<16))
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_5_1(data)                        (0x00008000&((data)<<15))
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_4_1(data)                        (0x00004000&((data)<<14))
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_3_1(data)                        (0x00002000&((data)<<13))
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_2_1(data)                        (0x00001000&((data)<<12))
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_1_1(data)                        (0x00000800&((data)<<11))
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_0_1(data)                        (0x00000400&((data)<<10))
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_5_0(data)                        (0x00000200&((data)<<9))
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_4_0(data)                        (0x00000100&((data)<<8))
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_3_0(data)                        (0x00000080&((data)<<7))
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_2_0(data)                        (0x00000040&((data)<<6))
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_1_0(data)                        (0x00000020&((data)<<5))
#define  DSCD_DSCD_BIST_FAIL_dscd_lbs_bist_fail_0_0(data)                        (0x00000010&((data)<<4))
#define  DSCD_DSCD_BIST_FAIL_dscd_rc_fifo_bist_fail_1(data)                      (0x00000008&((data)<<3))
#define  DSCD_DSCD_BIST_FAIL_dscd_rc_fifo_bist_fail_0(data)                      (0x00000004&((data)<<2))
#define  DSCD_DSCD_BIST_FAIL_dscd_in_async_bist_fail_1(data)                     (0x00000002&((data)<<1))
#define  DSCD_DSCD_BIST_FAIL_dscd_in_async_bist_fail_0(data)                     (0x00000001&(data))
#define  DSCD_DSCD_BIST_FAIL_get_dscd_out_bufs_bist_fail_1_1(data)               ((0x00080000&(data))>>19)
#define  DSCD_DSCD_BIST_FAIL_get_dscd_out_bufs_bist_fail_0_1(data)               ((0x00040000&(data))>>18)
#define  DSCD_DSCD_BIST_FAIL_get_dscd_out_bufs_bist_fail_1_0(data)               ((0x00020000&(data))>>17)
#define  DSCD_DSCD_BIST_FAIL_get_dscd_out_bufs_bist_fail_0_0(data)               ((0x00010000&(data))>>16)
#define  DSCD_DSCD_BIST_FAIL_get_dscd_lbs_bist_fail_5_1(data)                    ((0x00008000&(data))>>15)
#define  DSCD_DSCD_BIST_FAIL_get_dscd_lbs_bist_fail_4_1(data)                    ((0x00004000&(data))>>14)
#define  DSCD_DSCD_BIST_FAIL_get_dscd_lbs_bist_fail_3_1(data)                    ((0x00002000&(data))>>13)
#define  DSCD_DSCD_BIST_FAIL_get_dscd_lbs_bist_fail_2_1(data)                    ((0x00001000&(data))>>12)
#define  DSCD_DSCD_BIST_FAIL_get_dscd_lbs_bist_fail_1_1(data)                    ((0x00000800&(data))>>11)
#define  DSCD_DSCD_BIST_FAIL_get_dscd_lbs_bist_fail_0_1(data)                    ((0x00000400&(data))>>10)
#define  DSCD_DSCD_BIST_FAIL_get_dscd_lbs_bist_fail_5_0(data)                    ((0x00000200&(data))>>9)
#define  DSCD_DSCD_BIST_FAIL_get_dscd_lbs_bist_fail_4_0(data)                    ((0x00000100&(data))>>8)
#define  DSCD_DSCD_BIST_FAIL_get_dscd_lbs_bist_fail_3_0(data)                    ((0x00000080&(data))>>7)
#define  DSCD_DSCD_BIST_FAIL_get_dscd_lbs_bist_fail_2_0(data)                    ((0x00000040&(data))>>6)
#define  DSCD_DSCD_BIST_FAIL_get_dscd_lbs_bist_fail_1_0(data)                    ((0x00000020&(data))>>5)
#define  DSCD_DSCD_BIST_FAIL_get_dscd_lbs_bist_fail_0_0(data)                    ((0x00000010&(data))>>4)
#define  DSCD_DSCD_BIST_FAIL_get_dscd_rc_fifo_bist_fail_1(data)                  ((0x00000008&(data))>>3)
#define  DSCD_DSCD_BIST_FAIL_get_dscd_rc_fifo_bist_fail_0(data)                  ((0x00000004&(data))>>2)
#define  DSCD_DSCD_BIST_FAIL_get_dscd_in_async_bist_fail_1(data)                 ((0x00000002&(data))>>1)
#define  DSCD_DSCD_BIST_FAIL_get_dscd_in_async_bist_fail_0(data)                 (0x00000001&(data))

#define  DSCD_DSCD_DRF_BIST_MODE                                                0x180BBADC
#define  DSCD_DSCD_DRF_BIST_MODE_reg_addr                                        "0xB80BBADC"
#define  DSCD_DSCD_DRF_BIST_MODE_reg                                             0xB80BBADC
#define  DSCD_DSCD_DRF_BIST_MODE_inst_addr                                       "0x008E"
#define  set_DSCD_DSCD_DRF_BIST_MODE_reg(data)                                   (*((volatile unsigned int*)DSCD_DSCD_DRF_BIST_MODE_reg)=data)
#define  get_DSCD_DSCD_DRF_BIST_MODE_reg                                         (*((volatile unsigned int*)DSCD_DSCD_DRF_BIST_MODE_reg))
#define  DSCD_DSCD_DRF_BIST_MODE_dscd_out_bufs_drf_bist_mode_1_shift             (5)
#define  DSCD_DSCD_DRF_BIST_MODE_dscd_out_bufs_drf_bist_mode_0_shift             (4)
#define  DSCD_DSCD_DRF_BIST_MODE_dscd_lbs_drf_bist_mode_1_shift                  (3)
#define  DSCD_DSCD_DRF_BIST_MODE_dscd_lbs_drf_bist_mode_0_shift                  (2)
#define  DSCD_DSCD_DRF_BIST_MODE_dscd_rc_fifo_drf_bist_mode_shift                (1)
#define  DSCD_DSCD_DRF_BIST_MODE_dscd_in_async_drf_bist_mode_shift               (0)
#define  DSCD_DSCD_DRF_BIST_MODE_dscd_out_bufs_drf_bist_mode_1_mask              (0x00000020)
#define  DSCD_DSCD_DRF_BIST_MODE_dscd_out_bufs_drf_bist_mode_0_mask              (0x00000010)
#define  DSCD_DSCD_DRF_BIST_MODE_dscd_lbs_drf_bist_mode_1_mask                   (0x00000008)
#define  DSCD_DSCD_DRF_BIST_MODE_dscd_lbs_drf_bist_mode_0_mask                   (0x00000004)
#define  DSCD_DSCD_DRF_BIST_MODE_dscd_rc_fifo_drf_bist_mode_mask                 (0x00000002)
#define  DSCD_DSCD_DRF_BIST_MODE_dscd_in_async_drf_bist_mode_mask                (0x00000001)
#define  DSCD_DSCD_DRF_BIST_MODE_dscd_out_bufs_drf_bist_mode_1(data)             (0x00000020&((data)<<5))
#define  DSCD_DSCD_DRF_BIST_MODE_dscd_out_bufs_drf_bist_mode_0(data)             (0x00000010&((data)<<4))
#define  DSCD_DSCD_DRF_BIST_MODE_dscd_lbs_drf_bist_mode_1(data)                  (0x00000008&((data)<<3))
#define  DSCD_DSCD_DRF_BIST_MODE_dscd_lbs_drf_bist_mode_0(data)                  (0x00000004&((data)<<2))
#define  DSCD_DSCD_DRF_BIST_MODE_dscd_rc_fifo_drf_bist_mode(data)                (0x00000002&((data)<<1))
#define  DSCD_DSCD_DRF_BIST_MODE_dscd_in_async_drf_bist_mode(data)               (0x00000001&(data))
#define  DSCD_DSCD_DRF_BIST_MODE_get_dscd_out_bufs_drf_bist_mode_1(data)         ((0x00000020&(data))>>5)
#define  DSCD_DSCD_DRF_BIST_MODE_get_dscd_out_bufs_drf_bist_mode_0(data)         ((0x00000010&(data))>>4)
#define  DSCD_DSCD_DRF_BIST_MODE_get_dscd_lbs_drf_bist_mode_1(data)              ((0x00000008&(data))>>3)
#define  DSCD_DSCD_DRF_BIST_MODE_get_dscd_lbs_drf_bist_mode_0(data)              ((0x00000004&(data))>>2)
#define  DSCD_DSCD_DRF_BIST_MODE_get_dscd_rc_fifo_drf_bist_mode(data)            ((0x00000002&(data))>>1)
#define  DSCD_DSCD_DRF_BIST_MODE_get_dscd_in_async_drf_bist_mode(data)           (0x00000001&(data))

#define  DSCD_DSCD_DRF_BIST_RESUME                                              0x180BBAE0
#define  DSCD_DSCD_DRF_BIST_RESUME_reg_addr                                      "0xB80BBAE0"
#define  DSCD_DSCD_DRF_BIST_RESUME_reg                                           0xB80BBAE0
#define  DSCD_DSCD_DRF_BIST_RESUME_inst_addr                                     "0x008F"
#define  set_DSCD_DSCD_DRF_BIST_RESUME_reg(data)                                 (*((volatile unsigned int*)DSCD_DSCD_DRF_BIST_RESUME_reg)=data)
#define  get_DSCD_DSCD_DRF_BIST_RESUME_reg                                       (*((volatile unsigned int*)DSCD_DSCD_DRF_BIST_RESUME_reg))
#define  DSCD_DSCD_DRF_BIST_RESUME_dscd_out_bufs_drf_bist_resume_1_shift         (5)
#define  DSCD_DSCD_DRF_BIST_RESUME_dscd_out_bufs_drf_bist_resume_0_shift         (4)
#define  DSCD_DSCD_DRF_BIST_RESUME_dscd_lbs_drf_bist_resume_1_shift              (3)
#define  DSCD_DSCD_DRF_BIST_RESUME_dscd_lbs_drf_bist_resume_0_shift              (2)
#define  DSCD_DSCD_DRF_BIST_RESUME_dscd_rc_fifo_drf_bist_resume_shift            (1)
#define  DSCD_DSCD_DRF_BIST_RESUME_dscd_in_async_drf_bist_resume_shift           (0)
#define  DSCD_DSCD_DRF_BIST_RESUME_dscd_out_bufs_drf_bist_resume_1_mask          (0x00000020)
#define  DSCD_DSCD_DRF_BIST_RESUME_dscd_out_bufs_drf_bist_resume_0_mask          (0x00000010)
#define  DSCD_DSCD_DRF_BIST_RESUME_dscd_lbs_drf_bist_resume_1_mask               (0x00000008)
#define  DSCD_DSCD_DRF_BIST_RESUME_dscd_lbs_drf_bist_resume_0_mask               (0x00000004)
#define  DSCD_DSCD_DRF_BIST_RESUME_dscd_rc_fifo_drf_bist_resume_mask             (0x00000002)
#define  DSCD_DSCD_DRF_BIST_RESUME_dscd_in_async_drf_bist_resume_mask            (0x00000001)
#define  DSCD_DSCD_DRF_BIST_RESUME_dscd_out_bufs_drf_bist_resume_1(data)         (0x00000020&((data)<<5))
#define  DSCD_DSCD_DRF_BIST_RESUME_dscd_out_bufs_drf_bist_resume_0(data)         (0x00000010&((data)<<4))
#define  DSCD_DSCD_DRF_BIST_RESUME_dscd_lbs_drf_bist_resume_1(data)              (0x00000008&((data)<<3))
#define  DSCD_DSCD_DRF_BIST_RESUME_dscd_lbs_drf_bist_resume_0(data)              (0x00000004&((data)<<2))
#define  DSCD_DSCD_DRF_BIST_RESUME_dscd_rc_fifo_drf_bist_resume(data)            (0x00000002&((data)<<1))
#define  DSCD_DSCD_DRF_BIST_RESUME_dscd_in_async_drf_bist_resume(data)           (0x00000001&(data))
#define  DSCD_DSCD_DRF_BIST_RESUME_get_dscd_out_bufs_drf_bist_resume_1(data)     ((0x00000020&(data))>>5)
#define  DSCD_DSCD_DRF_BIST_RESUME_get_dscd_out_bufs_drf_bist_resume_0(data)     ((0x00000010&(data))>>4)
#define  DSCD_DSCD_DRF_BIST_RESUME_get_dscd_lbs_drf_bist_resume_1(data)          ((0x00000008&(data))>>3)
#define  DSCD_DSCD_DRF_BIST_RESUME_get_dscd_lbs_drf_bist_resume_0(data)          ((0x00000004&(data))>>2)
#define  DSCD_DSCD_DRF_BIST_RESUME_get_dscd_rc_fifo_drf_bist_resume(data)        ((0x00000002&(data))>>1)
#define  DSCD_DSCD_DRF_BIST_RESUME_get_dscd_in_async_drf_bist_resume(data)       (0x00000001&(data))

#define  DSCD_DSCD_DRF_BIST_DONE                                                0x180BBAE4
#define  DSCD_DSCD_DRF_BIST_DONE_reg_addr                                        "0xB80BBAE4"
#define  DSCD_DSCD_DRF_BIST_DONE_reg                                             0xB80BBAE4
#define  DSCD_DSCD_DRF_BIST_DONE_inst_addr                                       "0x0090"
#define  set_DSCD_DSCD_DRF_BIST_DONE_reg(data)                                   (*((volatile unsigned int*)DSCD_DSCD_DRF_BIST_DONE_reg)=data)
#define  get_DSCD_DSCD_DRF_BIST_DONE_reg                                         (*((volatile unsigned int*)DSCD_DSCD_DRF_BIST_DONE_reg))
#define  DSCD_DSCD_DRF_BIST_DONE_dscd_out_bufs_drf_bist_done_1_shift             (5)
#define  DSCD_DSCD_DRF_BIST_DONE_dscd_out_bufs_drf_bist_done_0_shift             (4)
#define  DSCD_DSCD_DRF_BIST_DONE_dscd_lbs_drf_bist_done_1_shift                  (3)
#define  DSCD_DSCD_DRF_BIST_DONE_dscd_lbs_drf_bist_done_0_shift                  (2)
#define  DSCD_DSCD_DRF_BIST_DONE_dscd_rc_fifo_drf_bist_done_shift                (1)
#define  DSCD_DSCD_DRF_BIST_DONE_dscd_in_async_drf_bist_done_shift               (0)
#define  DSCD_DSCD_DRF_BIST_DONE_dscd_out_bufs_drf_bist_done_1_mask              (0x00000020)
#define  DSCD_DSCD_DRF_BIST_DONE_dscd_out_bufs_drf_bist_done_0_mask              (0x00000010)
#define  DSCD_DSCD_DRF_BIST_DONE_dscd_lbs_drf_bist_done_1_mask                   (0x00000008)
#define  DSCD_DSCD_DRF_BIST_DONE_dscd_lbs_drf_bist_done_0_mask                   (0x00000004)
#define  DSCD_DSCD_DRF_BIST_DONE_dscd_rc_fifo_drf_bist_done_mask                 (0x00000002)
#define  DSCD_DSCD_DRF_BIST_DONE_dscd_in_async_drf_bist_done_mask                (0x00000001)
#define  DSCD_DSCD_DRF_BIST_DONE_dscd_out_bufs_drf_bist_done_1(data)             (0x00000020&((data)<<5))
#define  DSCD_DSCD_DRF_BIST_DONE_dscd_out_bufs_drf_bist_done_0(data)             (0x00000010&((data)<<4))
#define  DSCD_DSCD_DRF_BIST_DONE_dscd_lbs_drf_bist_done_1(data)                  (0x00000008&((data)<<3))
#define  DSCD_DSCD_DRF_BIST_DONE_dscd_lbs_drf_bist_done_0(data)                  (0x00000004&((data)<<2))
#define  DSCD_DSCD_DRF_BIST_DONE_dscd_rc_fifo_drf_bist_done(data)                (0x00000002&((data)<<1))
#define  DSCD_DSCD_DRF_BIST_DONE_dscd_in_async_drf_bist_done(data)               (0x00000001&(data))
#define  DSCD_DSCD_DRF_BIST_DONE_get_dscd_out_bufs_drf_bist_done_1(data)         ((0x00000020&(data))>>5)
#define  DSCD_DSCD_DRF_BIST_DONE_get_dscd_out_bufs_drf_bist_done_0(data)         ((0x00000010&(data))>>4)
#define  DSCD_DSCD_DRF_BIST_DONE_get_dscd_lbs_drf_bist_done_1(data)              ((0x00000008&(data))>>3)
#define  DSCD_DSCD_DRF_BIST_DONE_get_dscd_lbs_drf_bist_done_0(data)              ((0x00000004&(data))>>2)
#define  DSCD_DSCD_DRF_BIST_DONE_get_dscd_rc_fifo_drf_bist_done(data)            ((0x00000002&(data))>>1)
#define  DSCD_DSCD_DRF_BIST_DONE_get_dscd_in_async_drf_bist_done(data)           (0x00000001&(data))

#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP                                          0x180BBAE8
#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP_reg_addr                                  "0xB80BBAE8"
#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP_reg                                       0xB80BBAE8
#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP_inst_addr                                 "0x0091"
#define  set_DSCD_DSCD_DRF_BIST_FAIL_GROUP_reg(data)                             (*((volatile unsigned int*)DSCD_DSCD_DRF_BIST_FAIL_GROUP_reg)=data)
#define  get_DSCD_DSCD_DRF_BIST_FAIL_GROUP_reg                                   (*((volatile unsigned int*)DSCD_DSCD_DRF_BIST_FAIL_GROUP_reg))
#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP_dscd_out_bufs_drf_bist_fail_group_1_shift (5)
#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP_dscd_out_bufs_drf_bist_fail_group_0_shift (4)
#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP_dscd_lbs_drf_bist_fail_group_1_shift      (3)
#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP_dscd_lbs_drf_bist_fail_group_0_shift      (2)
#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP_dscd_rc_fifo_drf_bist_fail_group_shift    (1)
#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP_dscd_in_async_drf_bist_fail_group_shift   (0)
#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP_dscd_out_bufs_drf_bist_fail_group_1_mask  (0x00000020)
#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP_dscd_out_bufs_drf_bist_fail_group_0_mask  (0x00000010)
#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP_dscd_lbs_drf_bist_fail_group_1_mask       (0x00000008)
#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP_dscd_lbs_drf_bist_fail_group_0_mask       (0x00000004)
#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP_dscd_rc_fifo_drf_bist_fail_group_mask     (0x00000002)
#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP_dscd_in_async_drf_bist_fail_group_mask    (0x00000001)
#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP_dscd_out_bufs_drf_bist_fail_group_1(data) (0x00000020&((data)<<5))
#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP_dscd_out_bufs_drf_bist_fail_group_0(data) (0x00000010&((data)<<4))
#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP_dscd_lbs_drf_bist_fail_group_1(data)      (0x00000008&((data)<<3))
#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP_dscd_lbs_drf_bist_fail_group_0(data)      (0x00000004&((data)<<2))
#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP_dscd_rc_fifo_drf_bist_fail_group(data)    (0x00000002&((data)<<1))
#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP_dscd_in_async_drf_bist_fail_group(data)   (0x00000001&(data))
#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP_get_dscd_out_bufs_drf_bist_fail_group_1(data) ((0x00000020&(data))>>5)
#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP_get_dscd_out_bufs_drf_bist_fail_group_0(data) ((0x00000010&(data))>>4)
#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP_get_dscd_lbs_drf_bist_fail_group_1(data)  ((0x00000008&(data))>>3)
#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP_get_dscd_lbs_drf_bist_fail_group_0(data)  ((0x00000004&(data))>>2)
#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP_get_dscd_rc_fifo_drf_bist_fail_group(data) ((0x00000002&(data))>>1)
#define  DSCD_DSCD_DRF_BIST_FAIL_GROUP_get_dscd_in_async_drf_bist_fail_group(data) (0x00000001&(data))

#define  DSCD_DSCD_DRF_BIST_FAIL                                                0x180BBAEC
#define  DSCD_DSCD_DRF_BIST_FAIL_reg_addr                                        "0xB80BBAEC"
#define  DSCD_DSCD_DRF_BIST_FAIL_reg                                             0xB80BBAEC
#define  DSCD_DSCD_DRF_BIST_FAIL_inst_addr                                       "0x0092"
#define  set_DSCD_DSCD_DRF_BIST_FAIL_reg(data)                                   (*((volatile unsigned int*)DSCD_DSCD_DRF_BIST_FAIL_reg)=data)
#define  get_DSCD_DSCD_DRF_BIST_FAIL_reg                                         (*((volatile unsigned int*)DSCD_DSCD_DRF_BIST_FAIL_reg))
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_out_bufs_drf_bist_fail_1_1_shift           (19)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_out_bufs_drf_bist_fail_0_1_shift           (18)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_out_bufs_drf_bist_fail_1_0_shift           (17)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_out_bufs_drf_bist_fail_0_0_shift           (16)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_5_1_shift                (15)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_4_1_shift                (14)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_3_1_shift                (13)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_2_1_shift                (12)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_1_1_shift                (11)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_0_1_shift                (10)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_5_0_shift                (9)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_4_0_shift                (8)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_3_0_shift                (7)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_2_0_shift                (6)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_1_0_shift                (5)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_0_0_shift                (4)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_rc_fifo_drf_bist_fail_1_shift              (3)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_rc_fifo_drf_bist_fail_0_shift              (2)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_in_async_drf_bist_fail_1_shift             (1)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_in_async_drf_bist_fail_0_shift             (0)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_out_bufs_drf_bist_fail_1_1_mask            (0x00080000)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_out_bufs_drf_bist_fail_0_1_mask            (0x00040000)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_out_bufs_drf_bist_fail_1_0_mask            (0x00020000)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_out_bufs_drf_bist_fail_0_0_mask            (0x00010000)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_5_1_mask                 (0x00008000)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_4_1_mask                 (0x00004000)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_3_1_mask                 (0x00002000)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_2_1_mask                 (0x00001000)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_1_1_mask                 (0x00000800)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_0_1_mask                 (0x00000400)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_5_0_mask                 (0x00000200)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_4_0_mask                 (0x00000100)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_3_0_mask                 (0x00000080)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_2_0_mask                 (0x00000040)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_1_0_mask                 (0x00000020)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_0_0_mask                 (0x00000010)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_rc_fifo_drf_bist_fail_1_mask               (0x00000008)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_rc_fifo_drf_bist_fail_0_mask               (0x00000004)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_in_async_drf_bist_fail_1_mask              (0x00000002)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_in_async_drf_bist_fail_0_mask              (0x00000001)
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_out_bufs_drf_bist_fail_1_1(data)           (0x00080000&((data)<<19))
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_out_bufs_drf_bist_fail_0_1(data)           (0x00040000&((data)<<18))
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_out_bufs_drf_bist_fail_1_0(data)           (0x00020000&((data)<<17))
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_out_bufs_drf_bist_fail_0_0(data)           (0x00010000&((data)<<16))
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_5_1(data)                (0x00008000&((data)<<15))
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_4_1(data)                (0x00004000&((data)<<14))
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_3_1(data)                (0x00002000&((data)<<13))
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_2_1(data)                (0x00001000&((data)<<12))
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_1_1(data)                (0x00000800&((data)<<11))
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_0_1(data)                (0x00000400&((data)<<10))
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_5_0(data)                (0x00000200&((data)<<9))
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_4_0(data)                (0x00000100&((data)<<8))
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_3_0(data)                (0x00000080&((data)<<7))
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_2_0(data)                (0x00000040&((data)<<6))
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_1_0(data)                (0x00000020&((data)<<5))
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_lbs_drf_bist_fail_0_0(data)                (0x00000010&((data)<<4))
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_rc_fifo_drf_bist_fail_1(data)              (0x00000008&((data)<<3))
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_rc_fifo_drf_bist_fail_0(data)              (0x00000004&((data)<<2))
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_in_async_drf_bist_fail_1(data)             (0x00000002&((data)<<1))
#define  DSCD_DSCD_DRF_BIST_FAIL_dscd_in_async_drf_bist_fail_0(data)             (0x00000001&(data))
#define  DSCD_DSCD_DRF_BIST_FAIL_get_dscd_out_bufs_drf_bist_fail_1_1(data)       ((0x00080000&(data))>>19)
#define  DSCD_DSCD_DRF_BIST_FAIL_get_dscd_out_bufs_drf_bist_fail_0_1(data)       ((0x00040000&(data))>>18)
#define  DSCD_DSCD_DRF_BIST_FAIL_get_dscd_out_bufs_drf_bist_fail_1_0(data)       ((0x00020000&(data))>>17)
#define  DSCD_DSCD_DRF_BIST_FAIL_get_dscd_out_bufs_drf_bist_fail_0_0(data)       ((0x00010000&(data))>>16)
#define  DSCD_DSCD_DRF_BIST_FAIL_get_dscd_lbs_drf_bist_fail_5_1(data)            ((0x00008000&(data))>>15)
#define  DSCD_DSCD_DRF_BIST_FAIL_get_dscd_lbs_drf_bist_fail_4_1(data)            ((0x00004000&(data))>>14)
#define  DSCD_DSCD_DRF_BIST_FAIL_get_dscd_lbs_drf_bist_fail_3_1(data)            ((0x00002000&(data))>>13)
#define  DSCD_DSCD_DRF_BIST_FAIL_get_dscd_lbs_drf_bist_fail_2_1(data)            ((0x00001000&(data))>>12)
#define  DSCD_DSCD_DRF_BIST_FAIL_get_dscd_lbs_drf_bist_fail_1_1(data)            ((0x00000800&(data))>>11)
#define  DSCD_DSCD_DRF_BIST_FAIL_get_dscd_lbs_drf_bist_fail_0_1(data)            ((0x00000400&(data))>>10)
#define  DSCD_DSCD_DRF_BIST_FAIL_get_dscd_lbs_drf_bist_fail_5_0(data)            ((0x00000200&(data))>>9)
#define  DSCD_DSCD_DRF_BIST_FAIL_get_dscd_lbs_drf_bist_fail_4_0(data)            ((0x00000100&(data))>>8)
#define  DSCD_DSCD_DRF_BIST_FAIL_get_dscd_lbs_drf_bist_fail_3_0(data)            ((0x00000080&(data))>>7)
#define  DSCD_DSCD_DRF_BIST_FAIL_get_dscd_lbs_drf_bist_fail_2_0(data)            ((0x00000040&(data))>>6)
#define  DSCD_DSCD_DRF_BIST_FAIL_get_dscd_lbs_drf_bist_fail_1_0(data)            ((0x00000020&(data))>>5)
#define  DSCD_DSCD_DRF_BIST_FAIL_get_dscd_lbs_drf_bist_fail_0_0(data)            ((0x00000010&(data))>>4)
#define  DSCD_DSCD_DRF_BIST_FAIL_get_dscd_rc_fifo_drf_bist_fail_1(data)          ((0x00000008&(data))>>3)
#define  DSCD_DSCD_DRF_BIST_FAIL_get_dscd_rc_fifo_drf_bist_fail_0(data)          ((0x00000004&(data))>>2)
#define  DSCD_DSCD_DRF_BIST_FAIL_get_dscd_in_async_drf_bist_fail_1(data)         ((0x00000002&(data))>>1)
#define  DSCD_DSCD_DRF_BIST_FAIL_get_dscd_in_async_drf_bist_fail_0(data)         (0x00000001&(data))

#define  DSCD_DSCD_DRF_BIST_PAUSE                                               0x180BBAF0
#define  DSCD_DSCD_DRF_BIST_PAUSE_reg_addr                                       "0xB80BBAF0"
#define  DSCD_DSCD_DRF_BIST_PAUSE_reg                                            0xB80BBAF0
#define  DSCD_DSCD_DRF_BIST_PAUSE_inst_addr                                      "0x0093"
#define  set_DSCD_DSCD_DRF_BIST_PAUSE_reg(data)                                  (*((volatile unsigned int*)DSCD_DSCD_DRF_BIST_PAUSE_reg)=data)
#define  get_DSCD_DSCD_DRF_BIST_PAUSE_reg                                        (*((volatile unsigned int*)DSCD_DSCD_DRF_BIST_PAUSE_reg))
#define  DSCD_DSCD_DRF_BIST_PAUSE_dscd_out_bufs_drf_bist_pause_1_shift           (5)
#define  DSCD_DSCD_DRF_BIST_PAUSE_dscd_out_bufs_drf_bist_pause_0_shift           (4)
#define  DSCD_DSCD_DRF_BIST_PAUSE_dscd_lbs_drf_bist_pause_1_shift                (3)
#define  DSCD_DSCD_DRF_BIST_PAUSE_dscd_lbs_drf_bist_pause_0_shift                (2)
#define  DSCD_DSCD_DRF_BIST_PAUSE_dscd_rc_fifo_drf_bist_pause_shift              (1)
#define  DSCD_DSCD_DRF_BIST_PAUSE_dscd_in_async_drf_bist_pause_shift             (0)
#define  DSCD_DSCD_DRF_BIST_PAUSE_dscd_out_bufs_drf_bist_pause_1_mask            (0x00000020)
#define  DSCD_DSCD_DRF_BIST_PAUSE_dscd_out_bufs_drf_bist_pause_0_mask            (0x00000010)
#define  DSCD_DSCD_DRF_BIST_PAUSE_dscd_lbs_drf_bist_pause_1_mask                 (0x00000008)
#define  DSCD_DSCD_DRF_BIST_PAUSE_dscd_lbs_drf_bist_pause_0_mask                 (0x00000004)
#define  DSCD_DSCD_DRF_BIST_PAUSE_dscd_rc_fifo_drf_bist_pause_mask               (0x00000002)
#define  DSCD_DSCD_DRF_BIST_PAUSE_dscd_in_async_drf_bist_pause_mask              (0x00000001)
#define  DSCD_DSCD_DRF_BIST_PAUSE_dscd_out_bufs_drf_bist_pause_1(data)           (0x00000020&((data)<<5))
#define  DSCD_DSCD_DRF_BIST_PAUSE_dscd_out_bufs_drf_bist_pause_0(data)           (0x00000010&((data)<<4))
#define  DSCD_DSCD_DRF_BIST_PAUSE_dscd_lbs_drf_bist_pause_1(data)                (0x00000008&((data)<<3))
#define  DSCD_DSCD_DRF_BIST_PAUSE_dscd_lbs_drf_bist_pause_0(data)                (0x00000004&((data)<<2))
#define  DSCD_DSCD_DRF_BIST_PAUSE_dscd_rc_fifo_drf_bist_pause(data)              (0x00000002&((data)<<1))
#define  DSCD_DSCD_DRF_BIST_PAUSE_dscd_in_async_drf_bist_pause(data)             (0x00000001&(data))
#define  DSCD_DSCD_DRF_BIST_PAUSE_get_dscd_out_bufs_drf_bist_pause_1(data)       ((0x00000020&(data))>>5)
#define  DSCD_DSCD_DRF_BIST_PAUSE_get_dscd_out_bufs_drf_bist_pause_0(data)       ((0x00000010&(data))>>4)
#define  DSCD_DSCD_DRF_BIST_PAUSE_get_dscd_lbs_drf_bist_pause_1(data)            ((0x00000008&(data))>>3)
#define  DSCD_DSCD_DRF_BIST_PAUSE_get_dscd_lbs_drf_bist_pause_0(data)            ((0x00000004&(data))>>2)
#define  DSCD_DSCD_DRF_BIST_PAUSE_get_dscd_rc_fifo_drf_bist_pause(data)          ((0x00000002&(data))>>1)
#define  DSCD_DSCD_DRF_BIST_PAUSE_get_dscd_in_async_drf_bist_pause(data)         (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======DSCD register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps003:8;
        RBus_UInt32  fw_pps002:8;
        RBus_UInt32  fw_pps001:8;
        RBus_UInt32  fw_pps000:8;
    };
}dscd_pps_dw00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps007:8;
        RBus_UInt32  fw_pps006:8;
        RBus_UInt32  fw_pps005:8;
        RBus_UInt32  fw_pps004:8;
    };
}dscd_pps_dw01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps011:8;
        RBus_UInt32  fw_pps010:8;
        RBus_UInt32  fw_pps009:8;
        RBus_UInt32  fw_pps008:8;
    };
}dscd_pps_dw02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps015:8;
        RBus_UInt32  fw_pps014:8;
        RBus_UInt32  fw_pps013:8;
        RBus_UInt32  fw_pps012:8;
    };
}dscd_pps_dw03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps019:8;
        RBus_UInt32  fw_pps018:8;
        RBus_UInt32  fw_pps017:8;
        RBus_UInt32  fw_pps016:8;
    };
}dscd_pps_dw04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps023:8;
        RBus_UInt32  fw_pps022:8;
        RBus_UInt32  fw_pps021:8;
        RBus_UInt32  fw_pps020:8;
    };
}dscd_pps_dw05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps027:8;
        RBus_UInt32  fw_pps026:8;
        RBus_UInt32  fw_pps025:8;
        RBus_UInt32  fw_pps024:8;
    };
}dscd_pps_dw06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps031:8;
        RBus_UInt32  fw_pps030:8;
        RBus_UInt32  fw_pps029:8;
        RBus_UInt32  fw_pps028:8;
    };
}dscd_pps_dw07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps035:8;
        RBus_UInt32  fw_pps034:8;
        RBus_UInt32  fw_pps033:8;
        RBus_UInt32  fw_pps032:8;
    };
}dscd_pps_dw08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps039:8;
        RBus_UInt32  fw_pps038:8;
        RBus_UInt32  fw_pps037:8;
        RBus_UInt32  fw_pps036:8;
    };
}dscd_pps_dw09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps043:8;
        RBus_UInt32  fw_pps042:8;
        RBus_UInt32  fw_pps041:8;
        RBus_UInt32  fw_pps040:8;
    };
}dscd_pps_dw10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps047:8;
        RBus_UInt32  fw_pps046:8;
        RBus_UInt32  fw_pps045:8;
        RBus_UInt32  fw_pps044:8;
    };
}dscd_pps_dw11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps051:8;
        RBus_UInt32  fw_pps050:8;
        RBus_UInt32  fw_pps049:8;
        RBus_UInt32  fw_pps048:8;
    };
}dscd_pps_dw12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps055:8;
        RBus_UInt32  fw_pps054:8;
        RBus_UInt32  fw_pps053:8;
        RBus_UInt32  fw_pps052:8;
    };
}dscd_pps_dw13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps059:8;
        RBus_UInt32  fw_pps058:8;
        RBus_UInt32  fw_pps057:8;
        RBus_UInt32  fw_pps056:8;
    };
}dscd_pps_dw14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps063:8;
        RBus_UInt32  fw_pps062:8;
        RBus_UInt32  fw_pps061:8;
        RBus_UInt32  fw_pps060:8;
    };
}dscd_pps_dw15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps067:8;
        RBus_UInt32  fw_pps066:8;
        RBus_UInt32  fw_pps065:8;
        RBus_UInt32  fw_pps064:8;
    };
}dscd_pps_dw16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps071:8;
        RBus_UInt32  fw_pps070:8;
        RBus_UInt32  fw_pps069:8;
        RBus_UInt32  fw_pps068:8;
    };
}dscd_pps_dw17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps075:8;
        RBus_UInt32  fw_pps074:8;
        RBus_UInt32  fw_pps073:8;
        RBus_UInt32  fw_pps072:8;
    };
}dscd_pps_dw18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps079:8;
        RBus_UInt32  fw_pps078:8;
        RBus_UInt32  fw_pps077:8;
        RBus_UInt32  fw_pps076:8;
    };
}dscd_pps_dw19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps083:8;
        RBus_UInt32  fw_pps082:8;
        RBus_UInt32  fw_pps081:8;
        RBus_UInt32  fw_pps080:8;
    };
}dscd_pps_dw20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps087:8;
        RBus_UInt32  fw_pps086:8;
        RBus_UInt32  fw_pps085:8;
        RBus_UInt32  fw_pps084:8;
    };
}dscd_pps_dw21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps091:8;
        RBus_UInt32  fw_pps090:8;
        RBus_UInt32  fw_pps089:8;
        RBus_UInt32  fw_pps088:8;
    };
}dscd_pps_dw22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps095:8;
        RBus_UInt32  fw_pps094:8;
        RBus_UInt32  fw_pps093:8;
        RBus_UInt32  fw_pps092:8;
    };
}dscd_pps_dw23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps099:8;
        RBus_UInt32  fw_pps098:8;
        RBus_UInt32  fw_pps097:8;
        RBus_UInt32  fw_pps096:8;
    };
}dscd_pps_dw24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps103:8;
        RBus_UInt32  fw_pps102:8;
        RBus_UInt32  fw_pps101:8;
        RBus_UInt32  fw_pps100:8;
    };
}dscd_pps_dw25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps107:8;
        RBus_UInt32  fw_pps106:8;
        RBus_UInt32  fw_pps105:8;
        RBus_UInt32  fw_pps104:8;
    };
}dscd_pps_dw26_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps111:8;
        RBus_UInt32  fw_pps110:8;
        RBus_UInt32  fw_pps109:8;
        RBus_UInt32  fw_pps108:8;
    };
}dscd_pps_dw27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps115:8;
        RBus_UInt32  fw_pps114:8;
        RBus_UInt32  fw_pps113:8;
        RBus_UInt32  fw_pps112:8;
    };
}dscd_pps_dw28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps119:8;
        RBus_UInt32  fw_pps118:8;
        RBus_UInt32  fw_pps117:8;
        RBus_UInt32  fw_pps116:8;
    };
}dscd_pps_dw29_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps123:8;
        RBus_UInt32  fw_pps122:8;
        RBus_UInt32  fw_pps121:8;
        RBus_UInt32  fw_pps120:8;
    };
}dscd_pps_dw30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps127:8;
        RBus_UInt32  fw_pps126:8;
        RBus_UInt32  fw_pps125:8;
        RBus_UInt32  fw_pps124:8;
    };
}dscd_pps_dw31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps131:8;
        RBus_UInt32  fw_pps130:8;
        RBus_UInt32  fw_pps129:8;
        RBus_UInt32  fw_pps128:8;
    };
}dscd_pps_dw32_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps135:8;
        RBus_UInt32  fw_pps134:8;
        RBus_UInt32  fw_pps133:8;
        RBus_UInt32  fw_pps132:8;
    };
}dscd_pps_dw33_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps003:8;
        RBus_UInt32  pps002:8;
        RBus_UInt32  pps001:8;
        RBus_UInt32  pps000:8;
    };
}dscd_pps_dw00_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps007:8;
        RBus_UInt32  pps006:8;
        RBus_UInt32  pps005:8;
        RBus_UInt32  pps004:8;
    };
}dscd_pps_dw01_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps011:8;
        RBus_UInt32  pps010:8;
        RBus_UInt32  pps009:8;
        RBus_UInt32  pps008:8;
    };
}dscd_pps_dw02_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps015:8;
        RBus_UInt32  pps014:8;
        RBus_UInt32  pps013:8;
        RBus_UInt32  pps012:8;
    };
}dscd_pps_dw03_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps019:8;
        RBus_UInt32  pps018:8;
        RBus_UInt32  pps017:8;
        RBus_UInt32  pps016:8;
    };
}dscd_pps_dw04_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps023:8;
        RBus_UInt32  pps022:8;
        RBus_UInt32  pps021:8;
        RBus_UInt32  pps020:8;
    };
}dscd_pps_dw05_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps027:8;
        RBus_UInt32  pps026:8;
        RBus_UInt32  pps025:8;
        RBus_UInt32  pps024:8;
    };
}dscd_pps_dw06_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps031:8;
        RBus_UInt32  pps030:8;
        RBus_UInt32  pps029:8;
        RBus_UInt32  pps028:8;
    };
}dscd_pps_dw07_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps035:8;
        RBus_UInt32  pps034:8;
        RBus_UInt32  pps033:8;
        RBus_UInt32  pps032:8;
    };
}dscd_pps_dw08_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps039:8;
        RBus_UInt32  pps038:8;
        RBus_UInt32  pps037:8;
        RBus_UInt32  pps036:8;
    };
}dscd_pps_dw09_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps043:8;
        RBus_UInt32  pps042:8;
        RBus_UInt32  pps041:8;
        RBus_UInt32  pps040:8;
    };
}dscd_pps_dw10_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps047:8;
        RBus_UInt32  pps046:8;
        RBus_UInt32  pps045:8;
        RBus_UInt32  pps044:8;
    };
}dscd_pps_dw11_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps051:8;
        RBus_UInt32  pps050:8;
        RBus_UInt32  pps049:8;
        RBus_UInt32  pps048:8;
    };
}dscd_pps_dw12_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps055:8;
        RBus_UInt32  pps054:8;
        RBus_UInt32  pps053:8;
        RBus_UInt32  pps052:8;
    };
}dscd_pps_dw13_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps059:8;
        RBus_UInt32  pps058:8;
        RBus_UInt32  pps057:8;
        RBus_UInt32  pps056:8;
    };
}dscd_pps_dw14_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps063:8;
        RBus_UInt32  pps062:8;
        RBus_UInt32  pps061:8;
        RBus_UInt32  pps060:8;
    };
}dscd_pps_dw15_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps067:8;
        RBus_UInt32  pps066:8;
        RBus_UInt32  pps065:8;
        RBus_UInt32  pps064:8;
    };
}dscd_pps_dw16_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps071:8;
        RBus_UInt32  pps070:8;
        RBus_UInt32  pps069:8;
        RBus_UInt32  pps068:8;
    };
}dscd_pps_dw17_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps075:8;
        RBus_UInt32  pps074:8;
        RBus_UInt32  pps073:8;
        RBus_UInt32  pps072:8;
    };
}dscd_pps_dw18_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps079:8;
        RBus_UInt32  pps078:8;
        RBus_UInt32  pps077:8;
        RBus_UInt32  pps076:8;
    };
}dscd_pps_dw19_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps083:8;
        RBus_UInt32  pps082:8;
        RBus_UInt32  pps081:8;
        RBus_UInt32  pps080:8;
    };
}dscd_pps_dw20_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps087:8;
        RBus_UInt32  pps086:8;
        RBus_UInt32  pps085:8;
        RBus_UInt32  pps084:8;
    };
}dscd_pps_dw21_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps091:8;
        RBus_UInt32  pps090:8;
        RBus_UInt32  pps089:8;
        RBus_UInt32  pps088:8;
    };
}dscd_pps_dw22_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps095:8;
        RBus_UInt32  pps094:8;
        RBus_UInt32  pps093:8;
        RBus_UInt32  pps092:8;
    };
}dscd_pps_dw23_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps099:8;
        RBus_UInt32  pps098:8;
        RBus_UInt32  pps097:8;
        RBus_UInt32  pps096:8;
    };
}dscd_pps_dw24_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps103:8;
        RBus_UInt32  pps102:8;
        RBus_UInt32  pps101:8;
        RBus_UInt32  pps100:8;
    };
}dscd_pps_dw25_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps107:8;
        RBus_UInt32  pps106:8;
        RBus_UInt32  pps105:8;
        RBus_UInt32  pps104:8;
    };
}dscd_pps_dw26_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps111:8;
        RBus_UInt32  pps110:8;
        RBus_UInt32  pps109:8;
        RBus_UInt32  pps108:8;
    };
}dscd_pps_dw27_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps115:8;
        RBus_UInt32  pps114:8;
        RBus_UInt32  pps113:8;
        RBus_UInt32  pps112:8;
    };
}dscd_pps_dw28_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps119:8;
        RBus_UInt32  pps118:8;
        RBus_UInt32  pps117:8;
        RBus_UInt32  pps116:8;
    };
}dscd_pps_dw29_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps123:8;
        RBus_UInt32  pps122:8;
        RBus_UInt32  pps121:8;
        RBus_UInt32  pps120:8;
    };
}dscd_pps_dw30_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps127:8;
        RBus_UInt32  pps126:8;
        RBus_UInt32  pps125:8;
        RBus_UInt32  pps124:8;
    };
}dscd_pps_dw31_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps131:8;
        RBus_UInt32  pps130:8;
        RBus_UInt32  pps129:8;
        RBus_UInt32  pps128:8;
    };
}dscd_pps_dw32_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps135:8;
        RBus_UInt32  pps134:8;
        RBus_UInt32  pps133:8;
        RBus_UInt32  pps132:8;
    };
}dscd_pps_dw33_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  db_en:1;
        RBus_UInt32  db_read_level:1;
        RBus_UInt32  db_apply:1;
    };
}dscd_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  dscd_decode_fail_fw_value:1;
        RBus_UInt32  dscd_decode_fail_fw_mode:1;
        RBus_UInt32  dscd_decode_fail_clr_fw:1;
        RBus_UInt32  dscd_enable:1;
        RBus_UInt32  pps_fw_mode:1;
    };
}dscd_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  em_pack_loss_dscd:1;
        RBus_UInt32  em_pack_bch_err_dscd:1;
        RBus_UInt32  dscd_decode_update:1;
        RBus_UInt32  dscd_decode_fail:1;
        RBus_UInt32  idle:1;
    };
}dscd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  p_n_s_not_finish_even_wd_en:1;
        RBus_UInt32  pic_not_finish_even_wd_en:1;
        RBus_UInt32  res2:16;
        RBus_UInt32  rc_fifo_overflow_even_wd_en:1;
        RBus_UInt32  bs_demux_overflow_even_wd_en:1;
        RBus_UInt32  in_async_overflow_even_wd_en:1;
        RBus_UInt32  dec_not_finish_even_wd_en:1;
        RBus_UInt32  res3:8;
    };
}dscd_wde_dscd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dscd_in_vsync_irq_en:1;
        RBus_UInt32  p_n_s_not_finish_even_irq_en:1;
        RBus_UInt32  pic_not_finish_even_irq_en:1;
        RBus_UInt32  res2:16;
        RBus_UInt32  rc_fifo_overflow_even_irq_en:1;
        RBus_UInt32  bs_demux_overflow_even_irq_en:1;
        RBus_UInt32  in_async_overflow_even_irq_en:1;
        RBus_UInt32  dec_not_finish_even_irq_en:1;
        RBus_UInt32  res3:8;
    };
}dscd_inte_dscd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dscd_in_vsync_irq:1;
        RBus_UInt32  p_n_s_not_finish_even_irq:1;
        RBus_UInt32  pic_not_finish_even_irq:1;
        RBus_UInt32  res2:16;
        RBus_UInt32  rc_fifo_overflow_even_irq:1;
        RBus_UInt32  bs_demux_overflow_even_irq:1;
        RBus_UInt32  in_async_overflow_even_irq:1;
        RBus_UInt32  dec_not_finish_even_irq:1;
        RBus_UInt32  res3:8;
    };
}dscd_ints_dscd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180bb92c_31_0:32;
    };
}dscd_dummy_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dbg_sel:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  outwrap_fapa_done_off:1;
        RBus_UInt32  dec_fsm_trig_vsync_en:1;
        RBus_UInt32  dbg_en:1;
    };
}dscd_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_iv_delay:32;
    };
}dscd_out_iv_delay_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  dscd_out_dly_hw_mode:1;
        RBus_UInt32  dscd_vs_width:16;
    };
}dscd_out_vs_width_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_hporch:16;
        RBus_UInt32  dscd_out_den_delay:16;
    };
}dscd_out_den_delay_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  dscd_out_swap_444_rgb:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  dscd_out_swap_444:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  dscd_out_swap_422:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  dscd_out_swap_420:3;
    };
}dscd_out_swap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  out_measure_long_term:1;
        RBus_UInt32  out_measure_en:1;
    };
}dscd_out_measure_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  out_buf_max_wl_even:16;
        RBus_UInt32  out_buf_min_wl_even:16;
    };
}dscd_out_measure_outbuf1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  timing_monitor_en:1;
        RBus_UInt32  timing_monitor_i2rnd_mode:2;
        RBus_UInt32  timing_monitor_src:1;
        RBus_UInt32  timing_monitor_unit:1;
        RBus_UInt32  timing_monitor_multi_mode:1;
        RBus_UInt32  timing_monitor_compare:2;
        RBus_UInt32  res1:8;
        RBus_UInt32  timing_monitor_sta0:4;
        RBus_UInt32  timing_monitor_end0:4;
        RBus_UInt32  timing_monitor_sta1:4;
        RBus_UInt32  timing_monitor_end1:4;
    };
}dscd_dscd_timing_monitor_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  timing_monitor_sta2:4;
        RBus_UInt32  timing_monitor_end2:4;
        RBus_UInt32  timing_monitor_sta3:4;
        RBus_UInt32  timing_monitor_end3:4;
        RBus_UInt32  timing_monitor_sta4:4;
        RBus_UInt32  timing_monitor_end4:4;
        RBus_UInt32  timing_monitor_sta5:4;
        RBus_UInt32  timing_monitor_end5:4;
    };
}dscd_dscd_timing_monitor_multi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_compare_th:28;
    };
}dscd_dscd_timing_monitor_compare_th_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_golden:28;
    };
}dscd_dscd_timing_monitor_golden_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_result_previous1:28;
    };
}dscd_dscd_timing_monitor_result1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_result_previous2:28;
    };
}dscd_dscd_timing_monitor_result2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_result_previous3:28;
    };
}dscd_dscd_timing_monitor_result3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_result_previous4:28;
    };
}dscd_dscd_timing_monitor_result4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_result_max:28;
    };
}dscd_dscd_timing_monitor_max_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  t_m_result_min:28;
    };
}dscd_dscd_timing_monitor_min_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  compare_hit:1;
        RBus_UInt32  hsync_hit_den_error:1;
        RBus_UInt32  vsync_hit_den_error:1;
    };
}dscd_dscd_timing_monitor_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_out_crc_en:1;
        RBus_UInt32  res1:27;
        RBus_UInt32  dscd_out_crc_sel:4;
    };
}dscd_dscd_out_crc_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_out_crc_result:32;
    };
}dscd_dscd_out_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_in_crc_en:1;
        RBus_UInt32  res1:27;
        RBus_UInt32  dscd_in_crc_sel:4;
    };
}dscd_dscd_in_crc_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_in_crc_result:32;
    };
}dscd_dscd_in_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_pps_crc_en:1;
        RBus_UInt32  res1:27;
        RBus_UInt32  dscd_pps_crc_sel:4;
    };
}dscd_dscd_pps_crc_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_pps_crc_resul:32;
    };
}dscd_dscd_pps_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  dbg_out_sel:4;
        RBus_UInt32  res2:14;
        RBus_UInt32  dbg_mode1:1;
        RBus_UInt32  res3:1;
    };
}dscd_dscd_dbg_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg1_sel_v_slice:16;
        RBus_UInt32  res1:16;
    };
}dscd_dscd_dbg1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg1_pic_height:16;
        RBus_UInt32  dbg1_pic_width:16;
    };
}dscd_dscd_dbg1_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_owner:2;
        RBus_UInt32  res1:13;
        RBus_UInt32  dbg_sram_is_write:1;
        RBus_UInt32  dbg_sram_addr:16;
    };
}dscd_dscd_dbg_sram_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_d0:32;
    };
}dscd_dscd_sram_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_d1:32;
    };
}dscd_dscd_sram_d1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_d2:32;
    };
}dscd_dscd_sram_d2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_d3:32;
    };
}dscd_dscd_sram_d3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_d4:32;
    };
}dscd_dscd_sram_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_d5:32;
    };
}dscd_dscd_sram_d5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_d6:32;
    };
}dscd_dscd_sram_d6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_d7:32;
    };
}dscd_dscd_sram_d7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  dbg_sram_rw_now:1;
    };
}dscd_dscd_dbg_sram_rw_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_q0:32;
    };
}dscd_dscd_sram_q0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_q1:32;
    };
}dscd_dscd_sram_q1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_q2:32;
    };
}dscd_dscd_sram_q2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_q3:32;
    };
}dscd_dscd_sram_q3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_q4:32;
    };
}dscd_dscd_sram_q4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_q5:32;
    };
}dscd_dscd_sram_q5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_q6:32;
    };
}dscd_dscd_sram_q6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_q7:32;
    };
}dscd_dscd_sram_q7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  self_tg_gt_rate:13;
        RBus_UInt32  res2:15;
        RBus_UInt32  self_tg_en:1;
    };
}dscd_dscd_timing_gen_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  self_tg_x_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  self_tg_y_sta:13;
    };
}dscd_dscd_timing_gen_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  self_tg_x_size:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  self_tg_y_size:13;
    };
}dscd_dscd_timing_gen_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  self_tg_x_end:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  self_tg_y_end:13;
    };
}dscd_dscd_timing_gen_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  frame_rate_measure_en:1;
        RBus_UInt32  vs2vs_cycle:31;
    };
}dscd_dscd_timing_gen_frame_rate_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_en:1;
        RBus_UInt32  patgen_rand_mode:2;
        RBus_UInt32  res1:7;
        RBus_UInt32  patgen_width:22;
    };
}dscd_dscd_pattern_gen_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c0_b:8;
        RBus_UInt32  patgen_c0_g:12;
        RBus_UInt32  patgen_c0_r:12;
    };
}dscd_dscd_pattern_gen_c0_rgb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c1_b:8;
        RBus_UInt32  patgen_c1_g:12;
        RBus_UInt32  patgen_c1_r:12;
    };
}dscd_dscd_pattern_gen_c1_rgb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c2_b:8;
        RBus_UInt32  patgen_c2_g:12;
        RBus_UInt32  patgen_c2_r:12;
    };
}dscd_dscd_pattern_gen_c2_rgb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c3_b:8;
        RBus_UInt32  patgen_c3_g:12;
        RBus_UInt32  patgen_c3_r:12;
    };
}dscd_dscd_pattern_gen_c3_rgb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c4_b:8;
        RBus_UInt32  patgen_c4_g:12;
        RBus_UInt32  patgen_c4_r:12;
    };
}dscd_dscd_pattern_gen_c4_rgb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c5_b:8;
        RBus_UInt32  patgen_c5_g:12;
        RBus_UInt32  patgen_c5_r:12;
    };
}dscd_dscd_pattern_gen_c5_rgb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c6_b:8;
        RBus_UInt32  patgen_c6_g:12;
        RBus_UInt32  patgen_c6_r:12;
    };
}dscd_dscd_pattern_gen_c6_rgb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c7_b:8;
        RBus_UInt32  patgen_c7_g:12;
        RBus_UInt32  patgen_c7_r:12;
    };
}dscd_dscd_pattern_gen_c7_rgb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c7_b_msb:4;
        RBus_UInt32  patgen_c6_b_msb:4;
        RBus_UInt32  patgen_c5_b_msb:4;
        RBus_UInt32  patgen_c4_b_msb:4;
        RBus_UInt32  patgen_c3_b_msb:4;
        RBus_UInt32  patgen_c2_b_msb:4;
        RBus_UInt32  patgen_c1_b_msb:4;
        RBus_UInt32  patgen_c0_b_msb:4;
    };
}dscd_dscd_pattern_gen_b_msb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_rc_fifo_test_rwm_1:1;
        RBus_UInt32  dscd_rc_fifo_test1_1:1;
        RBus_UInt32  dscd_rc_fifo_ls_1:1;
        RBus_UInt32  dscd_rc_fifo_rm_1:4;
        RBus_UInt32  dscd_rc_fifo_rme_1:1;
        RBus_UInt32  dscd_rc_fifo_test_rwm_0:1;
        RBus_UInt32  dscd_rc_fifo_test1_0:1;
        RBus_UInt32  dscd_rc_fifo_ls_0:1;
        RBus_UInt32  dscd_rc_fifo_rm_0:4;
        RBus_UInt32  dscd_rc_fifo_rme_0:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  dscd_in_async_test1_1:1;
        RBus_UInt32  dscd_in_async_ls_1:1;
        RBus_UInt32  dscd_in_async_rm_1:4;
        RBus_UInt32  dscd_in_async_rme_1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  dscd_in_async_test1_0:1;
        RBus_UInt32  dscd_in_async_ls_0:1;
        RBus_UInt32  dscd_in_async_rm_0:4;
        RBus_UInt32  dscd_in_async_rme_0:1;
    };
}dscd_dscd_mbist_read_margin_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  dscd_lbs_test1_1:1;
        RBus_UInt32  dscd_lbs_ls_1:1;
        RBus_UInt32  dscd_lbs_rm_1:4;
        RBus_UInt32  dscd_lbs_rme_1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  dscd_lbs_test1_0:1;
        RBus_UInt32  dscd_lbs_ls_0:1;
        RBus_UInt32  dscd_lbs_rm_0:4;
        RBus_UInt32  dscd_lbs_rme_0:1;
    };
}dscd_dscd_mbist_read_margin_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dscd_out_bufs_test1_3:1;
        RBus_UInt32  dscd_out_bufs_ls_3:1;
        RBus_UInt32  dscd_out_bufs_rm_3:4;
        RBus_UInt32  dscd_out_bufs_rme_3:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  dscd_out_bufs_test1_2:1;
        RBus_UInt32  dscd_out_bufs_ls_2:1;
        RBus_UInt32  dscd_out_bufs_rm_2:4;
        RBus_UInt32  dscd_out_bufs_rme_2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  dscd_out_bufs_test1_1:1;
        RBus_UInt32  dscd_out_bufs_ls_1:1;
        RBus_UInt32  dscd_out_bufs_rm_1:4;
        RBus_UInt32  dscd_out_bufs_rme_1:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  dscd_out_bufs_test1_0:1;
        RBus_UInt32  dscd_out_bufs_ls_0:1;
        RBus_UInt32  dscd_out_bufs_rm_0:4;
        RBus_UInt32  dscd_out_bufs_rme_0:1;
    };
}dscd_dscd_mbist_read_margin_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  dscd_out_bufs_bist_mode_1:1;
        RBus_UInt32  dscd_out_bufs_bist_mode_0:1;
        RBus_UInt32  dscd_lbs_bist_mode_1:1;
        RBus_UInt32  dscd_lbs_bist_mode_0:1;
        RBus_UInt32  dscd_rc_fifo_bist_mode:1;
        RBus_UInt32  dscd_in_async_bist_mode:1;
    };
}dscd_dscd_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  dscd_out_bufs_bist_done_1:1;
        RBus_UInt32  dscd_out_bufs_bist_done_0:1;
        RBus_UInt32  dscd_lbs_bist_done_1:1;
        RBus_UInt32  dscd_lbs_bist_done_0:1;
        RBus_UInt32  dscd_rc_fifo_bist_done:1;
        RBus_UInt32  dscd_in_async_bist_done:1;
    };
}dscd_dscd_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  dscd_out_bufs_bist_fail_group_1:1;
        RBus_UInt32  dscd_out_bufs_bist_fail_group_0:1;
        RBus_UInt32  dscd_lbs_bist_fail_group_1:1;
        RBus_UInt32  dscd_lbs_bist_fail_group_0:1;
        RBus_UInt32  dscd_rc_fifo_bist_fail_group:1;
        RBus_UInt32  dscd_in_async_bist_fail_group:1;
    };
}dscd_dscd_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  dscd_out_bufs_bist_fail_1_1:1;
        RBus_UInt32  dscd_out_bufs_bist_fail_0_1:1;
        RBus_UInt32  dscd_out_bufs_bist_fail_1_0:1;
        RBus_UInt32  dscd_out_bufs_bist_fail_0_0:1;
        RBus_UInt32  dscd_lbs_bist_fail_5_1:1;
        RBus_UInt32  dscd_lbs_bist_fail_4_1:1;
        RBus_UInt32  dscd_lbs_bist_fail_3_1:1;
        RBus_UInt32  dscd_lbs_bist_fail_2_1:1;
        RBus_UInt32  dscd_lbs_bist_fail_1_1:1;
        RBus_UInt32  dscd_lbs_bist_fail_0_1:1;
        RBus_UInt32  dscd_lbs_bist_fail_5_0:1;
        RBus_UInt32  dscd_lbs_bist_fail_4_0:1;
        RBus_UInt32  dscd_lbs_bist_fail_3_0:1;
        RBus_UInt32  dscd_lbs_bist_fail_2_0:1;
        RBus_UInt32  dscd_lbs_bist_fail_1_0:1;
        RBus_UInt32  dscd_lbs_bist_fail_0_0:1;
        RBus_UInt32  dscd_rc_fifo_bist_fail_1:1;
        RBus_UInt32  dscd_rc_fifo_bist_fail_0:1;
        RBus_UInt32  dscd_in_async_bist_fail_1:1;
        RBus_UInt32  dscd_in_async_bist_fail_0:1;
    };
}dscd_dscd_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  dscd_out_bufs_drf_bist_mode_1:1;
        RBus_UInt32  dscd_out_bufs_drf_bist_mode_0:1;
        RBus_UInt32  dscd_lbs_drf_bist_mode_1:1;
        RBus_UInt32  dscd_lbs_drf_bist_mode_0:1;
        RBus_UInt32  dscd_rc_fifo_drf_bist_mode:1;
        RBus_UInt32  dscd_in_async_drf_bist_mode:1;
    };
}dscd_dscd_drf_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  dscd_out_bufs_drf_bist_resume_1:1;
        RBus_UInt32  dscd_out_bufs_drf_bist_resume_0:1;
        RBus_UInt32  dscd_lbs_drf_bist_resume_1:1;
        RBus_UInt32  dscd_lbs_drf_bist_resume_0:1;
        RBus_UInt32  dscd_rc_fifo_drf_bist_resume:1;
        RBus_UInt32  dscd_in_async_drf_bist_resume:1;
    };
}dscd_dscd_drf_bist_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  dscd_out_bufs_drf_bist_done_1:1;
        RBus_UInt32  dscd_out_bufs_drf_bist_done_0:1;
        RBus_UInt32  dscd_lbs_drf_bist_done_1:1;
        RBus_UInt32  dscd_lbs_drf_bist_done_0:1;
        RBus_UInt32  dscd_rc_fifo_drf_bist_done:1;
        RBus_UInt32  dscd_in_async_drf_bist_done:1;
    };
}dscd_dscd_drf_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  dscd_out_bufs_drf_bist_fail_group_1:1;
        RBus_UInt32  dscd_out_bufs_drf_bist_fail_group_0:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_group_1:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_group_0:1;
        RBus_UInt32  dscd_rc_fifo_drf_bist_fail_group:1;
        RBus_UInt32  dscd_in_async_drf_bist_fail_group:1;
    };
}dscd_dscd_drf_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  dscd_out_bufs_drf_bist_fail_1_1:1;
        RBus_UInt32  dscd_out_bufs_drf_bist_fail_0_1:1;
        RBus_UInt32  dscd_out_bufs_drf_bist_fail_1_0:1;
        RBus_UInt32  dscd_out_bufs_drf_bist_fail_0_0:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_5_1:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_4_1:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_3_1:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_2_1:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_1_1:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_0_1:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_5_0:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_4_0:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_3_0:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_2_0:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_1_0:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_0_0:1;
        RBus_UInt32  dscd_rc_fifo_drf_bist_fail_1:1;
        RBus_UInt32  dscd_rc_fifo_drf_bist_fail_0:1;
        RBus_UInt32  dscd_in_async_drf_bist_fail_1:1;
        RBus_UInt32  dscd_in_async_drf_bist_fail_0:1;
    };
}dscd_dscd_drf_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  dscd_out_bufs_drf_bist_pause_1:1;
        RBus_UInt32  dscd_out_bufs_drf_bist_pause_0:1;
        RBus_UInt32  dscd_lbs_drf_bist_pause_1:1;
        RBus_UInt32  dscd_lbs_drf_bist_pause_0:1;
        RBus_UInt32  dscd_rc_fifo_drf_bist_pause:1;
        RBus_UInt32  dscd_in_async_drf_bist_pause:1;
    };
}dscd_dscd_drf_bist_pause_RBUS;

#else //apply LITTLE_ENDIAN

//======DSCD register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps000:8;
        RBus_UInt32  fw_pps001:8;
        RBus_UInt32  fw_pps002:8;
        RBus_UInt32  fw_pps003:8;
    };
}dscd_pps_dw00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps004:8;
        RBus_UInt32  fw_pps005:8;
        RBus_UInt32  fw_pps006:8;
        RBus_UInt32  fw_pps007:8;
    };
}dscd_pps_dw01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps008:8;
        RBus_UInt32  fw_pps009:8;
        RBus_UInt32  fw_pps010:8;
        RBus_UInt32  fw_pps011:8;
    };
}dscd_pps_dw02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps012:8;
        RBus_UInt32  fw_pps013:8;
        RBus_UInt32  fw_pps014:8;
        RBus_UInt32  fw_pps015:8;
    };
}dscd_pps_dw03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps016:8;
        RBus_UInt32  fw_pps017:8;
        RBus_UInt32  fw_pps018:8;
        RBus_UInt32  fw_pps019:8;
    };
}dscd_pps_dw04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps020:8;
        RBus_UInt32  fw_pps021:8;
        RBus_UInt32  fw_pps022:8;
        RBus_UInt32  fw_pps023:8;
    };
}dscd_pps_dw05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps024:8;
        RBus_UInt32  fw_pps025:8;
        RBus_UInt32  fw_pps026:8;
        RBus_UInt32  fw_pps027:8;
    };
}dscd_pps_dw06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps028:8;
        RBus_UInt32  fw_pps029:8;
        RBus_UInt32  fw_pps030:8;
        RBus_UInt32  fw_pps031:8;
    };
}dscd_pps_dw07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps032:8;
        RBus_UInt32  fw_pps033:8;
        RBus_UInt32  fw_pps034:8;
        RBus_UInt32  fw_pps035:8;
    };
}dscd_pps_dw08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps036:8;
        RBus_UInt32  fw_pps037:8;
        RBus_UInt32  fw_pps038:8;
        RBus_UInt32  fw_pps039:8;
    };
}dscd_pps_dw09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps040:8;
        RBus_UInt32  fw_pps041:8;
        RBus_UInt32  fw_pps042:8;
        RBus_UInt32  fw_pps043:8;
    };
}dscd_pps_dw10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps044:8;
        RBus_UInt32  fw_pps045:8;
        RBus_UInt32  fw_pps046:8;
        RBus_UInt32  fw_pps047:8;
    };
}dscd_pps_dw11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps048:8;
        RBus_UInt32  fw_pps049:8;
        RBus_UInt32  fw_pps050:8;
        RBus_UInt32  fw_pps051:8;
    };
}dscd_pps_dw12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps052:8;
        RBus_UInt32  fw_pps053:8;
        RBus_UInt32  fw_pps054:8;
        RBus_UInt32  fw_pps055:8;
    };
}dscd_pps_dw13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps056:8;
        RBus_UInt32  fw_pps057:8;
        RBus_UInt32  fw_pps058:8;
        RBus_UInt32  fw_pps059:8;
    };
}dscd_pps_dw14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps060:8;
        RBus_UInt32  fw_pps061:8;
        RBus_UInt32  fw_pps062:8;
        RBus_UInt32  fw_pps063:8;
    };
}dscd_pps_dw15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps064:8;
        RBus_UInt32  fw_pps065:8;
        RBus_UInt32  fw_pps066:8;
        RBus_UInt32  fw_pps067:8;
    };
}dscd_pps_dw16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps068:8;
        RBus_UInt32  fw_pps069:8;
        RBus_UInt32  fw_pps070:8;
        RBus_UInt32  fw_pps071:8;
    };
}dscd_pps_dw17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps072:8;
        RBus_UInt32  fw_pps073:8;
        RBus_UInt32  fw_pps074:8;
        RBus_UInt32  fw_pps075:8;
    };
}dscd_pps_dw18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps076:8;
        RBus_UInt32  fw_pps077:8;
        RBus_UInt32  fw_pps078:8;
        RBus_UInt32  fw_pps079:8;
    };
}dscd_pps_dw19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps080:8;
        RBus_UInt32  fw_pps081:8;
        RBus_UInt32  fw_pps082:8;
        RBus_UInt32  fw_pps083:8;
    };
}dscd_pps_dw20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps084:8;
        RBus_UInt32  fw_pps085:8;
        RBus_UInt32  fw_pps086:8;
        RBus_UInt32  fw_pps087:8;
    };
}dscd_pps_dw21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps088:8;
        RBus_UInt32  fw_pps089:8;
        RBus_UInt32  fw_pps090:8;
        RBus_UInt32  fw_pps091:8;
    };
}dscd_pps_dw22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps092:8;
        RBus_UInt32  fw_pps093:8;
        RBus_UInt32  fw_pps094:8;
        RBus_UInt32  fw_pps095:8;
    };
}dscd_pps_dw23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps096:8;
        RBus_UInt32  fw_pps097:8;
        RBus_UInt32  fw_pps098:8;
        RBus_UInt32  fw_pps099:8;
    };
}dscd_pps_dw24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps100:8;
        RBus_UInt32  fw_pps101:8;
        RBus_UInt32  fw_pps102:8;
        RBus_UInt32  fw_pps103:8;
    };
}dscd_pps_dw25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps104:8;
        RBus_UInt32  fw_pps105:8;
        RBus_UInt32  fw_pps106:8;
        RBus_UInt32  fw_pps107:8;
    };
}dscd_pps_dw26_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps108:8;
        RBus_UInt32  fw_pps109:8;
        RBus_UInt32  fw_pps110:8;
        RBus_UInt32  fw_pps111:8;
    };
}dscd_pps_dw27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps112:8;
        RBus_UInt32  fw_pps113:8;
        RBus_UInt32  fw_pps114:8;
        RBus_UInt32  fw_pps115:8;
    };
}dscd_pps_dw28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps116:8;
        RBus_UInt32  fw_pps117:8;
        RBus_UInt32  fw_pps118:8;
        RBus_UInt32  fw_pps119:8;
    };
}dscd_pps_dw29_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps120:8;
        RBus_UInt32  fw_pps121:8;
        RBus_UInt32  fw_pps122:8;
        RBus_UInt32  fw_pps123:8;
    };
}dscd_pps_dw30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps124:8;
        RBus_UInt32  fw_pps125:8;
        RBus_UInt32  fw_pps126:8;
        RBus_UInt32  fw_pps127:8;
    };
}dscd_pps_dw31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps128:8;
        RBus_UInt32  fw_pps129:8;
        RBus_UInt32  fw_pps130:8;
        RBus_UInt32  fw_pps131:8;
    };
}dscd_pps_dw32_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_pps132:8;
        RBus_UInt32  fw_pps133:8;
        RBus_UInt32  fw_pps134:8;
        RBus_UInt32  fw_pps135:8;
    };
}dscd_pps_dw33_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps000:8;
        RBus_UInt32  pps001:8;
        RBus_UInt32  pps002:8;
        RBus_UInt32  pps003:8;
    };
}dscd_pps_dw00_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps004:8;
        RBus_UInt32  pps005:8;
        RBus_UInt32  pps006:8;
        RBus_UInt32  pps007:8;
    };
}dscd_pps_dw01_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps008:8;
        RBus_UInt32  pps009:8;
        RBus_UInt32  pps010:8;
        RBus_UInt32  pps011:8;
    };
}dscd_pps_dw02_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps012:8;
        RBus_UInt32  pps013:8;
        RBus_UInt32  pps014:8;
        RBus_UInt32  pps015:8;
    };
}dscd_pps_dw03_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps016:8;
        RBus_UInt32  pps017:8;
        RBus_UInt32  pps018:8;
        RBus_UInt32  pps019:8;
    };
}dscd_pps_dw04_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps020:8;
        RBus_UInt32  pps021:8;
        RBus_UInt32  pps022:8;
        RBus_UInt32  pps023:8;
    };
}dscd_pps_dw05_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps024:8;
        RBus_UInt32  pps025:8;
        RBus_UInt32  pps026:8;
        RBus_UInt32  pps027:8;
    };
}dscd_pps_dw06_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps028:8;
        RBus_UInt32  pps029:8;
        RBus_UInt32  pps030:8;
        RBus_UInt32  pps031:8;
    };
}dscd_pps_dw07_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps032:8;
        RBus_UInt32  pps033:8;
        RBus_UInt32  pps034:8;
        RBus_UInt32  pps035:8;
    };
}dscd_pps_dw08_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps036:8;
        RBus_UInt32  pps037:8;
        RBus_UInt32  pps038:8;
        RBus_UInt32  pps039:8;
    };
}dscd_pps_dw09_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps040:8;
        RBus_UInt32  pps041:8;
        RBus_UInt32  pps042:8;
        RBus_UInt32  pps043:8;
    };
}dscd_pps_dw10_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps044:8;
        RBus_UInt32  pps045:8;
        RBus_UInt32  pps046:8;
        RBus_UInt32  pps047:8;
    };
}dscd_pps_dw11_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps048:8;
        RBus_UInt32  pps049:8;
        RBus_UInt32  pps050:8;
        RBus_UInt32  pps051:8;
    };
}dscd_pps_dw12_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps052:8;
        RBus_UInt32  pps053:8;
        RBus_UInt32  pps054:8;
        RBus_UInt32  pps055:8;
    };
}dscd_pps_dw13_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps056:8;
        RBus_UInt32  pps057:8;
        RBus_UInt32  pps058:8;
        RBus_UInt32  pps059:8;
    };
}dscd_pps_dw14_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps060:8;
        RBus_UInt32  pps061:8;
        RBus_UInt32  pps062:8;
        RBus_UInt32  pps063:8;
    };
}dscd_pps_dw15_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps064:8;
        RBus_UInt32  pps065:8;
        RBus_UInt32  pps066:8;
        RBus_UInt32  pps067:8;
    };
}dscd_pps_dw16_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps068:8;
        RBus_UInt32  pps069:8;
        RBus_UInt32  pps070:8;
        RBus_UInt32  pps071:8;
    };
}dscd_pps_dw17_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps072:8;
        RBus_UInt32  pps073:8;
        RBus_UInt32  pps074:8;
        RBus_UInt32  pps075:8;
    };
}dscd_pps_dw18_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps076:8;
        RBus_UInt32  pps077:8;
        RBus_UInt32  pps078:8;
        RBus_UInt32  pps079:8;
    };
}dscd_pps_dw19_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps080:8;
        RBus_UInt32  pps081:8;
        RBus_UInt32  pps082:8;
        RBus_UInt32  pps083:8;
    };
}dscd_pps_dw20_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps084:8;
        RBus_UInt32  pps085:8;
        RBus_UInt32  pps086:8;
        RBus_UInt32  pps087:8;
    };
}dscd_pps_dw21_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps088:8;
        RBus_UInt32  pps089:8;
        RBus_UInt32  pps090:8;
        RBus_UInt32  pps091:8;
    };
}dscd_pps_dw22_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps092:8;
        RBus_UInt32  pps093:8;
        RBus_UInt32  pps094:8;
        RBus_UInt32  pps095:8;
    };
}dscd_pps_dw23_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps096:8;
        RBus_UInt32  pps097:8;
        RBus_UInt32  pps098:8;
        RBus_UInt32  pps099:8;
    };
}dscd_pps_dw24_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps100:8;
        RBus_UInt32  pps101:8;
        RBus_UInt32  pps102:8;
        RBus_UInt32  pps103:8;
    };
}dscd_pps_dw25_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps104:8;
        RBus_UInt32  pps105:8;
        RBus_UInt32  pps106:8;
        RBus_UInt32  pps107:8;
    };
}dscd_pps_dw26_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps108:8;
        RBus_UInt32  pps109:8;
        RBus_UInt32  pps110:8;
        RBus_UInt32  pps111:8;
    };
}dscd_pps_dw27_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps112:8;
        RBus_UInt32  pps113:8;
        RBus_UInt32  pps114:8;
        RBus_UInt32  pps115:8;
    };
}dscd_pps_dw28_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps116:8;
        RBus_UInt32  pps117:8;
        RBus_UInt32  pps118:8;
        RBus_UInt32  pps119:8;
    };
}dscd_pps_dw29_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps120:8;
        RBus_UInt32  pps121:8;
        RBus_UInt32  pps122:8;
        RBus_UInt32  pps123:8;
    };
}dscd_pps_dw30_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps124:8;
        RBus_UInt32  pps125:8;
        RBus_UInt32  pps126:8;
        RBus_UInt32  pps127:8;
    };
}dscd_pps_dw31_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps128:8;
        RBus_UInt32  pps129:8;
        RBus_UInt32  pps130:8;
        RBus_UInt32  pps131:8;
    };
}dscd_pps_dw32_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps132:8;
        RBus_UInt32  pps133:8;
        RBus_UInt32  pps134:8;
        RBus_UInt32  pps135:8;
    };
}dscd_pps_dw33_cur_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  db_apply:1;
        RBus_UInt32  db_read_level:1;
        RBus_UInt32  db_en:1;
        RBus_UInt32  res1:29;
    };
}dscd_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pps_fw_mode:1;
        RBus_UInt32  dscd_enable:1;
        RBus_UInt32  dscd_decode_fail_clr_fw:1;
        RBus_UInt32  dscd_decode_fail_fw_mode:1;
        RBus_UInt32  dscd_decode_fail_fw_value:1;
        RBus_UInt32  res1:27;
    };
}dscd_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  idle:1;
        RBus_UInt32  dscd_decode_fail:1;
        RBus_UInt32  dscd_decode_update:1;
        RBus_UInt32  em_pack_bch_err_dscd:1;
        RBus_UInt32  em_pack_loss_dscd:1;
        RBus_UInt32  res1:27;
    };
}dscd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  dec_not_finish_even_wd_en:1;
        RBus_UInt32  in_async_overflow_even_wd_en:1;
        RBus_UInt32  bs_demux_overflow_even_wd_en:1;
        RBus_UInt32  rc_fifo_overflow_even_wd_en:1;
        RBus_UInt32  res2:16;
        RBus_UInt32  pic_not_finish_even_wd_en:1;
        RBus_UInt32  p_n_s_not_finish_even_wd_en:1;
        RBus_UInt32  res3:2;
    };
}dscd_wde_dscd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  dec_not_finish_even_irq_en:1;
        RBus_UInt32  in_async_overflow_even_irq_en:1;
        RBus_UInt32  bs_demux_overflow_even_irq_en:1;
        RBus_UInt32  rc_fifo_overflow_even_irq_en:1;
        RBus_UInt32  res2:16;
        RBus_UInt32  pic_not_finish_even_irq_en:1;
        RBus_UInt32  p_n_s_not_finish_even_irq_en:1;
        RBus_UInt32  dscd_in_vsync_irq_en:1;
        RBus_UInt32  res3:1;
    };
}dscd_inte_dscd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  dec_not_finish_even_irq:1;
        RBus_UInt32  in_async_overflow_even_irq:1;
        RBus_UInt32  bs_demux_overflow_even_irq:1;
        RBus_UInt32  rc_fifo_overflow_even_irq:1;
        RBus_UInt32  res2:16;
        RBus_UInt32  pic_not_finish_even_irq:1;
        RBus_UInt32  p_n_s_not_finish_even_irq:1;
        RBus_UInt32  dscd_in_vsync_irq:1;
        RBus_UInt32  res3:1;
    };
}dscd_ints_dscd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180bb92c_31_0:32;
    };
}dscd_dummy_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_en:1;
        RBus_UInt32  dec_fsm_trig_vsync_en:1;
        RBus_UInt32  outwrap_fapa_done_off:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  dbg_sel:4;
        RBus_UInt32  res2:24;
    };
}dscd_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_iv_delay:32;
    };
}dscd_out_iv_delay_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_vs_width:16;
        RBus_UInt32  dscd_out_dly_hw_mode:1;
        RBus_UInt32  res1:15;
    };
}dscd_out_vs_width_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_out_den_delay:16;
        RBus_UInt32  dscd_hporch:16;
    };
}dscd_out_den_delay_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_out_swap_420:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  dscd_out_swap_422:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  dscd_out_swap_444:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  dscd_out_swap_444_rgb:3;
        RBus_UInt32  res4:17;
    };
}dscd_out_swap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  out_measure_en:1;
        RBus_UInt32  out_measure_long_term:1;
        RBus_UInt32  res1:30;
    };
}dscd_out_measure_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  out_buf_min_wl_even:16;
        RBus_UInt32  out_buf_max_wl_even:16;
    };
}dscd_out_measure_outbuf1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  timing_monitor_end1:4;
        RBus_UInt32  timing_monitor_sta1:4;
        RBus_UInt32  timing_monitor_end0:4;
        RBus_UInt32  timing_monitor_sta0:4;
        RBus_UInt32  res1:8;
        RBus_UInt32  timing_monitor_compare:2;
        RBus_UInt32  timing_monitor_multi_mode:1;
        RBus_UInt32  timing_monitor_unit:1;
        RBus_UInt32  timing_monitor_src:1;
        RBus_UInt32  timing_monitor_i2rnd_mode:2;
        RBus_UInt32  timing_monitor_en:1;
    };
}dscd_dscd_timing_monitor_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  timing_monitor_end5:4;
        RBus_UInt32  timing_monitor_sta5:4;
        RBus_UInt32  timing_monitor_end4:4;
        RBus_UInt32  timing_monitor_sta4:4;
        RBus_UInt32  timing_monitor_end3:4;
        RBus_UInt32  timing_monitor_sta3:4;
        RBus_UInt32  timing_monitor_end2:4;
        RBus_UInt32  timing_monitor_sta2:4;
    };
}dscd_dscd_timing_monitor_multi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_compare_th:28;
        RBus_UInt32  res1:4;
    };
}dscd_dscd_timing_monitor_compare_th_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_golden:28;
        RBus_UInt32  res1:4;
    };
}dscd_dscd_timing_monitor_golden_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_result_previous1:28;
        RBus_UInt32  res1:4;
    };
}dscd_dscd_timing_monitor_result1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_result_previous2:28;
        RBus_UInt32  res1:4;
    };
}dscd_dscd_timing_monitor_result2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_result_previous3:28;
        RBus_UInt32  res1:4;
    };
}dscd_dscd_timing_monitor_result3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_result_previous4:28;
        RBus_UInt32  res1:4;
    };
}dscd_dscd_timing_monitor_result4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_result_max:28;
        RBus_UInt32  res1:4;
    };
}dscd_dscd_timing_monitor_max_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_m_result_min:28;
        RBus_UInt32  res1:4;
    };
}dscd_dscd_timing_monitor_min_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vsync_hit_den_error:1;
        RBus_UInt32  hsync_hit_den_error:1;
        RBus_UInt32  compare_hit:1;
        RBus_UInt32  res1:29;
    };
}dscd_dscd_timing_monitor_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_out_crc_sel:4;
        RBus_UInt32  res1:27;
        RBus_UInt32  dscd_out_crc_en:1;
    };
}dscd_dscd_out_crc_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_out_crc_result:32;
    };
}dscd_dscd_out_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_in_crc_sel:4;
        RBus_UInt32  res1:27;
        RBus_UInt32  dscd_in_crc_en:1;
    };
}dscd_dscd_in_crc_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_in_crc_result:32;
    };
}dscd_dscd_in_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_pps_crc_sel:4;
        RBus_UInt32  res1:27;
        RBus_UInt32  dscd_pps_crc_en:1;
    };
}dscd_dscd_pps_crc_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_pps_crc_resul:32;
    };
}dscd_dscd_pps_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dbg_mode1:1;
        RBus_UInt32  res2:14;
        RBus_UInt32  dbg_out_sel:4;
        RBus_UInt32  res3:12;
    };
}dscd_dscd_dbg_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  dbg1_sel_v_slice:16;
    };
}dscd_dscd_dbg1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg1_pic_width:16;
        RBus_UInt32  dbg1_pic_height:16;
    };
}dscd_dscd_dbg1_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_addr:16;
        RBus_UInt32  dbg_sram_is_write:1;
        RBus_UInt32  res1:13;
        RBus_UInt32  dbg_sram_owner:2;
    };
}dscd_dscd_dbg_sram_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_d0:32;
    };
}dscd_dscd_sram_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_d1:32;
    };
}dscd_dscd_sram_d1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_d2:32;
    };
}dscd_dscd_sram_d2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_d3:32;
    };
}dscd_dscd_sram_d3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_d4:32;
    };
}dscd_dscd_sram_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_d5:32;
    };
}dscd_dscd_sram_d5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_d6:32;
    };
}dscd_dscd_sram_d6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_d7:32;
    };
}dscd_dscd_sram_d7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_rw_now:1;
        RBus_UInt32  res1:31;
    };
}dscd_dscd_dbg_sram_rw_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_q0:32;
    };
}dscd_dscd_sram_q0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_q1:32;
    };
}dscd_dscd_sram_q1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_q2:32;
    };
}dscd_dscd_sram_q2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_q3:32;
    };
}dscd_dscd_sram_q3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_q4:32;
    };
}dscd_dscd_sram_q4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_q5:32;
    };
}dscd_dscd_sram_q5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_q6:32;
    };
}dscd_dscd_sram_q6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sram_q7:32;
    };
}dscd_dscd_sram_q7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  self_tg_en:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  self_tg_gt_rate:13;
        RBus_UInt32  res2:3;
    };
}dscd_dscd_timing_gen_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  self_tg_y_sta:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  self_tg_x_sta:13;
        RBus_UInt32  res2:3;
    };
}dscd_dscd_timing_gen_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  self_tg_y_size:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  self_tg_x_size:13;
        RBus_UInt32  res2:3;
    };
}dscd_dscd_timing_gen_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  self_tg_y_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  self_tg_x_end:13;
        RBus_UInt32  res2:3;
    };
}dscd_dscd_timing_gen_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vs2vs_cycle:31;
        RBus_UInt32  frame_rate_measure_en:1;
    };
}dscd_dscd_timing_gen_frame_rate_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_width:22;
        RBus_UInt32  res1:7;
        RBus_UInt32  patgen_rand_mode:2;
        RBus_UInt32  patgen_en:1;
    };
}dscd_dscd_pattern_gen_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c0_r:12;
        RBus_UInt32  patgen_c0_g:12;
        RBus_UInt32  patgen_c0_b:8;
    };
}dscd_dscd_pattern_gen_c0_rgb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c1_r:12;
        RBus_UInt32  patgen_c1_g:12;
        RBus_UInt32  patgen_c1_b:8;
    };
}dscd_dscd_pattern_gen_c1_rgb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c2_r:12;
        RBus_UInt32  patgen_c2_g:12;
        RBus_UInt32  patgen_c2_b:8;
    };
}dscd_dscd_pattern_gen_c2_rgb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c3_r:12;
        RBus_UInt32  patgen_c3_g:12;
        RBus_UInt32  patgen_c3_b:8;
    };
}dscd_dscd_pattern_gen_c3_rgb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c4_r:12;
        RBus_UInt32  patgen_c4_g:12;
        RBus_UInt32  patgen_c4_b:8;
    };
}dscd_dscd_pattern_gen_c4_rgb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c5_r:12;
        RBus_UInt32  patgen_c5_g:12;
        RBus_UInt32  patgen_c5_b:8;
    };
}dscd_dscd_pattern_gen_c5_rgb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c6_r:12;
        RBus_UInt32  patgen_c6_g:12;
        RBus_UInt32  patgen_c6_b:8;
    };
}dscd_dscd_pattern_gen_c6_rgb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c7_r:12;
        RBus_UInt32  patgen_c7_g:12;
        RBus_UInt32  patgen_c7_b:8;
    };
}dscd_dscd_pattern_gen_c7_rgb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c0_b_msb:4;
        RBus_UInt32  patgen_c1_b_msb:4;
        RBus_UInt32  patgen_c2_b_msb:4;
        RBus_UInt32  patgen_c3_b_msb:4;
        RBus_UInt32  patgen_c4_b_msb:4;
        RBus_UInt32  patgen_c5_b_msb:4;
        RBus_UInt32  patgen_c6_b_msb:4;
        RBus_UInt32  patgen_c7_b_msb:4;
    };
}dscd_dscd_pattern_gen_b_msb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_in_async_rme_0:1;
        RBus_UInt32  dscd_in_async_rm_0:4;
        RBus_UInt32  dscd_in_async_ls_0:1;
        RBus_UInt32  dscd_in_async_test1_0:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  dscd_in_async_rme_1:1;
        RBus_UInt32  dscd_in_async_rm_1:4;
        RBus_UInt32  dscd_in_async_ls_1:1;
        RBus_UInt32  dscd_in_async_test1_1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  dscd_rc_fifo_rme_0:1;
        RBus_UInt32  dscd_rc_fifo_rm_0:4;
        RBus_UInt32  dscd_rc_fifo_ls_0:1;
        RBus_UInt32  dscd_rc_fifo_test1_0:1;
        RBus_UInt32  dscd_rc_fifo_test_rwm_0:1;
        RBus_UInt32  dscd_rc_fifo_rme_1:1;
        RBus_UInt32  dscd_rc_fifo_rm_1:4;
        RBus_UInt32  dscd_rc_fifo_ls_1:1;
        RBus_UInt32  dscd_rc_fifo_test1_1:1;
        RBus_UInt32  dscd_rc_fifo_test_rwm_1:1;
    };
}dscd_dscd_mbist_read_margin_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_lbs_rme_0:1;
        RBus_UInt32  dscd_lbs_rm_0:4;
        RBus_UInt32  dscd_lbs_ls_0:1;
        RBus_UInt32  dscd_lbs_test1_0:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  dscd_lbs_rme_1:1;
        RBus_UInt32  dscd_lbs_rm_1:4;
        RBus_UInt32  dscd_lbs_ls_1:1;
        RBus_UInt32  dscd_lbs_test1_1:1;
        RBus_UInt32  res2:17;
    };
}dscd_dscd_mbist_read_margin_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_out_bufs_rme_0:1;
        RBus_UInt32  dscd_out_bufs_rm_0:4;
        RBus_UInt32  dscd_out_bufs_ls_0:1;
        RBus_UInt32  dscd_out_bufs_test1_0:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  dscd_out_bufs_rme_1:1;
        RBus_UInt32  dscd_out_bufs_rm_1:4;
        RBus_UInt32  dscd_out_bufs_ls_1:1;
        RBus_UInt32  dscd_out_bufs_test1_1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  dscd_out_bufs_rme_2:1;
        RBus_UInt32  dscd_out_bufs_rm_2:4;
        RBus_UInt32  dscd_out_bufs_ls_2:1;
        RBus_UInt32  dscd_out_bufs_test1_2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  dscd_out_bufs_rme_3:1;
        RBus_UInt32  dscd_out_bufs_rm_3:4;
        RBus_UInt32  dscd_out_bufs_ls_3:1;
        RBus_UInt32  dscd_out_bufs_test1_3:1;
        RBus_UInt32  res4:1;
    };
}dscd_dscd_mbist_read_margin_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_in_async_bist_mode:1;
        RBus_UInt32  dscd_rc_fifo_bist_mode:1;
        RBus_UInt32  dscd_lbs_bist_mode_0:1;
        RBus_UInt32  dscd_lbs_bist_mode_1:1;
        RBus_UInt32  dscd_out_bufs_bist_mode_0:1;
        RBus_UInt32  dscd_out_bufs_bist_mode_1:1;
        RBus_UInt32  res1:26;
    };
}dscd_dscd_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_in_async_bist_done:1;
        RBus_UInt32  dscd_rc_fifo_bist_done:1;
        RBus_UInt32  dscd_lbs_bist_done_0:1;
        RBus_UInt32  dscd_lbs_bist_done_1:1;
        RBus_UInt32  dscd_out_bufs_bist_done_0:1;
        RBus_UInt32  dscd_out_bufs_bist_done_1:1;
        RBus_UInt32  res1:26;
    };
}dscd_dscd_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_in_async_bist_fail_group:1;
        RBus_UInt32  dscd_rc_fifo_bist_fail_group:1;
        RBus_UInt32  dscd_lbs_bist_fail_group_0:1;
        RBus_UInt32  dscd_lbs_bist_fail_group_1:1;
        RBus_UInt32  dscd_out_bufs_bist_fail_group_0:1;
        RBus_UInt32  dscd_out_bufs_bist_fail_group_1:1;
        RBus_UInt32  res1:26;
    };
}dscd_dscd_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_in_async_bist_fail_0:1;
        RBus_UInt32  dscd_in_async_bist_fail_1:1;
        RBus_UInt32  dscd_rc_fifo_bist_fail_0:1;
        RBus_UInt32  dscd_rc_fifo_bist_fail_1:1;
        RBus_UInt32  dscd_lbs_bist_fail_0_0:1;
        RBus_UInt32  dscd_lbs_bist_fail_1_0:1;
        RBus_UInt32  dscd_lbs_bist_fail_2_0:1;
        RBus_UInt32  dscd_lbs_bist_fail_3_0:1;
        RBus_UInt32  dscd_lbs_bist_fail_4_0:1;
        RBus_UInt32  dscd_lbs_bist_fail_5_0:1;
        RBus_UInt32  dscd_lbs_bist_fail_0_1:1;
        RBus_UInt32  dscd_lbs_bist_fail_1_1:1;
        RBus_UInt32  dscd_lbs_bist_fail_2_1:1;
        RBus_UInt32  dscd_lbs_bist_fail_3_1:1;
        RBus_UInt32  dscd_lbs_bist_fail_4_1:1;
        RBus_UInt32  dscd_lbs_bist_fail_5_1:1;
        RBus_UInt32  dscd_out_bufs_bist_fail_0_0:1;
        RBus_UInt32  dscd_out_bufs_bist_fail_1_0:1;
        RBus_UInt32  dscd_out_bufs_bist_fail_0_1:1;
        RBus_UInt32  dscd_out_bufs_bist_fail_1_1:1;
        RBus_UInt32  res1:12;
    };
}dscd_dscd_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_in_async_drf_bist_mode:1;
        RBus_UInt32  dscd_rc_fifo_drf_bist_mode:1;
        RBus_UInt32  dscd_lbs_drf_bist_mode_0:1;
        RBus_UInt32  dscd_lbs_drf_bist_mode_1:1;
        RBus_UInt32  dscd_out_bufs_drf_bist_mode_0:1;
        RBus_UInt32  dscd_out_bufs_drf_bist_mode_1:1;
        RBus_UInt32  res1:26;
    };
}dscd_dscd_drf_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_in_async_drf_bist_resume:1;
        RBus_UInt32  dscd_rc_fifo_drf_bist_resume:1;
        RBus_UInt32  dscd_lbs_drf_bist_resume_0:1;
        RBus_UInt32  dscd_lbs_drf_bist_resume_1:1;
        RBus_UInt32  dscd_out_bufs_drf_bist_resume_0:1;
        RBus_UInt32  dscd_out_bufs_drf_bist_resume_1:1;
        RBus_UInt32  res1:26;
    };
}dscd_dscd_drf_bist_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_in_async_drf_bist_done:1;
        RBus_UInt32  dscd_rc_fifo_drf_bist_done:1;
        RBus_UInt32  dscd_lbs_drf_bist_done_0:1;
        RBus_UInt32  dscd_lbs_drf_bist_done_1:1;
        RBus_UInt32  dscd_out_bufs_drf_bist_done_0:1;
        RBus_UInt32  dscd_out_bufs_drf_bist_done_1:1;
        RBus_UInt32  res1:26;
    };
}dscd_dscd_drf_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_in_async_drf_bist_fail_group:1;
        RBus_UInt32  dscd_rc_fifo_drf_bist_fail_group:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_group_0:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_group_1:1;
        RBus_UInt32  dscd_out_bufs_drf_bist_fail_group_0:1;
        RBus_UInt32  dscd_out_bufs_drf_bist_fail_group_1:1;
        RBus_UInt32  res1:26;
    };
}dscd_dscd_drf_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_in_async_drf_bist_fail_0:1;
        RBus_UInt32  dscd_in_async_drf_bist_fail_1:1;
        RBus_UInt32  dscd_rc_fifo_drf_bist_fail_0:1;
        RBus_UInt32  dscd_rc_fifo_drf_bist_fail_1:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_0_0:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_1_0:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_2_0:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_3_0:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_4_0:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_5_0:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_0_1:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_1_1:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_2_1:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_3_1:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_4_1:1;
        RBus_UInt32  dscd_lbs_drf_bist_fail_5_1:1;
        RBus_UInt32  dscd_out_bufs_drf_bist_fail_0_0:1;
        RBus_UInt32  dscd_out_bufs_drf_bist_fail_1_0:1;
        RBus_UInt32  dscd_out_bufs_drf_bist_fail_0_1:1;
        RBus_UInt32  dscd_out_bufs_drf_bist_fail_1_1:1;
        RBus_UInt32  res1:12;
    };
}dscd_dscd_drf_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dscd_in_async_drf_bist_pause:1;
        RBus_UInt32  dscd_rc_fifo_drf_bist_pause:1;
        RBus_UInt32  dscd_lbs_drf_bist_pause_0:1;
        RBus_UInt32  dscd_lbs_drf_bist_pause_1:1;
        RBus_UInt32  dscd_out_bufs_drf_bist_pause_0:1;
        RBus_UInt32  dscd_out_bufs_drf_bist_pause_1:1;
        RBus_UInt32  res1:26;
    };
}dscd_dscd_drf_bist_pause_RBUS;




#endif 


#endif 
