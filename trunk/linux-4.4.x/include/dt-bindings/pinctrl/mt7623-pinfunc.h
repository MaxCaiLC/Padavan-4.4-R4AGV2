/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */
#ifndef __DTS_MT7623_PINFUNC_H
#define __DTS_MT7623_PINFUNC_H

#include <dt-bindings/pinctrl/mt65xx.h>

#define MT7623_PIN_0_PWRAP_SPI0_MI_FUNC_GPIO0 (MTK_PIN_NO(0) | 0)
#define MT7623_PIN_0_PWRAP_SPI0_MI_FUNC_PWRAP_SPIDO (MTK_PIN_NO(0) | 1)
#define MT7623_PIN_0_PWRAP_SPI0_MI_FUNC_PWRAP_SPIDI (MTK_PIN_NO(0) | 2)

#define MT7623_PIN_1_PWRAP_SPI0_MO_FUNC_GPIO1 (MTK_PIN_NO(1) | 0)
#define MT7623_PIN_1_PWRAP_SPI0_MO_FUNC_PWRAP_SPIDI (MTK_PIN_NO(1) | 1)
#define MT7623_PIN_1_PWRAP_SPI0_MO_FUNC_PWRAP_SPIDO (MTK_PIN_NO(1) | 2)

#define MT7623_PIN_2_PWRAP_INT_FUNC_GPIO2 (MTK_PIN_NO(2) | 0)
#define MT7623_PIN_2_PWRAP_INT_FUNC_PWRAP_INT (MTK_PIN_NO(2) | 1)

#define MT7623_PIN_3_PWRAP_SPI0_CK_FUNC_GPIO3 (MTK_PIN_NO(3) | 0)
#define MT7623_PIN_3_PWRAP_SPI0_CK_FUNC_PWRAP_SPICK_I (MTK_PIN_NO(3) | 1)

#define MT7623_PIN_4_PWRAP_SPI0_CSN_FUNC_GPIO4 (MTK_PIN_NO(4) | 0)
#define MT7623_PIN_4_PWRAP_SPI0_CSN_FUNC_PWRAP_SPICS_B_I (MTK_PIN_NO(4) | 1)

#define MT7623_PIN_5_PWRAP_SPI0_CK2_FUNC_GPIO5 (MTK_PIN_NO(5) | 0)
#define MT7623_PIN_5_PWRAP_SPI0_CK2_FUNC_PWRAP_SPICK2_I (MTK_PIN_NO(5) | 1)

#define MT7623_PIN_6_PWRAP_SPI0_CSN2_FUNC_GPIO6 (MTK_PIN_NO(6) | 0)
#define MT7623_PIN_6_PWRAP_SPI0_CSN2_FUNC_PWRAP_SPICS2_B_I (MTK_PIN_NO(6) | 1)

#define MT7623_PIN_7_SPI1_CSN_FUNC_GPIO7 (MTK_PIN_NO(7) | 0)
#define MT7623_PIN_7_SPI1_CSN_FUNC_SPI1_CS (MTK_PIN_NO(7) | 1)

#define MT7623_PIN_8_SPI1_MI_FUNC_GPIO8 (MTK_PIN_NO(8) | 0)
#define MT7623_PIN_8_SPI1_MI_FUNC_SPI1_MI (MTK_PIN_NO(8) | 1)
#define MT7623_PIN_8_SPI1_MI_FUNC_SPI1_MO (MTK_PIN_NO(8) | 2)

#define MT7623_PIN_9_SPI1_MO_FUNC_GPIO9 (MTK_PIN_NO(9) | 0)
#define MT7623_PIN_9_SPI1_MO_FUNC_SPI1_MO (MTK_PIN_NO(9) | 1)
#define MT7623_PIN_9_SPI1_MO_FUNC_SPI1_MI (MTK_PIN_NO(9) | 2)

#define MT7623_PIN_10_RTC32K_CK_FUNC_GPIO10 (MTK_PIN_NO(10) | 0)
#define MT7623_PIN_10_RTC32K_CK_FUNC_RTC32K_CK (MTK_PIN_NO(10) | 1)

#define MT7623_PIN_11_WATCHDOG_FUNC_GPIO11 (MTK_PIN_NO(11) | 0)
#define MT7623_PIN_11_WATCHDOG_FUNC_WATCHDOG (MTK_PIN_NO(11) | 1)

#define MT7623_PIN_12_SRCLKENA_FUNC_GPIO12 (MTK_PIN_NO(12) | 0)
#define MT7623_PIN_12_SRCLKENA_FUNC_SRCLKENA (MTK_PIN_NO(12) | 1)

#define MT7623_PIN_13_SRCLKENAI_FUNC_GPIO13 (MTK_PIN_NO(13) | 0)
#define MT7623_PIN_13_SRCLKENAI_FUNC_SRCLKENAI (MTK_PIN_NO(13) | 1)

#define MT7623_PIN_14_GPIO14_FUNC_GPIO14 (MTK_PIN_NO(14) | 0)
#define MT7623_PIN_14_GPIO14_FUNC_URXD2 (MTK_PIN_NO(14) | 1)
#define MT7623_PIN_14_GPIO14_FUNC_UTXD2 (MTK_PIN_NO(14) | 2)

#define MT7623_PIN_15_GPIO15_FUNC_GPIO15 (MTK_PIN_NO(15) | 0)
#define MT7623_PIN_15_GPIO15_FUNC_UTXD2 (MTK_PIN_NO(15) | 1)
#define MT7623_PIN_15_GPIO15_FUNC_URXD2 (MTK_PIN_NO(15) | 2)

#define MT7623_PIN_18_PCM_CLK_FUNC_GPIO18 (MTK_PIN_NO(18) | 0)
#define MT7623_PIN_18_PCM_CLK_FUNC_PCM_CLK0 (MTK_PIN_NO(18) | 1)
#define MT7623_PIN_18_PCM_CLK_FUNC_AP_PCM_CLKO (MTK_PIN_NO(18) | 6)

#define MT7623_PIN_19_PCM_SYNC_FUNC_GPIO19 (MTK_PIN_NO(19) | 0)
#define MT7623_PIN_19_PCM_SYNC_FUNC_PCM_SYNC (MTK_PIN_NO(19) | 1)
#define MT7623_PIN_19_PCM_SYNC_FUNC_AP_PCM_SYNC (MTK_PIN_NO(19) | 6)

