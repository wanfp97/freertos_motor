/*********************************************************************************************************************
 * Copyright (c) 2018-2020, Infineon Technologies AG
 * All rights reserved.
 *
 * Boost Software License - Version 1.0 - August 17th, 2003
 *
 * Permission is hereby granted, free of charge, to any person or organization
 * obtaining a copy of the software and accompanying documentation covered by
 * this license (the "Software") to use, reproduce, display, distribute,
 * execute, and transmit the Software, and to prepare derivative works of the
 * Software, and to permit third-parties to whom the Software is furnished to
 * do so, all subject to the following:
 *
 * The copyright notices in the Software and this entire statement, including
 * the above license grant, this restriction and the following disclaimer,
 * must be included in all copies of the Software, in whole or in part, and
 * all derivative works of the Software, unless such copies or derivative
 * works are solely in the form of machine-executable object code generated by
 * a source language processor.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * To improve the quality of the software, users are encouraged to share
 * modifications, enhancements or bug fixes with Infineon Technologies AG
 * at XMCSupport@infineon.com.
 *********************************************************************************************************************/

#ifndef TLE94112EL_REGS_H
#define TLE94112EL_REGS_H

#define TLE94112EL_LABT 0x2

#define TLE94112EL_HB_ACT_1_CTRL 						(0x00 | TLE94112EL_LABT | 1)
#define TLE94112EL_HB_ACT_2_CTRL 						(0x40 | TLE94112EL_LABT | 1)
#define TLE94112EL_HB_ACT_3_CTRL 						(0x20 | TLE94112EL_LABT | 1)
#define TLE94112EL_HB_MODE_1_CTRL 						(0x60 | TLE94112EL_LABT | 1)
#define TLE94112EL_HB_MODE_2_CTRL 						(0x10 | TLE94112EL_LABT | 1)
#define TLE94112EL_HB_MODE_3_CTRL 						(0x50 | TLE94112EL_LABT | 1)
#define TLE94112EL_PWM_CH_FREQ_CTRL 					(0x30 | TLE94112EL_LABT | 1)
#define TLE94112EL_PWM1_DC_CTRL 						(0x70 | TLE94112EL_LABT | 1)
#define TLE94112EL_PWM2_DC_CTRL 						(0x08 | TLE94112EL_LABT | 1)
#define TLE94112EL_PWM3_DC_CTRL 						(0x48 | TLE94112EL_LABT | 1)
#define TLE94112EL_FW_OL_CTRL 							(0x28 | TLE94112EL_LABT | 1)
#define TLE94112EL_FW_CTRL 								(0x68 | TLE94112EL_LABT | 1)
#define TLE94112EL_CONFIG_CTRL 							(0x64 | TLE94112EL_LABT | 1)
#define TLE94112EL_SYS_DIAG1 							(0x18 | TLE94112EL_LABT | 1)
#define TLE94112EL_SYS_DIAG2 							(0x58 | TLE94112EL_LABT | 1)
#define TLE94112EL_SYS_DIAG3 							(0x38 | TLE94112EL_LABT | 1)
#define TLE94112EL_SYS_DIAG4 							(0x78 | TLE94112EL_LABT | 1)
#define TLE94112EL_SYS_DIAG5 							(0x04 | TLE94112EL_LABT | 1)
#define TLE94112EL_SYS_DIAG6 							(0x44 | TLE94112EL_LABT | 1)
#define TLE94112EL_SYS_DIAG7 							(0x24 | TLE94112EL_LABT | 1)

/* ----------------------------------  TLE94112EL_HB_ACT_1_CTRL  --------------------------------- */
#define TLE94112EL_HB_ACT_1_CTRL_HB4_HS_EN_Pos 			(7)
#define TLE94112EL_HB_ACT_1_CTRL_HB4_HS_EN_Msk 			(0x80)
#define TLE94112EL_HB_ACT_1_CTRL_HB4_LS_EN_Pos 			(6)
#define TLE94112EL_HB_ACT_1_CTRL_HB4_LS_EN_Msk 			(0x40)
#define TLE94112EL_HB_ACT_1_CTRL_HB3_HS_EN_Pos 			(5)
#define TLE94112EL_HB_ACT_1_CTRL_HB3_HS_EN_Msk 			(0x20)
#define TLE94112EL_HB_ACT_1_CTRL_HB3_LS_EN_Pos 			(4)
#define TLE94112EL_HB_ACT_1_CTRL_HB3_LS_EN_Msk 			(0x10)
#define TLE94112EL_HB_ACT_1_CTRL_HB2_HS_EN_Pos 			(3)
#define TLE94112EL_HB_ACT_1_CTRL_HB2_HS_EN_Msk 			(0x08)
#define TLE94112EL_HB_ACT_1_CTRL_HB2_LS_EN_Pos 			(2)
#define TLE94112EL_HB_ACT_1_CTRL_HB2_LS_EN_Msk 			(0x04)
#define TLE94112EL_HB_ACT_1_CTRL_HB1_HS_EN_Pos 			(1)
#define TLE94112EL_HB_ACT_1_CTRL_HB1_HS_EN_Msk 			(0x02)
#define TLE94112EL_HB_ACT_1_CTRL_HB1_LS_EN_Pos 			(0)
#define TLE94112EL_HB_ACT_1_CTRL_HB1_LS_EN_Msk 			(0x01)

/* ----------------------------------  TLE94112EL_HB_ACT_2_CTRL  --------------------------------- */
#define TLE94112EL_HB_ACT_2_CTRL_HB8_HS_EN_Pos 			(7)
#define TLE94112EL_HB_ACT_2_CTRL_HB8_HS_EN_Msk 			(0x80)
#define TLE94112EL_HB_ACT_2_CTRL_HB8_LS_EN_Pos 			(6)
#define TLE94112EL_HB_ACT_2_CTRL_HB8_LS_EN_Msk 			(0x40)
#define TLE94112EL_HB_ACT_2_CTRL_HB7_HS_EN_Pos 			(5)
#define TLE94112EL_HB_ACT_2_CTRL_HB7_HS_EN_Msk 			(0x20)
#define TLE94112EL_HB_ACT_2_CTRL_HB7_LS_EN_Pos 			(4)
#define TLE94112EL_HB_ACT_2_CTRL_HB7_LS_EN_Msk 			(0x10)
#define TLE94112EL_HB_ACT_2_CTRL_HB6_HS_EN_Pos 			(3)
#define TLE94112EL_HB_ACT_2_CTRL_HB6_HS_EN_Msk 			(0x08)
#define TLE94112EL_HB_ACT_2_CTRL_HB6_LS_EN_Pos 			(2)
#define TLE94112EL_HB_ACT_2_CTRL_HB6_LS_EN_Msk 			(0x04)
#define TLE94112EL_HB_ACT_2_CTRL_HB5_HS_EN_Pos 			(1)
#define TLE94112EL_HB_ACT_2_CTRL_HB5_HS_EN_Msk 			(0x02)
#define TLE94112EL_HB_ACT_2_CTRL_HB5_LS_EN_Pos 			(0)
#define TLE94112EL_HB_ACT_2_CTRL_HB5_LS_EN_Msk 			(0x01)