#define MT7623_PIN_20_PCM_RX_FUNC_GPIO20 (MTK_PIN_NO(20) | 0)
#define MT7623_PIN_20_PCM_RX_FUNC_PCM_RX (MTK_PIN_NO(20) | 1)
#define MT7623_PIN_20_PCM_RX_FUNC_PCM_TX (MTK_PIN_NO(20) | 4)
#define MT7623_PIN_20_PCM_RX_FUNC_AP_PCM_RX (MTK_PIN_NO(20) | 6)

#define MT7623_PIN_21_PCM_TX_FUNC_GPIO21 (MTK_PIN_NO(21) | 0)
#define MT7623_PIN_21_PCM_TX_FUNC_PCM_TX (MTK_PIN_NO(21) | 1)
#define MT7623_PIN_21_PCM_TX_FUNC_PCM_RX (MTK_PIN_NO(21) | 4)
#define MT7623_PIN_21_PCM_TX_FUNC_AP_PCM_TX (MTK_PIN_NO(21) | 6)

#define MT7623_PIN_22_EINT0_FUNC_GPIO22 (MTK_PIN_NO(22) | 0)
#define MT7623_PIN_22_EINT0_FUNC_UCTS0 (MTK_PIN_NO(22) | 1)
#define MT7623_PIN_22_EINT0_FUNC_PCIE0_PERST_N (MTK_PIN_NO(22) | 2)

#define MT7623_PIN_23_EINT1_FUNC_GPIO23 (MTK_PIN_NO(23) | 0)
#define MT7623_PIN_23_EINT1_FUNC_URTS0 (MTK_PIN_NO(23) | 1)
#define MT7623_PIN_23_EINT1_FUNC_PCIE1_PERST_N (MTK_PIN_NO(23) | 2)

#define MT7623_PIN_24_EINT2_FUNC_GPIO24 (MTK_PIN_NO(24) | 0)
#define MT7623_PIN_24_EINT2_FUNC_UCTS1 (MTK_PIN_NO(24) | 1)
#define MT7623_PIN_24_EINT2_FUNC_PCIE2_PERST_N (MTK_PIN_NO(24) | 2)

#define MT7623_PIN_25_EINT3_FUNC_GPIO25 (MTK_PIN_NO(25) | 0)
#define MT7623_PIN_25_EINT3_FUNC_URTS1 (MTK_PIN_NO(25) | 1)

#define MT7623_PIN_26_EINT4_FUNC_GPIO26 (MTK_PIN_NO(26) | 0)
#define MT7623_PIN_26_EINT4_FUNC_UCTS3 (MTK_PIN_NO(26) | 1)
#define MT7623_PIN_26_EINT4_FUNC_PCIE2_WAKE_N (MTK_PIN_NO(26) | 6)

#define MT7623_PIN_27_EINT5_FUNC_GPIO27 (MTK_PIN_NO(27) | 0)
#define MT7623_PIN_27_EINT5_FUNC_URTS3 (MTK_PIN_NO(27) | 1)
#define MT7623_PIN_27_EINT5_FUNC_PCIE1_WAKE_N (MTK_PIN_NO(27) | 6)

#define MT7623_PIN_28_EINT6_FUNC_GPIO28 (MTK_PIN_NO(28) | 0)
#define MT7623_PIN_28_EINT6_FUNC_DRV_VBUS (MTK_PIN_NO(28) | 1)
#define MT7623_PIN_28_EINT6_FUNC_PCIE0_WAKE_N (MTK_PIN_NO(28) | 6)

#define MT7623_PIN_29_EINT7_FUNC_GPIO29 (MTK_PIN_NO(29) | 0)
#define MT7623_PIN_29_EINT7_FUNC_IDDIG (MTK_PIN_NO(29) | 1)
#define MT7623_PIN_29_EINT7_FUNC_MSDC1_WP (MTK_PIN_NO(29) | 2)
#define MT7623_PIN_29_EINT7_FUNC_PCIE2_PERST_N (MTK_PIN_NO(29) | 6)

#define MT7623_PIN_33_I2S1_DATA_FUNC_GPIO33 (MTK_PIN_NO(33) | 0)
#define MT7623_PIN_33_I2S1_DATA_FUNC_I2S1_DATA (MTK_PIN_NO(33) | 1)
#define MT7623_PIN_33_I2S1_DATA_FUNC_PCM_TX (MTK_PIN_NO(33) | 3)
#define MT7623_PIN_33_I2S1_DATA_FUNC_AP_PCM_TX (MTK_PIN_NO(33) | 6)

#define MT7623_PIN_34_I2S1_DATA_IN_FUNC_GPIO34 (MTK_PIN_NO(34) | 0)
#define MT7623_PIN_34_I2S1_DATA_IN_FUNC_I2S1_DATA_IN (MTK_PIN_NO(34) | 1)
#define MT7623_PIN_34_I2S1_DATA_IN_FUNC_PCM_RX (MTK_PIN_NO(34) | 3)
#define MT7623_PIN_34_I2S1_DATA_IN_FUNC_AP_PCM_RX (MTK_PIN_NO(34) | 6)

#define MT7623_PIN_35_I2S1_BCK_FUNC_GPIO35 (MTK_PIN_NO(35) | 0)
#define MT7623_PIN_35_I2S1_BCK_FUNC_I2S1_BCK (MTK_PIN_NO(35) | 1)
#define MT7623_PIN_35_I2S1_BCK_FUNC_PCM_CLK0 (MTK_PIN_NO(35) | 3)
#define MT7623_PIN_35_I2S1_BCK_FUNC_AP_PCM_CLKO (MTK_PIN_NO(35) | 6)

#define MT7623_PIN_36_I2S1_LRCK_FUNC_GPIO36 (MTK_PIN_NO(36) | 0)
#define MT7623_PIN_36_I2S1_LRCK_FUNC_I2S1_LRCK (MTK_PIN_NO(36) | 1)
#define MT7623_PIN_36_I2S1_LRCK_FUNC_PCM_SYNC (MTK_PIN_NO(36) | 3)
#define MT7623_PIN_36_I2S1_LRCK_FUNC_AP_PCM_SYNC (MTK_PIN_NO(36) | 6)

#define MT7623_PIN_37_I2S1_MCLK_FUNC_GPIO37 (MTK_PIN_NO(37) | 0)
#define MT7623_PIN_37_I2S1_MCLK_FUNC_I2S1_MCLK (MTK_PIN_NO(37) | 1)