/* ----------------------------------  TLE94112EL_HB_ACT_3_CTRL  --------------------------------- */
#define TLE94112EL_HB_ACT_3_CTRL_HB12_HS_EN_Pos 		(7)
#define TLE94112EL_HB_ACT_3_CTRL_HB12_HS_EN_Msk 		(0x80)
#define TLE94112EL_HB_ACT_3_CTRL_HB12_LS_EN_Pos 		(6)
#define TLE94112EL_HB_ACT_3_CTRL_HB12_LS_EN_Msk 		(0x40)
#define TLE94112EL_HB_ACT_3_CTRL_HB11_HS_EN_Pos 		(5)
#define TLE94112EL_HB_ACT_3_CTRL_HB11_HS_EN_Msk 		(0x20)
#define TLE94112EL_HB_ACT_3_CTRL_HB11_LS_EN_Pos 		(4)
#define TLE94112EL_HB_ACT_3_CTRL_HB11_LS_EN_Msk 		(0x10)
#define TLE94112EL_HB_ACT_3_CTRL_HB10_HS_EN_Pos 		(3)
#define TLE94112EL_HB_ACT_3_CTRL_HB10_HS_EN_Msk 		(0x08)
#define TLE94112EL_HB_ACT_3_CTRL_HB10_LS_EN_Pos 		(2)
#define TLE94112EL_HB_ACT_3_CTRL_HB10_LS_EN_Msk 		(0x04)
#define TLE94112EL_HB_ACT_3_CTRL_HB9_HS_EN_Pos  		(1)
#define TLE94112EL_HB_ACT_3_CTRL_HB9_HS_EN_Msk  		(0x02)
#define TLE94112EL_HB_ACT_3_CTRL_HB9_LS_EN_Pos  		(0)
#define TLE94112EL_HB_ACT_3_CTRL_HB9_LS_EN_Msk  		(0x01)

/* ----------------------------------  TLE94112EL_HB_MODE_1_CTRL  --------------------------------- */
#define TLE94112EL_HB_MODE_1_CTRL_HB4_MODE_Pos 			(6)
#define TLE94112EL_HB_MODE_1_CTRL_HB4_MODE_Msk 			(0xc0)
#define TLE94112EL_HB_MODE_1_CTRL_HB3_MODE_Pos 			(4)
#define TLE94112EL_HB_MODE_1_CTRL_HB3_MODE_Msk 			(0x30)
#define TLE94112EL_HB_MODE_1_CTRL_HB2_MODE_Pos 			(2)
#define TLE94112EL_HB_MODE_1_CTRL_HB2_MODE_Msk 			(0x0c)
#define TLE94112EL_HB_MODE_1_CTRL_HB1_MODE_Pos 			(0)
#define TLE94112EL_HB_MODE_1_CTRL_HB1_MODE_Msk 			(0x03)

/* ----------------------------------  TLE94112EL_HB_MODE_2_CTRL  --------------------------------- */
#define TLE94112EL_HB_MODE_2_CTRL_HB8_MODE_Pos 			(6)
#define TLE94112EL_HB_MODE_2_CTRL_HB8_MODE_Msk 			(0xc0)
#define TLE94112EL_HB_MODE_2_CTRL_HB7_MODE_Pos 			(4)
#define TLE94112EL_HB_MODE_2_CTRL_HB7_MODE_Msk 			(0x30)
#define TLE94112EL_HB_MODE_2_CTRL_HB6_MODE_Pos 			(2)
#define TLE94112EL_HB_MODE_2_CTRL_HB6_MODE_Msk 			(0x0c)
#define TLE94112EL_HB_MODE_2_CTRL_HB5_MODE_Pos 			(0)
#define TLE94112EL_HB_MODE_2_CTRL_HB5_MODE_Msk 			(0x03)

/* ----------------------------------  TLE94112EL_HB_MODE_3_CTRL  --------------------------------- */
#define TLE94112EL_HB_MODE_3_CTRL_HB12_MODE_Pos			(6)
#define TLE94112EL_HB_MODE_3_CTRL_HB12_MODE_Msk			(0xc0)
#define TLE94112EL_HB_MODE_3_CTRL_HB11_MODE_Pos			(4)
#define TLE94112EL_HB_MODE_3_CTRL_HB11_MODE_Msk			(0x30)
#define TLE94112EL_HB_MODE_3_CTRL_HB10_MODE_Pos			(2)
#define TLE94112EL_HB_MODE_3_CTRL_HB10_MODE_Msk			(0x0c)
#define TLE94112EL_HB_MODE_3_CTRL_HB9_MODE_Pos 			(0)
#define TLE94112EL_HB_MODE_3_CTRL_HB9_MODE_Msk 			(0x03)

/* ----------------------------------  TLE94112EL_PWM_CH_FREQ_CTRL  --------------------------------- */
#define TLE94112EL_PWM_CH_FREQ_CTRL_FM_CLK_MOD_Pos		(6)
#define TLE94112EL_PWM_CH_FREQ_CTRL_FM_CLK_MOD_Msk		(0xc0)
#define TLE94112EL_PWM_CH_FREQ_CTRL_PWM_CH3_FREQ_Pos	(4)
#define TLE94112EL_PWM_CH_FREQ_CTRL_PWM_CH3_FREQ_Msk	(0x30)
#define TLE94112EL_PWM_CH_FREQ_CTRL_PWM_CH2_FREQ_Pos	(2)
#define TLE94112EL_PWM_CH_FREQ_CTRL_PWM_CH2_FREQ_Msk	(0x0c)
#define TLE94112EL_PWM_CH_FREQ_CTRL_PWM_CH1_FREQ_Pos	(0)
#define TLE94112EL_PWM_CH_FREQ_CTRL_PWM_CH1_FREQ_Msk	(0x03)

/* ----------------------------------  TLE94112EL_PWM1_DC_CTRL  --------------------------------- */
#define TLE94112EL_PWM1_DC_CTRL_Pos						(0)
#define TLE94112EL_PWM1_DC_CTRL_Msk						(0xff)

/* ----------------------------------  TLE94112EL_PWM2_DC_CTRL  --------------------------------- */
#define TLE94112EL_PWM2_DC_CTRL_Pos						(0)
#define TLE94112EL_PWM2_DC_CTRL_Msk						(0xff)

/* ----------------------------------  TLE94112EL_PWM3_DC_CTRL  --------------------------------- */
#define TLE94112EL_PWM3_DC_CTRL_Pos						(0)
#define TLE94112EL_PWM3_DC_CTRL_Msk						(0xff)

/* ----------------------------------  TLE94112EL_FW_OL_CTRL  --------------------------------- */
#define TLE94112EL_FW_OL_CTRL_FW_HB6_Pos				(7)
#define TLE94112EL_FW_OL_CTRL_FW_HB6_Msk				(0x80)
#define TLE94112EL_FW_OL_CTRL_FW_HB5_Pos				(6)
#define TLE94112EL_FW_OL_CTRL_FW_HB5_Msk				(0x40)
#define TLE94112EL_FW_OL_CTRL_FW_HB4_Pos				(5)
#define TLE94112EL_FW_OL_CTRL_FW_HB4_Msk				(0x20)
#define TLE94112EL_FW_OL_CTRL_FW_HB3_Pos				(4)
#define TLE94112EL_FW_OL_CTRL_FW_HB3_Msk				(0x10)
#define TLE94112EL_FW_OL_CTRL_FW_HB2_Pos				(3)
#define TLE94112EL_FW_OL_CTRL_FW_HB2_Msk				(0x08)
#define TLE94112EL_FW_OL_CTRL_FW_HB1_Pos				(2)
#define TLE94112EL_FW_OL_CTRL_FW_HB1_Msk				(0x04)
#define TLE94112EL_FW_OL_CTRL_OL_SEL_HS2_Pos			(1)
#define TLE94112EL_FW_OL_CTRL_OL_SEL_HS2_Msk			(0x02)
#define TLE94112EL_FW_OL_CTRL_OL_SEL_HS1_Pos			(0)
#define TLE94112EL_FW_OL_CTRL_OL_SEL_HS1_Msk			(0x01)

/* ----------------------------------  TLE94112EL_FW_CTRL  --------------------------------- */
#define TLE94112EL_FW_CTRL_FW_HB12_Pos					(6)
#define TLE94112EL_FW_CTRL_FW_HB12_Msk					(0x20)
#define TLE94112EL_FW_CTRL_FW_HB11_Pos					(5)
#define TLE94112EL_FW_CTRL_FW_HB11_Msk					(0x10)
#define TLE94112EL_FW_CTRL_FW_HB10_Pos					(4)
#define TLE94112EL_FW_CTRL_FW_HB10_Msk					(0x08)
#define TLE94112EL_FW_CTRL_FW_HB9_Pos					(2)
#define TLE94112EL_FW_CTRL_FW_HB9_Msk					(0x04)
#define TLE94112EL_FW_CTRL_FW_HB8_Pos					(1)
#define TLE94112EL_FW_CTRL_FW_HB8_Msk					(0x02)
#define TLE94112EL_FW_CTRL_FW_HB7_Pos					(0)
#define TLE94112EL_FW_CTRL_FW_HB7_Msk					(0x01)