#define MT7623_PIN_39_JTMS_FUNC_GPIO39 (MTK_PIN_NO(39) | 0)
#define MT7623_PIN_39_JTMS_FUNC_JTMS (MTK_PIN_NO(39) | 1)

#define MT7623_PIN_40_JTCK_FUNC_GPIO40 (MTK_PIN_NO(40) | 0)
#define MT7623_PIN_40_JTCK_FUNC_JTCK (MTK_PIN_NO(40) | 1)

#define MT7623_PIN_41_JTDI_FUNC_GPIO41 (MTK_PIN_NO(41) | 0)
#define MT7623_PIN_41_JTDI_FUNC_JTDI (MTK_PIN_NO(41) | 1)

#define MT7623_PIN_42_JTDO_FUNC_GPIO42 (MTK_PIN_NO(42) | 0)
#define MT7623_PIN_42_JTDO_FUNC_JTDO (MTK_PIN_NO(42) | 1)

#define MT7623_PIN_43_NCLE_FUNC_GPIO43 (MTK_PIN_NO(43) | 0)
#define MT7623_PIN_43_NCLE_FUNC_NCLE (MTK_PIN_NO(43) | 1)
#define MT7623_PIN_43_NCLE_FUNC_EXT_XCS2 (MTK_PIN_NO(43) | 2)

#define MT7623_PIN_44_NCEB1_FUNC_GPIO44 (MTK_PIN_NO(44) | 0)
#define MT7623_PIN_44_NCEB1_FUNC_NCEB1 (MTK_PIN_NO(44) | 1)
#define MT7623_PIN_44_NCEB1_FUNC_IDDIG (MTK_PIN_NO(44) | 2)

#define MT7623_PIN_45_NCEB0_FUNC_GPIO45 (MTK_PIN_NO(45) | 0)
#define MT7623_PIN_45_NCEB0_FUNC_NCEB0 (MTK_PIN_NO(45) | 1)
#define MT7623_PIN_45_NCEB0_FUNC_DRV_VBUS (MTK_PIN_NO(45) | 2)

#define MT7623_PIN_46_IR_FUNC_GPIO46 (MTK_PIN_NO(46) | 0)
#define MT7623_PIN_46_IR_FUNC_IR (MTK_PIN_NO(46) | 1)

#define MT7623_PIN_47_NREB_FUNC_GPIO47 (MTK_PIN_NO(47) | 0)
#define MT7623_PIN_47_NREB_FUNC_NREB (MTK_PIN_NO(47) | 1)

#define MT7623_PIN_48_NRNB_FUNC_GPIO48 (MTK_PIN_NO(48) | 0)
#define MT7623_PIN_48_NRNB_FUNC_NRNB (MTK_PIN_NO(48) | 1)

#define MT7623_PIN_49_I2S0_DATA_FUNC_GPIO49 (MTK_PIN_NO(49) | 0)
#define MT7623_PIN_49_I2S0_DATA_FUNC_I2S0_DATA (MTK_PIN_NO(49) | 1)
#define MT7623_PIN_49_I2S0_DATA_FUNC_PCM_TX (MTK_PIN_NO(49) | 3)
#define MT7623_PIN_49_I2S0_DATA_FUNC_AP_I2S_DO (MTK_PIN_NO(49) | 6)

#define MT7623_PIN_53_SPI0_CSN_FUNC_GPIO53 (MTK_PIN_NO(53) | 0)
#define MT7623_PIN_53_SPI0_CSN_FUNC_SPI0_CS (MTK_PIN_NO(53) | 1)
#define MT7623_PIN_53_SPI0_CSN_FUNC_PWM1 (MTK_PIN_NO(53) | 5)

#define MT7623_PIN_54_SPI0_CK_FUNC_GPIO54 (MTK_PIN_NO(54) | 0)
#define MT7623_PIN_54_SPI0_CK_FUNC_SPI0_CK (MTK_PIN_NO(54) | 1)

#define MT7623_PIN_55_SPI0_MI_FUNC_GPIO55 (MTK_PIN_NO(55) | 0)
#define MT7623_PIN_55_SPI0_MI_FUNC_SPI0_MI (MTK_PIN_NO(55) | 1)
#define MT7623_PIN_55_SPI0_MI_FUNC_SPI0_MO (MTK_PIN_NO(55) | 2)
#define MT7623_PIN_55_SPI0_MI_FUNC_MSDC1_WP (MTK_PIN_NO(55) | 3)
#define MT7623_PIN_55_SPI0_MI_FUNC_PWM2 (MTK_PIN_NO(55) | 5)

#define MT7623_PIN_56_SPI0_MO_FUNC_GPIO56 (MTK_PIN_NO(56) | 0)
#define MT7623_PIN_56_SPI0_MO_FUNC_SPI0_MO (MTK_PIN_NO(56) | 1)
#define MT7623_PIN_56_SPI0_MO_FUNC_SPI0_MI (MTK_PIN_NO(56) | 2)

#define MT7623_PIN_57_SDA1_FUNC_GPIO57 (MTK_PIN_NO(57) | 0)
#define MT7623_PIN_57_SDA1_FUNC_SDA1 (MTK_PIN_NO(57) | 1)

#define MT7623_PIN_58_SCL1_FUNC_GPIO58 (MTK_PIN_NO(58) | 0)
#define MT7623_PIN_58_SCL1_FUNC_SCL1 (MTK_PIN_NO(58) | 1)

#define MT7623_PIN_60_WB_RSTB_FUNC_GPIO60 (MTK_PIN_NO(60) | 0)
#define MT7623_PIN_60_WB_RSTB_FUNC_WB_RSTB (MTK_PIN_NO(60) | 1)

#define MT7623_PIN_61_GPIO61_FUNC_GPIO61 (MTK_PIN_NO(61) | 0)
#define MT7623_PIN_61_GPIO61_FUNC_TEST_FD (MTK_PIN_NO(61) | 1)

#define MT7623_PIN_62_GPIO62_FUNC_GPIO62 (MTK_PIN_NO(62) | 0)
#define MT7623_PIN_62_GPIO62_FUNC_TEST_FC (MTK_PIN_NO(62) | 1)