/* ----------------------------------  TLE94112EL_CONFIG_CTRL  --------------------------------- */
#define TLE94112EL_CONFIG_CTRL_DEV_ID_Pos				(0)
#define TLE94112EL_CONFIG_CTRL_DEV_ID_Msk				(0x07)

/* ----------------------------------  TLE94112EL_SYS_DIAG1  --------------------------------- */
#define TLE94112EL_SYS_DIAG1_SPI_ERR_Pos				(7)
#define TLE94112EL_SYS_DIAG1_SPI_ERR_Msk				(0x80)
#define TLE94112EL_SYS_DIAG1_LE_Pos						(6)
#define TLE94112EL_SYS_DIAG1_LE_Msk						(0x40)
#define TLE94112EL_SYS_DIAG1_VS_UV_Pos					(5)
#define TLE94112EL_SYS_DIAG1_VS_UV_Msk					(0x20)
#define TLE94112EL_SYS_DIAG1_VS_OV_Pos					(4)
#define TLE94112EL_SYS_DIAG1_VS_OV_Msk					(0x10)
#define TLE94112EL_SYS_DIAG1_NPOR_Pos					(3)
#define TLE94112EL_SYS_DIAG1_NPOR_Msk					(0x08)
#define TLE94112EL_SYS_DIAG1_TSD_Pos					(2)
#define TLE94112EL_SYS_DIAG1_TSD_Msk					(0x04)
#define TLE94112EL_SYS_DIAG1_TPW_Pos					(1)
#define TLE94112EL_SYS_DIAG1_TPW_Msk					(0x02)

/* ----------------------------------  TLE94112EL_SYS_DIAG2  --------------------------------- */
#define TLE94112EL_SYS_DIAG2_HB4_HS_OC_Pos				(7)
#define TLE94112EL_SYS_DIAG2_HB4_HS_OC_Msk				(0x80)
#define TLE94112EL_SYS_DIAG2_HB4_LS_OC_Pos				(6)
#define TLE94112EL_SYS_DIAG2_HB4_LS_OC_Msk				(0x40)
#define TLE94112EL_SYS_DIAG2_HB3_HS_OC_Pos				(5)
#define TLE94112EL_SYS_DIAG2_HB3_HS_OC_Msk				(0x20)
#define TLE94112EL_SYS_DIAG2_HB3_LS_OC_Pos				(4)
#define TLE94112EL_SYS_DIAG2_HB3_LS_OC_Msk				(0x10)
#define TLE94112EL_SYS_DIAG2_HB2_HS_OC_Pos				(3)
#define TLE94112EL_SYS_DIAG2_HB2_HS_OC_Msk				(0x08)
#define TLE94112EL_SYS_DIAG2_HB2_LS_OC_Pos				(2)
#define TLE94112EL_SYS_DIAG2_HB2_LS_OC_Msk				(0x04)
#define TLE94112EL_SYS_DIAG2_HB1_HS_OC_Pos				(1)
#define TLE94112EL_SYS_DIAG2_HB1_HS_OC_Msk				(0x02)
#define TLE94112EL_SYS_DIAG2_HB1_LS_OC_Pos				(0)
#define TLE94112EL_SYS_DIAG2_HB1_LS_OC_Msk				(0x01)