#define MT7623_PIN_63_WB_SCLK_FUNC_GPIO63 (MTK_PIN_NO(63) | 0)
#define MT7623_PIN_63_WB_SCLK_FUNC_WB_SCLK (MTK_PIN_NO(63) | 1)

#define MT7623_PIN_64_WB_SDATA_FUNC_GPIO64 (MTK_PIN_NO(64) | 0)
#define MT7623_PIN_64_WB_SDATA_FUNC_WB_SDATA (MTK_PIN_NO(64) | 1)

#define MT7623_PIN_65_WB_SEN_FUNC_GPIO65 (MTK_PIN_NO(65) | 0)
#define MT7623_PIN_65_WB_SEN_FUNC_WB_SEN (MTK_PIN_NO(65) | 1)

#define MT7623_PIN_66_WB_CRTL0_FUNC_GPIO66 (MTK_PIN_NO(66) | 0)
#define MT7623_PIN_66_WB_CRTL0_FUNC_WB_CRTL0 (MTK_PIN_NO(66) | 1)

#define MT7623_PIN_67_WB_CRTL1_FUNC_GPIO67 (MTK_PIN_NO(67) | 0)
#define MT7623_PIN_67_WB_CRTL1_FUNC_WB_CRTL1 (MTK_PIN_NO(67) | 1)

#define MT7623_PIN_68_WB_CRTL2_FUNC_GPIO68 (MTK_PIN_NO(68) | 0)
#define MT7623_PIN_68_WB_CRTL2_FUNC_WB_CRTL2 (MTK_PIN_NO(68) | 1)

#define MT7623_PIN_69_WB_CRTL3_FUNC_GPIO69 (MTK_PIN_NO(69) | 0)
#define MT7623_PIN_69_WB_CRTL3_FUNC_WB_CRTL3 (MTK_PIN_NO(69) | 1)

#define MT7623_PIN_70_WB_CRTL4_FUNC_GPIO70 (MTK_PIN_NO(70) | 0)
#define MT7623_PIN_70_WB_CRTL4_FUNC_WB_CRTL4 (MTK_PIN_NO(70) | 1)

#define MT7623_PIN_71_WB_CRTL5_FUNC_GPIO71 (MTK_PIN_NO(71) | 0)
#define MT7623_PIN_71_WB_CRTL5_FUNC_WB_CRTL5 (MTK_PIN_NO(71) | 1)

#define MT7623_PIN_72_I2S0_DATA_IN_FUNC_GPIO72 (MTK_PIN_NO(72) | 0)
#define MT7623_PIN_72_I2S0_DATA_IN_FUNC_I2S0_DATA_IN (MTK_PIN_NO(72) | 1)
#define MT7623_PIN_72_I2S0_DATA_IN_FUNC_PCM_RX (MTK_PIN_NO(72) | 3)
#define MT7623_PIN_72_I2S0_DATA_IN_FUNC_PWM0 (MTK_PIN_NO(72) | 4)
#define MT7623_PIN_72_I2S0_DATA_IN_FUNC_DISP_PWM (MTK_PIN_NO(72) | 5)
#define MT7623_PIN_72_I2S0_DATA_IN_FUNC_AP_I2S_DI (MTK_PIN_NO(72) | 6)

#define MT7623_PIN_73_I2S0_LRCK_FUNC_GPIO73 (MTK_PIN_NO(73) | 0)
#define MT7623_PIN_73_I2S0_LRCK_FUNC_I2S0_LRCK (MTK_PIN_NO(73) | 1)
#define MT7623_PIN_73_I2S0_LRCK_FUNC_PCM_SYNC (MTK_PIN_NO(73) | 3)
#define MT7623_PIN_73_I2S0_LRCK_FUNC_AP_I2S_LRCK (MTK_PIN_NO(73) | 6)

#define MT7623_PIN_74_I2S0_BCK_FUNC_GPIO74 (MTK_PIN_NO(74) | 0)
#define MT7623_PIN_74_I2S0_BCK_FUNC_I2S0_BCK (MTK_PIN_NO(74) | 1)
#define MT7623_PIN_74_I2S0_BCK_FUNC_PCM_CLK0 (MTK_PIN_NO(74) | 3)
#define MT7623_PIN_74_I2S0_BCK_FUNC_AP_I2S_BCK (MTK_PIN_NO(74) | 6)

#define MT7623_PIN_75_SDA0_FUNC_GPIO75 (MTK_PIN_NO(75) | 0)
#define MT7623_PIN_75_SDA0_FUNC_SDA0 (MTK_PIN_NO(75) | 1)

#define MT7623_PIN_76_SCL0_FUNC_GPIO76 (MTK_PIN_NO(76) | 0)
#define MT7623_PIN_76_SCL0_FUNC_SCL0 (MTK_PIN_NO(76) | 1)

#define MT7623_PIN_77_SDA2_FUNC_GPIO77 (MTK_PIN_NO(77) | 0)
#define MT7623_PIN_77_SDA2_FUNC_SDA2 (MTK_PIN_NO(77) | 1)

#define MT7623_PIN_78_SCL2_FUNC_GPIO78 (MTK_PIN_NO(78) | 0)
#define MT7623_PIN_78_SCL2_FUNC_SCL2 (MTK_PIN_NO(78) | 1)

#define MT7623_PIN_83_LCM_RST_FUNC_GPIO83 (MTK_PIN_NO(83) | 0)
#define MT7623_PIN_83_LCM_RST_FUNC_LCM_RST (MTK_PIN_NO(83) | 1)

#define MT7623_PIN_84_DSI_TE_FUNC_GPIO84 (MTK_PIN_NO(84) | 0)
#define MT7623_PIN_84_DSI_TE_FUNC_DSI_TE (MTK_PIN_NO(84) | 1)

#define MT7623_PIN_95_MIPI_TCN_FUNC_GPIO95 (MTK_PIN_NO(95) | 0)
#define MT7623_PIN_95_MIPI_TCN_FUNC_TCN (MTK_PIN_NO(95) | 1)

#define MT7623_PIN_96_MIPI_TCP_FUNC_GPIO96 (MTK_PIN_NO(96) | 0)
#define MT7623_PIN_96_MIPI_TCP_FUNC_TCP (MTK_PIN_NO(96) | 1)

#define MT7623_PIN_97_MIPI_TDN1_FUNC_GPIO97 (MTK_PIN_NO(97) | 0)
#define MT7623_PIN_97_MIPI_TDN1_FUNC_TDN1 (MTK_PIN_NO(97) | 1)