/* ----------------------------------  TLE94112EL_SYS_DIAG3  --------------------------------- */
#define TLE94112EL_SYS_DIAG3_HB8_HS_OC_Pos				(7)
#define TLE94112EL_SYS_DIAG3_HB8_HS_OC_Msk				(0x80)
#define TLE94112EL_SYS_DIAG3_HB8_LS_OC_Pos				(6)
#define TLE94112EL_SYS_DIAG3_HB8_LS_OC_Msk				(0x40)
#define TLE94112EL_SYS_DIAG3_HB7_HS_OC_Pos				(5)
#define TLE94112EL_SYS_DIAG3_HB7_HS_OC_Msk				(0x20)
#define TLE94112EL_SYS_DIAG3_HB7_LS_OC_Pos				(4)
#define TLE94112EL_SYS_DIAG3_HB7_LS_OC_Msk				(0x10)
#define TLE94112EL_SYS_DIAG3_HB6_HS_OC_Pos				(3)
#define TLE94112EL_SYS_DIAG3_HB6_HS_OC_Msk				(0x08)
#define TLE94112EL_SYS_DIAG3_HB6_LS_OC_Pos				(2)
#define TLE94112EL_SYS_DIAG3_HB6_LS_OC_Msk				(0x04)
#define TLE94112EL_SYS_DIAG3_HB5_HS_OC_Pos				(1)
#define TLE94112EL_SYS_DIAG3_HB5_HS_OC_Msk				(0x02)
#define TLE94112EL_SYS_DIAG3_HB5_LS_OC_Pos				(0)
#define TLE94112EL_SYS_DIAG3_HB5_LS_OC_Msk				(0x01)

/* ----------------------------------  TLE94112EL_SYS_DIAG4  --------------------------------- */
#define TLE94112EL_SYS_DIAG4_HB12_HS_OC_Pos				(7)
#define TLE94112EL_SYS_DIAG4_HB12_HS_OC_Msk				(0x80)
#define TLE94112EL_SYS_DIAG4_HB12 LS_OC_Pos				(6)
#define TLE94112EL_SYS_DIAG4_HB12_LS_OC_Msk				(0x40)
#define TLE94112EL_SYS_DIAG4_HB11_HS_OC_Pos				(5)
#define TLE94112EL_SYS_DIAG4_HB11_HS_OC_Msk				(0x20)
#define TLE94112EL_SYS_DIAG4_HB11_LS_OC_Pos				(4)
#define TLE94112EL_SYS_DIAG4_HB11_LS_OC_Msk				(0x10)
#define TLE94112EL_SYS_DIAG4_HB10_HS_OC_Pos				(3)
#define TLE94112EL_SYS_DIAG4_HB10_HS_OC_Msk				(0x08)
#define TLE94112EL_SYS_DIAG4_HB10_LS_OC_Pos				(2)
#define TLE94112EL_SYS_DIAG4_HB10_LS_OC_Msk				(0x04)
#define TLE94112EL_SYS_DIAG4_HB9_HS_OC_Pos				(1)
#define TLE94112EL_SYS_DIAG4_HB9_HS_OC_Msk				(0x02)
#define TLE94112EL_SYS_DIAG4_HB9_LS_OC_Pos				(0)
#define TLE94112EL_SYS_DIAG4_HB9_LS_OC_Msk				(0x01)

/* ----------------------------------  TLE94112EL_SYS_DIAG5  --------------------------------- */
#define TLE94112EL_SYS_DIAG2_HB4_HS_OL_Pos				(7)
#define TLE94112EL_SYS_DIAG2_HB4_HS_OC_Msk				(0x80)
#define TLE94112EL_SYS_DIAG2_HB4_LS_OC_Pos				(6)
#define TLE94112EL_SYS_DIAG2_HB4_LS_OC_Msk				(0x40)
#define TLE94112EL_SYS_DIAG2_HB3_HS_OC_Pos				(5)
#define TLE94112EL_SYS_DIAG2_HB3_HS_OC_Msk				(0x20)
#define TLE94112EL_SYS_DIAG2_HB3_LS_OC_Pos				(4)
#define TLE94112EL_SYS_DIAG2_HB3_LS_OC_Msk				(0x10)
#define TLE94112EL_SYS_DIAG2_HB2_HS_OC_Pos				(3)
#define TLE94112EL_SYS_DIAG2_HB2_HS_OC_Msk				(0x08)
#define TLE94112EL_SYS_DIAG2_HB2_LS_OC_Pos				(2)
#define TLE94112EL_SYS_DIAG2_HB2_LS_OC_Msk				(0x04)
#define TLE94112EL_SYS_DIAG2_HB1_HS_OC_Pos				(1)
#define TLE94112EL_SYS_DIAG2_HB1_HS_OC_Msk				(0x02)
#define TLE94112EL_SYS_DIAG2_HB1_LS_OC_Pos				(0)
#define TLE94112EL_SYS_DIAG2_HB1_LS_OC_Msk				(0x01)