#define MT7623_PIN_98_MIPI_TDP1_FUNC_GPIO98 (MTK_PIN_NO(98) | 0)
#define MT7623_PIN_98_MIPI_TDP1_FUNC_TDP1 (MTK_PIN_NO(98) | 1)

#define MT7623_PIN_99_MIPI_TDN0_FUNC_GPIO99 (MTK_PIN_NO(99) | 0)
#define MT7623_PIN_99_MIPI_TDN0_FUNC_TDN0 (MTK_PIN_NO(99) | 1)

#define MT7623_PIN_100_MIPI_TDP0_FUNC_GPIO100 (MTK_PIN_NO(100) | 0)
#define MT7623_PIN_100_MIPI_TDP0_FUNC_TDP0 (MTK_PIN_NO(100) | 1)

#define MT7623_PIN_105_MSDC1_CMD_FUNC_GPIO105 (MTK_PIN_NO(105) | 0)
#define MT7623_PIN_105_MSDC1_CMD_FUNC_MSDC1_CMD (MTK_PIN_NO(105) | 1)
#define MT7623_PIN_105_MSDC1_CMD_FUNC_SDA1 (MTK_PIN_NO(105) | 3)
#define MT7623_PIN_105_MSDC1_CMD_FUNC_I2SOUT_BCK (MTK_PIN_NO(105) | 6)

#define MT7623_PIN_106_MSDC1_CLK_FUNC_GPIO106 (MTK_PIN_NO(106) | 0)
#define MT7623_PIN_106_MSDC1_CLK_FUNC_MSDC1_CLK (MTK_PIN_NO(106) | 1)
#define MT7623_PIN_106_MSDC1_CLK_FUNC_SCL1 (MTK_PIN_NO(106) | 3)
#define MT7623_PIN_106_MSDC1_CLK_FUNC_I2SOUT_LRCK (MTK_PIN_NO(106) | 6)

#define MT7623_PIN_107_MSDC1_DAT0_FUNC_GPIO107 (MTK_PIN_NO(107) | 0)
#define MT7623_PIN_107_MSDC1_DAT0_FUNC_MSDC1_DAT0 (MTK_PIN_NO(107) | 1)
#define MT7623_PIN_107_MSDC1_DAT0_FUNC_UTXD0 (MTK_PIN_NO(107) | 5)
#define MT7623_PIN_107_MSDC1_DAT0_FUNC_I2SOUT_DATA_OUT (MTK_PIN_NO(107) | 6)

#define MT7623_PIN_108_MSDC1_DAT1_FUNC_GPIO108 (MTK_PIN_NO(108) | 0)
#define MT7623_PIN_108_MSDC1_DAT1_FUNC_MSDC1_DAT1 (MTK_PIN_NO(108) | 1)
#define MT7623_PIN_108_MSDC1_DAT1_FUNC_PWM0 (MTK_PIN_NO(108) | 3)
#define MT7623_PIN_108_MSDC1_DAT1_FUNC_URXD0 (MTK_PIN_NO(108) | 5)
#define MT7623_PIN_108_MSDC1_DAT1_FUNC_PWM1 (MTK_PIN_NO(108) | 6)

#define MT7623_PIN_109_MSDC1_DAT2_FUNC_GPIO109 (MTK_PIN_NO(109) | 0)
#define MT7623_PIN_109_MSDC1_DAT2_FUNC_MSDC1_DAT2 (MTK_PIN_NO(109) | 1)
#define MT7623_PIN_109_MSDC1_DAT2_FUNC_SDA2 (MTK_PIN_NO(109) | 3)
#define MT7623_PIN_109_MSDC1_DAT2_FUNC_UTXD1 (MTK_PIN_NO(109) | 5)
#define MT7623_PIN_109_MSDC1_DAT2_FUNC_PWM2 (MTK_PIN_NO(109) | 6)

#define MT7623_PIN_110_MSDC1_DAT3_FUNC_GPIO110 (MTK_PIN_NO(110) | 0)
#define MT7623_PIN_110_MSDC1_DAT3_FUNC_MSDC1_DAT3 (MTK_PIN_NO(110) | 1)
#define MT7623_PIN_110_MSDC1_DAT3_FUNC_SCL2 (MTK_PIN_NO(110) | 3)
#define MT7623_PIN_110_MSDC1_DAT3_FUNC_URXD1 (MTK_PIN_NO(110) | 5)
#define MT7623_PIN_110_MSDC1_DAT3_FUNC_PWM3 (MTK_PIN_NO(110) | 6)

#define MT7623_PIN_111_MSDC0_DAT7_FUNC_GPIO111 (MTK_PIN_NO(111) | 0)
#define MT7623_PIN_111_MSDC0_DAT7_FUNC_MSDC0_DAT7 (MTK_PIN_NO(111) | 1)
#define MT7623_PIN_111_MSDC0_DAT7_FUNC_NLD7 (MTK_PIN_NO(111) | 4)

#define MT7623_PIN_112_MSDC0_DAT6_FUNC_GPIO112 (MTK_PIN_NO(112) | 0)
#define MT7623_PIN_112_MSDC0_DAT6_FUNC_MSDC0_DAT6 (MTK_PIN_NO(112) | 1)
#define MT7623_PIN_112_MSDC0_DAT6_FUNC_NLD6 (MTK_PIN_NO(112) | 4)

#define MT7623_PIN_113_MSDC0_DAT5_FUNC_GPIO113 (MTK_PIN_NO(113) | 0)
#define MT7623_PIN_113_MSDC0_DAT5_FUNC_MSDC0_DAT5 (MTK_PIN_NO(113) | 1)
#define MT7623_PIN_113_MSDC0_DAT5_FUNC_NLD5 (MTK_PIN_NO(113) | 4)

#define MT7623_PIN_114_MSDC0_DAT4_FUNC_GPIO114 (MTK_PIN_NO(114) | 0)
#define MT7623_PIN_114_MSDC0_DAT4_FUNC_MSDC0_DAT4 (MTK_PIN_NO(114) | 1)
#define MT7623_PIN_114_MSDC0_DAT4_FUNC_NLD4 (MTK_PIN_NO(114) | 4)

#define MT7623_PIN_115_MSDC0_RSTB_FUNC_GPIO115 (MTK_PIN_NO(115) | 0)
#define MT7623_PIN_115_MSDC0_RSTB_FUNC_MSDC0_RSTB (MTK_PIN_NO(115) | 1)
#define MT7623_PIN_115_MSDC0_RSTB_FUNC_NLD8 (MTK_PIN_NO(115) | 4)

#define MT7623_PIN_116_MSDC0_CMD_FUNC_GPIO116 (MTK_PIN_NO(116) | 0)
#define MT7623_PIN_116_MSDC0_CMD_FUNC_MSDC0_CMD (MTK_PIN_NO(116) | 1)
#define MT7623_PIN_116_MSDC0_CMD_FUNC_NALE (MTK_PIN_NO(116) | 4)

#define MT7623_PIN_117_MSDC0_CLK_FUNC_GPIO117 (MTK_PIN_NO(117) | 0)
#define MT7623_PIN_117_MSDC0_CLK_FUNC_MSDC0_CLK (MTK_PIN_NO(117) | 1)
#define MT7623_PIN_117_MSDC0_CLK_FUNC_NWEB (MTK_PIN_NO(117) | 4)

#define MT7623_PIN_118_MSDC0_DAT3_FUNC_GPIO118 (MTK_PIN_NO(118) | 0)
#define MT7623_PIN_118_MSDC0_DAT3_FUNC_MSDC0_DAT3 (MTK_PIN_NO(118) | 1)
#define MT7623_PIN_118_MSDC0_DAT3_FUNC_NLD3 (MTK_PIN_NO(118) | 4)

#define MT7623_PIN_119_MSDC0_DAT2_FUNC_GPIO119 (MTK_PIN_NO(119) | 0)
#define MT7623_PIN_119_MSDC0_DAT2_FUNC_MSDC0_DAT2 (MTK_PIN_NO(119) | 1)
#define MT7623_PIN_119_MSDC0_DAT2_FUNC_NLD2 (MTK_PIN_NO(119) | 4)

#define MT7623_PIN_120_MSDC0_DAT1_FUNC_GPIO120 (MTK_PIN_NO(120) | 0)
#define MT7623_PIN_120_MSDC0_DAT1_FUNC_MSDC0_DAT1 (MTK_PIN_NO(120) | 1)
#define MT7623_PIN_120_MSDC0_DAT1_FUNC_NLD1 (MTK_PIN_NO(120) | 4)

#define MT7623_PIN_121_MSDC0_DAT0_FUNC_GPIO121 (MTK_PIN_NO(121) | 0)
#define MT7623_PIN_121_MSDC0_DAT0_FUNC_MSDC0_DAT0 (MTK_PIN_NO(121) | 1)
#define MT7623_PIN_121_MSDC0_DAT0_FUNC_NLD0 (MTK_PIN_NO(121) | 4)
#define MT7623_PIN_121_MSDC0_DAT0_FUNC_WATCHDOG (MTK_PIN_NO(121) | 5)

#define MT7623_PIN_122_CEC_FUNC_GPIO122 (MTK_PIN_NO(122) | 0)
#define MT7623_PIN_122_CEC_FUNC_CEC (MTK_PIN_NO(122) | 1)
#define MT7623_PIN_122_CEC_FUNC_SDA2 (MTK_PIN_NO(122) | 4)
#define MT7623_PIN_122_CEC_FUNC_URXD0 (MTK_PIN_NO(122) | 5)

#define MT7623_PIN_123_HTPLG_FUNC_GPIO123 (MTK_PIN_NO(123) | 0)
#define MT7623_PIN_123_HTPLG_FUNC_HTPLG (MTK_PIN_NO(123) | 1)
#define MT7623_PIN_123_HTPLG_FUNC_SCL2 (MTK_PIN_NO(123) | 4)
#define MT7623_PIN_123_HTPLG_FUNC_UTXD0 (MTK_PIN_NO(123) | 5)

#define MT7623_PIN_124_HDMISCK_FUNC_GPIO124 (MTK_PIN_NO(124) | 0)
#define MT7623_PIN_124_HDMISCK_FUNC_HDMISCK (MTK_PIN_NO(124) | 1)
#define MT7623_PIN_124_HDMISCK_FUNC_SDA1 (MTK_PIN_NO(124) | 4)
#define MT7623_PIN_124_HDMISCK_FUNC_PWM3 (MTK_PIN_NO(124) | 5)

#define MT7623_PIN_125_HDMISD_FUNC_GPIO125 (MTK_PIN_NO(125) | 0)
#define MT7623_PIN_125_HDMISD_FUNC_HDMISD (MTK_PIN_NO(125) | 1)
#define MT7623_PIN_125_HDMISD_FUNC_SCL1 (MTK_PIN_NO(125) | 4)
#define MT7623_PIN_125_HDMISD_FUNC_PWM4 (MTK_PIN_NO(125) | 5)

#define MT7623_PIN_126_I2S0_MCLK_FUNC_GPIO126 (MTK_PIN_NO(126) | 0)
#define MT7623_PIN_126_I2S0_MCLK_FUNC_I2S0_MCLK (MTK_PIN_NO(126) | 1)
#define MT7623_PIN_126_I2S0_MCLK_FUNC_AP_I2S_MCLK (MTK_PIN_NO(126) | 6)

#define MT7623_PIN_199_SPI1_CK_FUNC_GPIO199 (MTK_PIN_NO(199) | 0)
#define MT7623_PIN_199_SPI1_CK_FUNC_SPI1_CK (MTK_PIN_NO(199) | 1)

#define MT7623_PIN_200_URXD2_FUNC_GPIO200 (MTK_PIN_NO(200) | 0)
#define MT7623_PIN_200_URXD2_FUNC_URXD2 (MTK_PIN_NO(200) | 6)

#define MT7623_PIN_201_UTXD2_FUNC_GPIO201 (MTK_PIN_NO(201) | 0)
#define MT7623_PIN_201_UTXD2_FUNC_UTXD2 (MTK_PIN_NO(201) | 6)

#define MT7623_PIN_203_PWM0_FUNC_GPIO203 (MTK_PIN_NO(203) | 0)
#define MT7623_PIN_203_PWM0_FUNC_PWM0 (MTK_PIN_NO(203) | 1)
#define MT7623_PIN_203_PWM0_FUNC_DISP_PWM (MTK_PIN_NO(203) | 2)