/* ----------------------------------  TLE94112EL_SYS_DIAG6  --------------------------------- */
#define TLE94112EL_SYS_DIAG3_HB8_HS_OC_Pos				(7)
#define TLE94112EL_SYS_DIAG3_HB8_HS_OC_Msk				(0x80)
#define TLE94112EL_SYS_DIAG3_HB8_LS_OC_Pos				(6)
#define TLE94112EL_SYS_DIAG3_HB8_LS_OC_Msk				(0x40)
#define TLE94112EL_SYS_DIAG3_HB7_HS_OC_Pos				(5)
#define TLE94112EL_SYS_DIAG3_HB7_HS_OC_Msk				(0x20)
#define TLE94112EL_SYS_DIAG3_HB7_LS_OC_Pos				(4)
#define TLE94112EL_SYS_DIAG3_HB7_LS_OC_Msk				(0x10)
#define TLE94112EL_SYS_DIAG3_HB6_HS_OC_Pos				(3)
#define TLE94112EL_SYS_DIAG3_HB6_HS_OC_Msk				(0x08)
#define TLE94112EL_SYS_DIAG3_HB6_LS_OC_Pos				(2)
#define TLE94112EL_SYS_DIAG3_HB6_LS_OC_Msk				(0x04)
#define TLE94112EL_SYS_DIAG3_HB5_HS_OC_Pos				(1)
#define TLE94112EL_SYS_DIAG3_HB5_HS_OC_Msk				(0x02)
#define TLE94112EL_SYS_DIAG3_HB5_LS_OC_Pos				(0)
#define TLE94112EL_SYS_DIAG3_HB5_LS_OC_Msk				(0x01)

/* ----------------------------------  TLE94112EL_SYS_DIAG4  --------------------------------- */
#define TLE94112EL_SYS_DIAG4_HB12_HS_OC_Pos				(7)
#define TLE94112EL_SYS_DIAG4_HB12_HS_OC_Msk				(0x80)
#define TLE94112EL_SYS_DIAG4_HB12 LS_OC_Pos				(6)
#define TLE94112EL_SYS_DIAG4_HB12_LS_OC_Msk				(0x40)
#define TLE94112EL_SYS_DIAG4_HB11_HS_OC_Pos				(5)
#define TLE94112EL_SYS_DIAG4_HB11_HS_OC_Msk				(0x20)
#define TLE94112EL_SYS_DIAG4_HB11_LS_OC_Pos				(4)
#define TLE94112EL_SYS_DIAG4_HB11_LS_OC_Msk				(0x10)
#define TLE94112EL_SYS_DIAG4_HB10_HS_OC_Pos				(3)
#define TLE94112EL_SYS_DIAG4_HB10_HS_OC_Msk				(0x08)
#define TLE94112EL_SYS_DIAG4_HB10_LS_OC_Pos				(2)
#define TLE94112EL_SYS_DIAG4_HB10_LS_OC_Msk				(0x04)
#define TLE94112EL_SYS_DIAG4_HB9_HS_OC_Pos				(1)
#define TLE94112EL_SYS_DIAG4_HB9_HS_OC_Msk				(0x02)
#define TLE94112EL_SYS_DIAG4_HB9_LS_OC_Pos				(0)
#define TLE94112EL_SYS_DIAG4_HB9_LS_OC_Msk				(0x01)

#endif /* TLE94112EL_REGS_H */