#define MT7623_PIN_204_PWM1_FUNC_GPIO204 (MTK_PIN_NO(204) | 0)
#define MT7623_PIN_204_PWM1_FUNC_PWM1 (MTK_PIN_NO(204) | 1)

#define MT7623_PIN_205_PWM2_FUNC_GPIO205 (MTK_PIN_NO(205) | 0)
#define MT7623_PIN_205_PWM2_FUNC_PWM2 (MTK_PIN_NO(205) | 1)

#define MT7623_PIN_206_PWM3_FUNC_GPIO206 (MTK_PIN_NO(206) | 0)
#define MT7623_PIN_206_PWM3_FUNC_PWM3 (MTK_PIN_NO(206) | 1)

#define MT7623_PIN_207_PWM4_FUNC_GPIO207 (MTK_PIN_NO(207) | 0)
#define MT7623_PIN_207_PWM4_FUNC_PWM4 (MTK_PIN_NO(207) | 1)

#define MT7623_PIN_208_AUD_EXT_CK1_FUNC_GPIO208 (MTK_PIN_NO(208) | 0)
#define MT7623_PIN_208_AUD_EXT_CK1_FUNC_AUD_EXT_CK1 (MTK_PIN_NO(208) | 1)
#define MT7623_PIN_208_AUD_EXT_CK1_FUNC_PWM0 (MTK_PIN_NO(208) | 2)
#define MT7623_PIN_208_AUD_EXT_CK1_FUNC_PCIE0_PERST_N (MTK_PIN_NO(208) | 3)
#define MT7623_PIN_208_AUD_EXT_CK1_FUNC_DISP_PWM (MTK_PIN_NO(208) | 5)

#define MT7623_PIN_209_AUD_EXT_CK2_FUNC_GPIO209 (MTK_PIN_NO(209) | 0)
#define MT7623_PIN_209_AUD_EXT_CK2_FUNC_AUD_EXT_CK2 (MTK_PIN_NO(209) | 1)
#define MT7623_PIN_209_AUD_EXT_CK2_FUNC_MSDC1_WP (MTK_PIN_NO(209) | 2)
#define MT7623_PIN_209_AUD_EXT_CK2_FUNC_PCIE1_PERST_N (MTK_PIN_NO(209) | 3)
#define MT7623_PIN_209_AUD_EXT_CK2_FUNC_PWM1 (MTK_PIN_NO(209) | 5)

#define MT7623_PIN_236_EXT_SDIO3_FUNC_GPIO236 (MTK_PIN_NO(236) | 0)
#define MT7623_PIN_236_EXT_SDIO3_FUNC_EXT_SDIO3 (MTK_PIN_NO(236) | 1)
#define MT7623_PIN_236_EXT_SDIO3_FUNC_IDDIG (MTK_PIN_NO(236) | 2)

#define MT7623_PIN_237_EXT_SDIO2_FUNC_GPIO237 (MTK_PIN_NO(237) | 0)
#define MT7623_PIN_237_EXT_SDIO2_FUNC_EXT_SDIO2 (MTK_PIN_NO(237) | 1)
#define MT7623_PIN_237_EXT_SDIO2_FUNC_DRV_VBUS (MTK_PIN_NO(237) | 2)

#define MT7623_PIN_238_EXT_SDIO1_FUNC_GPIO238 (MTK_PIN_NO(238) | 0)
#define MT7623_PIN_238_EXT_SDIO1_FUNC_EXT_SDIO1 (MTK_PIN_NO(238) | 1)

#define MT7623_PIN_239_EXT_SDIO0_FUNC_GPIO239 (MTK_PIN_NO(239) | 0)
#define MT7623_PIN_239_EXT_SDIO0_FUNC_EXT_SDIO0 (MTK_PIN_NO(239) | 1)

#define MT7623_PIN_240_EXT_XCS_FUNC_GPIO240 (MTK_PIN_NO(240) | 0)
#define MT7623_PIN_240_EXT_XCS_FUNC_EXT_XCS (MTK_PIN_NO(240) | 1)

#define MT7623_PIN_241_EXT_SCK_FUNC_GPIO241 (MTK_PIN_NO(241) | 0)
#define MT7623_PIN_241_EXT_SCK_FUNC_EXT_SCK (MTK_PIN_NO(241) | 1)

#define MT7623_PIN_242_URTS2_FUNC_GPIO242 (MTK_PIN_NO(242) | 0)
#define MT7623_PIN_242_URTS2_FUNC_URTS2 (MTK_PIN_NO(242) | 1)
#define MT7623_PIN_242_URTS2_FUNC_UTXD3 (MTK_PIN_NO(242) | 2)
#define MT7623_PIN_242_URTS2_FUNC_URXD3 (MTK_PIN_NO(242) | 3)
#define MT7623_PIN_242_URTS2_FUNC_SCL1 (MTK_PIN_NO(242) | 4)

#define MT7623_PIN_243_UCTS2_FUNC_GPIO243 (MTK_PIN_NO(243) | 0)
#define MT7623_PIN_243_UCTS2_FUNC_UCTS2 (MTK_PIN_NO(243) | 1)
#define MT7623_PIN_243_UCTS2_FUNC_URXD3 (MTK_PIN_NO(243) | 2)
#define MT7623_PIN_243_UCTS2_FUNC_UTXD3 (MTK_PIN_NO(243) | 3)
#define MT7623_PIN_243_UCTS2_FUNC_SDA1 (MTK_PIN_NO(243) | 4)

#define MT7623_PIN_250_GPIO250_FUNC_GPIO250 (MTK_PIN_NO(250) | 0)
#define MT7623_PIN_250_GPIO250_FUNC_TEST_MD7 (MTK_PIN_NO(250) | 1)
#define MT7623_PIN_250_GPIO250_FUNC_PCIE0_CLKREQ_N (MTK_PIN_NO(250) | 6)

#define MT7623_PIN_251_GPIO251_FUNC_GPIO251 (MTK_PIN_NO(251) | 0)
#define MT7623_PIN_251_GPIO251_FUNC_TEST_MD6 (MTK_PIN_NO(251) | 1)
#define MT7623_PIN_251_GPIO251_FUNC_PCIE0_WAKE_N (MTK_PIN_NO(251) | 6)

#define MT7623_PIN_252_GPIO252_FUNC_GPIO252 (MTK_PIN_NO(252) | 0)
#define MT7623_PIN_252_GPIO252_FUNC_TEST_MD5 (MTK_PIN_NO(252) | 1)
#define MT7623_PIN_252_GPIO252_FUNC_PCIE1_CLKREQ_N (MTK_PIN_NO(252) | 6)

#define MT7623_PIN_253_GPIO253_FUNC_GPIO253 (MTK_PIN_NO(253) | 0)
#define MT7623_PIN_253_GPIO253_FUNC_TEST_MD4 (MTK_PIN_NO(253) | 1)
#define MT7623_PIN_253_GPIO253_FUNC_PCIE1_WAKE_N (MTK_PIN_NO(253) | 6)

#define MT7623_PIN_254_GPIO254_FUNC_GPIO254 (MTK_PIN_NO(254) | 0)
#define MT7623_PIN_254_GPIO254_FUNC_TEST_MD3 (MTK_PIN_NO(254) | 1)
#define MT7623_PIN_254_GPIO254_FUNC_PCIE2_CLKREQ_N (MTK_PIN_NO(254) | 6)

#define MT7623_PIN_255_GPIO255_FUNC_GPIO255 (MTK_PIN_NO(255) | 0)
#define MT7623_PIN_255_GPIO255_FUNC_TEST_MD2 (MTK_PIN_NO(255) | 1)
#define MT7623_PIN_255_GPIO255_FUNC_PCIE2_WAKE_N (MTK_PIN_NO(255) | 6)

#define MT7623_PIN_256_GPIO256_FUNC_GPIO256 (MTK_PIN_NO(256) | 0)
#define MT7623_PIN_256_GPIO256_FUNC_TEST_MD1 (MTK_PIN_NO(256) | 1)

#define MT7623_PIN_257_GPIO257_FUNC_GPIO257 (MTK_PIN_NO(257) | 0)
#define MT7623_PIN_257_GPIO257_FUNC_TEST_MD0 (MTK_PIN_NO(257) | 1)

#define MT7623_PIN_261_MSDC1_INS_FUNC_GPIO261 (MTK_PIN_NO(261) | 0)
#define MT7623_PIN_261_MSDC1_INS_FUNC_MSDC1_INS (MTK_PIN_NO(261) | 1)

#define MT7623_PIN_262_G2_TXEN_FUNC_GPIO262 (MTK_PIN_NO(262) | 0)
#define MT7623_PIN_262_G2_TXEN_FUNC_G2_TXEN (MTK_PIN_NO(262) | 1)

#define MT7623_PIN_263_G2_TXD3_FUNC_GPIO263 (MTK_PIN_NO(263) | 0)
#define MT7623_PIN_263_G2_TXD3_FUNC_G2_TXD3 (MTK_PIN_NO(263) | 1)

#define MT7623_PIN_264_G2_TXD2_FUNC_GPIO264 (MTK_PIN_NO(264) | 0)
#define MT7623_PIN_264_G2_TXD2_FUNC_G2_TXD2 (MTK_PIN_NO(264) | 1)

#define MT7623_PIN_265_G2_TXD1_FUNC_GPIO265 (MTK_PIN_NO(265) | 0)
#define MT7623_PIN_265_G2_TXD1_FUNC_G2_TXD1 (MTK_PIN_NO(265) | 1)

#define MT7623_PIN_266_G2_TXD0_FUNC_GPIO266 (MTK_PIN_NO(266) | 0)
#define MT7623_PIN_266_G2_TXD0_FUNC_G2_TXD0 (MTK_PIN_NO(266) | 1)

#define MT7623_PIN_267_G2_TXCLK_FUNC_GPIO267 (MTK_PIN_NO(267) | 0)
#define MT7623_PIN_267_G2_TXCLK_FUNC_G2_TXC (MTK_PIN_NO(267) | 1)

#define MT7623_PIN_268_G2_RXCLK_FUNC_GPIO268 (MTK_PIN_NO(268) | 0)
#define MT7623_PIN_268_G2_RXCLK_FUNC_G2_RXC (MTK_PIN_NO(268) | 1)

#define MT7623_PIN_269_G2_RXD0_FUNC_GPIO269 (MTK_PIN_NO(269) | 0)
#define MT7623_PIN_269_G2_RXD0_FUNC_G2_RXD0 (MTK_PIN_NO(269) | 1)

#define MT7623_PIN_270_G2_RXD1_FUNC_GPIO270 (MTK_PIN_NO(270) | 0)
#define MT7623_PIN_270_G2_RXD1_FUNC_G2_RXD1 (MTK_PIN_NO(270) | 1)

#define MT7623_PIN_271_G2_RXD2_FUNC_GPIO271 (MTK_PIN_NO(271) | 0)
#define MT7623_PIN_271_G2_RXD2_FUNC_G2_RXD2 (MTK_PIN_NO(271) | 1)

#define MT7623_PIN_272_G2_RXD3_FUNC_GPIO272 (MTK_PIN_NO(272) | 0)
#define MT7623_PIN_272_G2_RXD3_FUNC_G2_RXD3 (MTK_PIN_NO(272) | 1)

#define MT7623_PIN_273_ESW_INT_FUNC_GPIO273 (MTK_PIN_NO(273) | 0)
#define MT7623_PIN_273_ESW_INT_FUNC_ESW_INT (MTK_PIN_NO(273) | 1)

#define MT7623_PIN_274_G2_RXDV_FUNC_GPIO274 (MTK_PIN_NO(274) | 0)
#define MT7623_PIN_274_G2_RXDV_FUNC_G2_RXDV (MTK_PIN_NO(274) | 1)

#define MT7623_PIN_275_G2_MDC_FUNC_GPIO275 (MTK_PIN_NO(275) | 0)
#define MT7623_PIN_275_G2_MDC_FUNC_MDC (MTK_PIN_NO(275) | 1)

#define MT7623_PIN_276_G2_MDIO_FUNC_GPIO276 (MTK_PIN_NO(276) | 0)
#define MT7623_PIN_276_G2_MDIO_FUNC_MDIO (MTK_PIN_NO(276) | 1)

#define MT7623_PIN_278_JTAG_RESET_FUNC_GPIO278 (MTK_PIN_NO(278) | 0)
#define MT7623_PIN_278_JTAG_RESET_FUNC_JTAG_RESET (MTK_PIN_NO(278) | 1)

#endif /* __DTS_MT7623_PINFUNC_H */

