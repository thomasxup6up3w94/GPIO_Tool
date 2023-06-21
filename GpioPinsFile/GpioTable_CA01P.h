/** @file
  GPIO definition table for RocketLake S UDimm 4 Layers and 6 Layer

@copyright
  Copyright (c) 2019 - 2020 Intel Corporation. All rights reserved
  This software and associated documentation (if any) is furnished
  under a license and may only be used or copied in accordance
  with the terms of the license. Except as permitted by such
  license, no part of this software or documentation may be
  reproduced, stored in a retrieval system, or transmitted in any
  form or by any means without the express written consent of
  Intel Corporation.
  This file contains an 'Intel Peripheral Driver' and is
  licensed for Intel CPUs and chipsets under the terms of your
  license agreement with Intel or your vendor. This file may
  be modified by the user, subject to additional terms of the
  license agreement.
**/
#ifndef _ROCKETLAKE_S_PREMIUM_GPIO_TABLE_H_
#define _ROCKETLAKE_S_PREMIUM_GPIO_TABLE_H_

#include <Pins/GpioPinsVer2H.h>
#include <Library/GpioLib.h>
#include <Library/GpioConfig.h>

static GPIO_INIT_CONFIG mGpioTableRklSPremium[] =
{
//     GPIO Pin,               Pmode,         GPI_IS,          GpioDir,      GPIOTxState   GPIRoutConfig, RxEvCfg, PadRstCfg,         Term,

//[A Group]
//{GPIO_VER2_H_GPP_A0,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //ESPI_IO0
//{GPIO_VER2_H_GPP_A1,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //
//{GPIO_VER2_H_GPP_A2,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //
//{GPIO_VER2_H_GPP_A3,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //
//{GPIO_VER2_H_GPP_A4,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //
//{GPIO_VER2_H_GPP_A5,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //
//{GPIO_VER2_H_GPP_A6,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //ESPI_RESET
  {GPIO_VER2_H_GPP_A7,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_A8,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_A9,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
//{GPIO_VER2_H_GPP_A10,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //ESPI_ALERT
  {GPIO_VER2_H_GPP_A11,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_A12,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_A13,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_A14,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC

//[B Group]
  {GPIO_VER2_H_GPP_B0,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_B1,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
//{GPIO_VER2_H_GPP_B2,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //CNV_UART_WAKE# - PIN20 UART Wake# //Default GPI
  {GPIO_VER2_H_GPP_B3,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //WIRELESS_EN2
  {GPIO_VER2_H_GPP_B4,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
//  {GPIO_VER2_H_GPP_B5,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //CLK_REQ0_PCIEX16
//  {GPIO_VER2_H_GPP_B6,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //CLK_REQ1_PCIEX1
//  {GPIO_VER2_H_GPP_B7,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //CLK_REQ2_PCIEX4
//  {GPIO_VER2_H_GPP_B8,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //CLK_REQ3_M.2_WLAN
//  {GPIO_VER2_H_GPP_B9,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //CLK_REQ4_M.2_SSD
//  {GPIO_VER2_H_GPP_B10,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //CLK_REQ5_M.2_SSD
  {GPIO_VER2_H_GPP_B11,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_B12,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SLP_S0
  {GPIO_VER2_H_GPP_B13,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //PLTRST
  {GPIO_VER2_H_GPP_B14,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SPKR
  {GPIO_VER2_H_GPP_B15,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_B16,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_B17,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
//{GPIO_VER2_H_GPP_B18,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //???
  {GPIO_VER2_H_GPP_B19,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_B20,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SMI
  {GPIO_VER2_H_GPP_B21,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
//{GPIO_VER2_H_GPP_B22,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //???
  {GPIO_VER2_H_GPP_B23,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SML1ALERT

//[C Group]
  {GPIO_VER2_H_GPP_C0,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SMBCLK
  {GPIO_VER2_H_GPP_C1,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SMBDATA
//{GPIO_VER2_H_GPP_C2,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //???
  {GPIO_VER2_H_GPP_C3,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_C4,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
//{GPIO_VER2_H_GPP_C5,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //???
  {GPIO_VER2_H_GPP_C6,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_C7,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_C8,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioDirDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //CLR_CMOS
  {GPIO_VER2_H_GPP_C9,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_C10,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_C11,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_C12,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_C13,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_C14,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_C15,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_C16,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //I2C0_SDA DCI_DATA NC
  {GPIO_VER2_H_GPP_C17,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //I2C0_SCL DCI_CLK NC
  {GPIO_VER2_H_GPP_C18,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //I2C1_SDA LPSS_I2C1_SDA
  {GPIO_VER2_H_GPP_C19,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //I2C1_SCL LPSS_I2C1_SCL
  {GPIO_VER2_H_GPP_C20,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_C21,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_C22,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_C23,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC

//[D Group]
  {GPIO_VER2_H_GPP_D0,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_D1,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //PW_LED
  {GPIO_VER2_H_GPP_D2,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_D3,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_D4,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SML1CLK
  {GPIO_VER2_H_GPP_D5,   {GpioPadModeNative2,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //CNV_RF_RESET
//EBA01IL2_IMS551724&551630&551541&550692&551242&551229&551227&550689&551757&551486&550785&550691+s>>
//{GPIO_VER2_H_GPP_D6,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //I2S2_TXD
  {GPIO_VER2_H_GPP_D6,   {GpioPadModeNative2,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //I2S2_TXD
//EBA01IL2_IMS551724&551630&551541&550692&551242&551229&551227&550689&551757&551486&550785&550691+e<<
  {GPIO_VER2_H_GPP_D7,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //I2S2_RXD
  {GPIO_VER2_H_GPP_D8,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //I2S2_SCLK
  {GPIO_VER2_H_GPP_D9,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SML0CLK
  {GPIO_VER2_H_GPP_D10,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SML0DATA
  {GPIO_VER2_H_GPP_D11,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //FUSB_G1
  {GPIO_VER2_H_GPP_D12,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //FUSB_G2
  {GPIO_VER2_H_GPP_D13,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_D14,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //PS2_PINHEADER
  {GPIO_VER2_H_GPP_D15,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SML1DATA
  {GPIO_VER2_H_GPP_D16,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_D17,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //LPT_DET
  {GPIO_VER2_H_GPP_D18,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //USBDEBUG
  {GPIO_VER2_H_GPP_D19,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_D20,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_D21,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_D22,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_D23,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC

//[E Group]
  {GPIO_VER2_H_GPP_E0,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //GPIO_SSD2_PWREN NC
  {GPIO_VER2_H_GPP_E1,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //GPIO_SSD1_PWREN NC
  {GPIO_VER2_H_GPP_E2,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //PCH_PEGSLOT2_PWREN
  {GPIO_VER2_H_GPP_E3,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //I2C2_IRQ
  {GPIO_VER2_H_GPP_E4,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //I2C1_IRQ
  {GPIO_VER2_H_GPP_E5,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_E6,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_E7,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SKTOCC
  {GPIO_VER2_H_GPP_E8,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SATALED
  {GPIO_VER2_H_GPP_E9,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioHostDeepReset, GpioTermNone }}, //USB_OC0    #EBA01IL2_548630
  {GPIO_VER2_H_GPP_E10,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioHostDeepReset, GpioTermNone }}, //USB_OC1  #EBA01IL2_548630
  {GPIO_VER2_H_GPP_E11,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioHostDeepReset, GpioTermNone }}, //USB_OC2  #EBA01IL2_548630
  {GPIO_VER2_H_GPP_E12,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioHostDeepReset, GpioTermNone }}, //USB_OC3  #EBA01IL2_548630

//[F Group]
//{GPIO_VER2_H_GPP_F0,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //???
  {GPIO_VER2_H_GPP_F1,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
//EBA01IL22AB_01 TBT >>
//  {GPIO_VER2_H_GPP_F2,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //PCH_GPIO_F2 to TBT_PERST_N
  {GPIO_VER2_H_GPP_F2,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermWpu20K }}, //PCH_GPIO_F2 to TBT_PERST_N 
//EBA01IL22AB_01<<
  {GPIO_VER2_H_GPP_F3,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //USB_OC8
  {GPIO_VER2_H_GPP_F4,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_F5,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SPI_SIRQ
  {GPIO_VER2_H_GPP_F6,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //DEVSLP
  {GPIO_VER2_H_GPP_F7,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioHostDeepReset, GpioTermNone, GpioPadConfigUnlock }}, //TYPE_C_DET
  {GPIO_VER2_H_GPP_F8,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioHostDeepReset, GpioTermNone, GpioPadConfigUnlock }}, //HDMI_DET
  {GPIO_VER2_H_GPP_F9,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioHostDeepReset, GpioTermNone, GpioPadConfigUnlock }}, //DP_DET
  {GPIO_VER2_H_GPP_F10,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_F11,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //PCH_PEGSLOT3_PWREN
  {GPIO_VER2_H_GPP_F12,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //PCH_PEGSLOT1_PWREN
  {GPIO_VER2_H_GPP_F13,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //GPIO_PEG_RST#
  {GPIO_VER2_H_GPP_F14,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //PS_ON
  {GPIO_VER2_H_GPP_F15,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //TPM_GPIO
  {GPIO_VER2_H_GPP_F16,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //POL
  {GPIO_VER2_H_GPP_F17,  {GpioPadModeGpio,     GpioHostOwnAcpi,    GpioDirInInv,   GpioOutDefault, GpioIntLevel|GpioIntSci, GpioPlatformReset, GpioTermWpu5K }}, //SIO_SCI for finger print //EBA01IL214A_03
  {GPIO_VER2_H_GPP_F18,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_F19,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_F20,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_F21,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_F22,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutLow,     GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //VCCIO_VID1
  {GPIO_VER2_H_GPP_F23,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutLow,     GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //VCCIO_VID2

//[G Group]
  {GPIO_VER2_H_GPP_G0,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //CHASSIS_ID1
  {GPIO_VER2_H_GPP_G1,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //CHASSIS_ID2
//{GPIO_VER2_H_GPP_G2,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //???
  {GPIO_VER2_H_GPP_G3,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //H_PROCHOT_PCH_N
  {GPIO_VER2_H_GPP_G4,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_G5,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_G6,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
//EBA01IL2_IMS551724&551630&551541&550692&551242&551229&551227&550689&551757&551486&550785&550691+s>>
//{GPIO_VER2_H_GPP_G7,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //COM_WAKE NC
  {GPIO_VER2_H_GPP_G7,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //M2_WIFI detect pin
//EBA01IL2_IMS551724&551630&551541&550692&551242&551229&551227&550689&551757&551486&550785&550691+e<<
  {GPIO_VER2_H_GPP_G8,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_G9,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_G10,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_G11,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
//  {GPIO_VER2_H_GPP_G12,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //DDP1_CTRLCLK
//  {GPIO_VER2_H_GPP_G13,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //DDP1_CTRLDATA
//  {GPIO_VER2_H_GPP_G14,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //DDP2_CTRLCLK
//  {GPIO_VER2_H_GPP_G15,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //DDP2_CTRLDATA

//[H Group]
  {GPIO_VER2_H_GPP_H1,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_H2,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //FM_CATERR_N
  {GPIO_VER2_H_GPP_H3,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_H4,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_H5,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_H6,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //GPIO_WLAN_WAKE
  {GPIO_VER2_H_GPP_H7,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //GPIO_SSD1_RST# NC
  {GPIO_VER2_H_GPP_H8,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //GPIO_SSD2_RST# NC
  {GPIO_VER2_H_GPP_H9,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
//EBA01IL22AB_01 TBT >>
//  {GPIO_VER2_H_GPP_H10,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,     GpioOutDefault,    GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //PCH_GPP_H10_WAKE#
  {GPIO_VER2_H_GPP_H10,  {GpioPadModeGpio,     GpioHostOwnAcpi,    GpioDirInInv,   GpioOutDefault, GpioIntEdge | GpioIntSci, GpioHostDeepReset, GpioTermNone, GpioPadConfigUnlock }}, //PCH_GPP_H10_WAKE#
//EBA01IL22AB_01 <<
  {GPIO_VER2_H_GPP_H11,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //WIRELESS_EN
//{GPIO_VER2_H_GPP_H12,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //???
  {GPIO_VER2_H_GPP_H13,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_H14,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
//{GPIO_VER2_H_GPP_H15,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //???
  {GPIO_VER2_H_GPP_H15,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //GTable20200818 //GPP_H_15_SML3ALERT_N  
  {GPIO_VER2_H_GPP_H16,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_H17,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //PCIEX1#_PRSNT pull high to PRSNT2, but PRSNT1 GND
  {GPIO_VER2_H_GPP_H18,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_H19,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //PCIEX16#_PRSNT pull high to PRSNT2, but PRSNT1 GND
  {GPIO_VER2_H_GPP_H20,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //PCIEX4#_PRSNT pull high to PRSNT2, but PRSNT1 GND
  {GPIO_VER2_H_GPP_H21,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //COM_DET
  {GPIO_VER2_H_GPP_H22,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_H23,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC

//[I Group]
  {GPIO_VER2_H_GPP_I0,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
//  {GPIO_VER2_H_GPP_I1,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //DDSP_HPD1
//  {GPIO_VER2_H_GPP_I2,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //DDSP_HPD2
  {GPIO_VER2_H_GPP_I3,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_I4,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
//  {GPIO_VER2_H_GPP_I5,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //DDPB_CTRLCLK
//  {GPIO_VER2_H_GPP_I6,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //DDPB_CTRLDATA
//  {GPIO_VER2_H_GPP_I7,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //DDPC_CTRLCLK
//  {GPIO_VER2_H_GPP_I8,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //DDPC_CTRLDATA
  {GPIO_VER2_H_GPP_I9,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_I10,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_I11,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioHostDeepReset, GpioTermNone }}, //USB_OC4  #EBA01IL2_548630
  {GPIO_VER2_H_GPP_I12,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioHostDeepReset, GpioTermNone }}, //USB_OC5  #EBA01IL2_548630
  {GPIO_VER2_H_GPP_I13,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioHostDeepReset, GpioTermNone }}, //USB_OC6  #EBA01IL2_548630
  {GPIO_VER2_H_GPP_I14,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioHostDeepReset, GpioTermNone }}, //USB_OC7  #EBA01IL2_548630

//[J Group]
  {GPIO_VER2_H_GPP_J0,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //CNV_GNSS_PA_BLANKING
  {GPIO_VER2_H_GPP_J1,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //CPU_C10_GATE
  {GPIO_VER2_H_GPP_J2,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //CNV_BRI_DT
  {GPIO_VER2_H_GPP_J3,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //CNV_BRI_RSP
  {GPIO_VER2_H_GPP_J4,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //CNV_RGI_DT
  {GPIO_VER2_H_GPP_J5,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //CNV_RGI_RSP
//{GPIO_VER2_H_GPP_J8,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //???
//{GPIO_VER2_H_GPP_J9,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //???
  {GPIO_VER2_H_GPP_J8,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }},
  {GPIO_VER2_H_GPP_J9,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }},
//[K Group]
//EBA01IL22AB_01 TBT >>
//  {GPIO_VER2_H_GPP_K0,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //TBT_CIO_PLUG_EVENT_N
  {GPIO_VER2_H_GPP_K0,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirInInv,     GpioOutDefault,    GpioIntEdge, GpioPlatformReset, GpioTermNone }}, //TBT_CIO_PLUG_EVENT_N
//EBA01IL22AB_01 <<
//EBA01IL205A_02  {GPIO_VER2_H_GPP_K1,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //GPIO_PCIESLOT3_RST
  {GPIO_VER2_H_GPP_K1,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResumeReset, GpioTermWpu20K }}, //GPIO_PCIESLOT3_RST //EBA01IL205A_02
  {GPIO_VER2_H_GPP_K2,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //GPIO_PCIESLOT2_RST
  {GPIO_VER2_H_GPP_K3,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //TBT_CIO_PWR_EN
  {GPIO_VER2_H_GPP_K4,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //TBT_FRC_PWR
  {GPIO_VER2_H_GPP_K5,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //BTB_ALERT_PCH_N
//  {GPIO_VER2_H_GPP_K6,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //DDSP_HPDA
//  {GPIO_VER2_H_GPP_K7,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //DDSP_HPDB
  {GPIO_VER2_H_GPP_K8,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //CORE_VID_0
  {GPIO_VER2_H_GPP_K9,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //CORE_VID_1
  {GPIO_VER2_H_GPP_K10, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioHostDeepReset, GpioTermNone, GpioPadConfigUnlock }}, //PCH_RST_GPP_K10 //EBA01_00G_1
  {GPIO_VER2_H_GPP_K11, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //TBT_CIO_PWR_EN

//[R Group]
  {GPIO_VER2_H_GPP_R0,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //HDA_BCLK
  {GPIO_VER2_H_GPP_R1,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //HDA_SYNC
  {GPIO_VER2_H_GPP_R2,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //HDA_SDO
  {GPIO_VER2_H_GPP_R3,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //HDA_SDIO
  {GPIO_VER2_H_GPP_R4,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //HDA_RST
  {GPIO_VER2_H_GPP_R5,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_R6,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_R7,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_R8,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_R9,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_R10, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_R11, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_R12, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_R13, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_R14, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //BoardID
  {GPIO_VER2_H_GPP_R15, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //BoardID
  {GPIO_VER2_H_GPP_R16, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //BoardID
  {GPIO_VER2_H_GPP_R17, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //BoardID
  {GPIO_VER2_H_GPP_R18, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //BoardID
  {GPIO_VER2_H_GPP_R19, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //BoardID

//[S Group]
  {GPIO_VER2_H_GPP_S0,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_S1,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_S2,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_S3,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_S4,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_S5,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_S6,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_S7,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC

//[GDP Group]
  {GPIO_VER2_H_GPD0,    {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //BATLOW
  {GPIO_VER2_H_GPD1,    {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //MS_EVENT NC
  {GPIO_VER2_H_GPD2,    {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //LAN_WAKE
  {GPIO_VER2_H_GPD3,    {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //PWRBTN
  {GPIO_VER2_H_GPD4,    {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SLP_S3
  {GPIO_VER2_H_GPD5,    {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SLP_S4
  {GPIO_VER2_H_GPD6,    {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SLP_A
  {GPIO_VER2_H_GPD7,    {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //USB_WAKEOUT
  {GPIO_VER2_H_GPD8,    {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SUSCLK
  {GPIO_VER2_H_GPD9,    {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SLP_WLAN
  {GPIO_VER2_H_GPD10,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SLP_S5
  {GPIO_VER2_H_GPD11,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //LANPHYPC
  {GPIO_VER2_H_GPD12,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC

  {0x0}
};

//EBA01IL202E_RKLMS+>>
static GPIO_INIT_CONFIG mGpioTableRklSMS[] =
{
//     GPIO Pin,               Pmode,         GPI_IS,          GpioDir,      GPIOTxState   GPIRoutConfig, RxEvCfg, PadRstCfg,         Term,

//[A Group]
  {GPIO_VER2_H_GPP_A7,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_A8,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_A9,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_A11,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_A12,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_A13,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_A14,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC

//[B Group]
  {GPIO_VER2_H_GPP_B0,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_B1,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_B3,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //WIRELESS_EN2
  {GPIO_VER2_H_GPP_B4,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_B5,   {GpioPadModeGpio,     GpioHostOwnDefault, GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock   }}, //EBA01IL202C_11+ //EBA01IL22AAH_04 switch PadRstCfg from HostDeep to Platfrom Reset for PCIE x16 detect issue
  {GPIO_VER2_H_GPP_B6,   {GpioPadModeGpio,     GpioHostOwnDefault, GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioHostDeepReset, GpioTermNone, GpioPadConfigUnlock   }}, //EBA01IL202C_11+//  
  {GPIO_VER2_H_GPP_B7,   {GpioPadModeGpio,     GpioHostOwnDefault, GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioHostDeepReset, GpioTermNone, GpioPadConfigUnlock   }}, //
  {GPIO_VER2_H_GPP_B8,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirNone,    GpioOutDefault, GpioIntDefault, GpioHostDeepReset, GpioTermNone, GpioPadConfigUnlock   }}, //EBA01IL202C_11+
  {GPIO_VER2_H_GPP_B9,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirNone,    GpioOutDefault, GpioIntDefault, GpioHostDeepReset, GpioTermNone, GpioPadConfigUnlock   }}, //EBA01IL202C_11+
  {GPIO_VER2_H_GPP_B10,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirNone,    GpioOutDefault, GpioIntDefault, GpioHostDeepReset, GpioTermNone, GpioPadConfigUnlock   }}, //EBA01IL202C_11+
  {GPIO_VER2_H_GPP_B11,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_B12,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SLP_S0
  {GPIO_VER2_H_GPP_B13,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //PLTRST
  {GPIO_VER2_H_GPP_B14,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SPKR
  {GPIO_VER2_H_GPP_B15,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_B16,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_B17,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_B19,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_B20,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SMI
  {GPIO_VER2_H_GPP_B21,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_B23,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SML1ALERT

//[C Group]
  {GPIO_VER2_H_GPP_C0,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SMBCLK
  {GPIO_VER2_H_GPP_C1,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SMBDATA
  {GPIO_VER2_H_GPP_C3,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_C4,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_C6,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_C7,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_C8,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioDirDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //CLR_CMOS
  {GPIO_VER2_H_GPP_C9,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_C10,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_C11,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_C12,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_C13,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_C14,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_C15,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_C16,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //I2C0_SDA DCI_DATA NC
  {GPIO_VER2_H_GPP_C17,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //I2C0_SCL DCI_CLK NC
  {GPIO_VER2_H_GPP_C18,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //I2C1_SDA LPSS_I2C1_SDA
  {GPIO_VER2_H_GPP_C19,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //I2C1_SCL LPSS_I2C1_SCL
  {GPIO_VER2_H_GPP_C20,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_C21,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_C22,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_C23,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC

//[D Group]
  {GPIO_VER2_H_GPP_D0,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_D1,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //PW_LED
  {GPIO_VER2_H_GPP_D2,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_D3,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_D4,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SML1CLK
  {GPIO_VER2_H_GPP_D5,   {GpioPadModeNative2,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //CNV_RF_RESET
//EBA01IL2_IMS551724&551630&551541&550692&551242&551229&551227&550689&551757&551486&550785&550691+s>>
//{GPIO_VER2_H_GPP_D6,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //I2S2_TXD
  {GPIO_VER2_H_GPP_D6,   {GpioPadModeNative2,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //I2S2_TXD
//EBA01IL2_IMS551724&551630&551541&550692&551242&551229&551227&550689&551757&551486&550785&550691+e<<
  {GPIO_VER2_H_GPP_D7,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //I2S2_RXD
  {GPIO_VER2_H_GPP_D8,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //I2S2_SCLK
  {GPIO_VER2_H_GPP_D9,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SML0CLK
  {GPIO_VER2_H_GPP_D10,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SML0DATA
  {GPIO_VER2_H_GPP_D11,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //FUSB_G1
  {GPIO_VER2_H_GPP_D12,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //FUSB_G2
  {GPIO_VER2_H_GPP_D13,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_D14,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //PS2_PINHEADER
  {GPIO_VER2_H_GPP_D15,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SML1DATA
  {GPIO_VER2_H_GPP_D16,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_D17,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //LPT_DET
  {GPIO_VER2_H_GPP_D18,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //USBDEBUG
  {GPIO_VER2_H_GPP_D19,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_D20,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_D21,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_D22,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_D23,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC

//[E Group]
  {GPIO_VER2_H_GPP_E0,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //GPIO_SSD2_PWREN NC
  {GPIO_VER2_H_GPP_E1,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //GPIO_SSD1_PWREN NC
  {GPIO_VER2_H_GPP_E2,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //PCH_PEGSLOT2_PWREN
  {GPIO_VER2_H_GPP_E3,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //I2C2_IRQ
  {GPIO_VER2_H_GPP_E4,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //I2C1_IRQ
  {GPIO_VER2_H_GPP_E5,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_E6,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_E7,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SKTOCC
  {GPIO_VER2_H_GPP_E8,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SATALED
  {GPIO_VER2_H_GPP_E9,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioHostDeepReset, GpioTermNone }}, //USB_OC0    #EBA01IL2_548630
  {GPIO_VER2_H_GPP_E10,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioHostDeepReset, GpioTermNone }}, //USB_OC1  #EBA01IL2_548630
  {GPIO_VER2_H_GPP_E11,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioHostDeepReset, GpioTermNone }}, //USB_OC2  #EBA01IL2_548630
  {GPIO_VER2_H_GPP_E12,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioHostDeepReset, GpioTermNone }}, //USB_OC3  #EBA01IL2_548630

//[F Group]
  {GPIO_VER2_H_GPP_F1,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_F2,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //PCH_GPIO_F2 to TBT_PERST_N
  {GPIO_VER2_H_GPP_F3,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //USB_OC8
  {GPIO_VER2_H_GPP_F4,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_F5,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SPI_SIRQ
  {GPIO_VER2_H_GPP_F6,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //DEVSLP
  {GPIO_VER2_H_GPP_F7,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //TYPE_C_DET
  {GPIO_VER2_H_GPP_F8,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //HDMI_DET
  {GPIO_VER2_H_GPP_F9,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //DP_DET
  {GPIO_VER2_H_GPP_F10,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_F11,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //PCH_PEGSLOT3_PWREN
  {GPIO_VER2_H_GPP_F12,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //PCH_PEGSLOT1_PWREN
  {GPIO_VER2_H_GPP_F13,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //GPIO_PEG_RST#
  {GPIO_VER2_H_GPP_F14,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //PS_ON
  {GPIO_VER2_H_GPP_F15,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //TPM_GPIO
  {GPIO_VER2_H_GPP_F16,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //POL
  {GPIO_VER2_H_GPP_F17,  {GpioPadModeGpio,     GpioHostOwnAcpi,    GpioDirInInv,   GpioOutDefault, GpioIntLevel|GpioIntSci, GpioPlatformReset, GpioTermWpu5K }}, //SIO_SCI for finger print  //EBA01IL214A_03
  {GPIO_VER2_H_GPP_F18,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_F19,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_F20,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_F21,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_F22,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutLow,     GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //VCCIO_VID1
  {GPIO_VER2_H_GPP_F23,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutLow,     GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //VCCIO_VID2

//[G Group]
  {GPIO_VER2_H_GPP_G0,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //CHASSIS_ID1
  {GPIO_VER2_H_GPP_G1,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //CHASSIS_ID2
  {GPIO_VER2_H_GPP_G3,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,     GpioOutDefault,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //H_PROCHOT_PCH_N
  {GPIO_VER2_H_GPP_G4,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_G5,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_G6,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
//EBA01IL2_IMS551724&551630&551541&550692&551242&551229&551227&550689&551757&551486&550785&550691+s>>
//{GPIO_VER2_H_GPP_G7,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //COM_WAKE NC
  {GPIO_VER2_H_GPP_G7,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //M2_WIFI detect pin
//EBA01IL2_IMS551724&551630&551541&550692&551242&551229&551227&550689&551757&551486&550785&550691+e<<
  {GPIO_VER2_H_GPP_G8,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_G9,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_G10,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_G11,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC

//[H Group]
  {GPIO_VER2_H_GPP_H0,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioHostDeepReset, GpioTermNone, GpioPadConfigUnlock   }}, //EBA01IL202C_11+
  {GPIO_VER2_H_GPP_H1,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_H2,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //FM_CATERR_N
  {GPIO_VER2_H_GPP_H3,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_H4,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_H5,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_H6,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //GPIO_WLAN_WAKE
  {GPIO_VER2_H_GPP_H7,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //GPIO_SSD1_RST# NC
  {GPIO_VER2_H_GPP_H8,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //GPIO_SSD2_RST# NC
  {GPIO_VER2_H_GPP_H9,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_H10,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,     GpioOutDefault,    GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //PCH_GPP_H10_WAKE#
  {GPIO_VER2_H_GPP_H11,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //WIRELESS_EN
  {GPIO_VER2_H_GPP_H13,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_H14,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_H15,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //GTable20200818 //GPP_H_15_SML3ALERT_N  
  {GPIO_VER2_H_GPP_H16,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_H17,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //PCIEX1#_PRSNT pull high to PRSNT2, but PRSNT1 GND
  {GPIO_VER2_H_GPP_H18,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_H19,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //PCIEX16#_PRSNT pull high to PRSNT2, but PRSNT1 GND
  {GPIO_VER2_H_GPP_H20,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //PCIEX4#_PRSNT pull high to PRSNT2, but PRSNT1 GND
  {GPIO_VER2_H_GPP_H21,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //COM_DET
  {GPIO_VER2_H_GPP_H22,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_H23,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC

//[I Group]
  {GPIO_VER2_H_GPP_I0,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_I3,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_I4,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_I9,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_I10,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_I11,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioHostDeepReset, GpioTermNone }}, //USB_OC4  #EBA01IL2_548630
  {GPIO_VER2_H_GPP_I12,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioHostDeepReset, GpioTermNone }}, //USB_OC5  #EBA01IL2_548630
  {GPIO_VER2_H_GPP_I13,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioHostDeepReset, GpioTermNone }}, //USB_OC6  #EBA01IL2_548630
  {GPIO_VER2_H_GPP_I14,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioHostDeepReset, GpioTermNone }}, //USB_OC7  #EBA01IL2_548630

//[J Group]
  {GPIO_VER2_H_GPP_J0,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //CNV_GNSS_PA_BLANKING
  {GPIO_VER2_H_GPP_J1,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //CPU_C10_GATE
  {GPIO_VER2_H_GPP_J2,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //CNV_BRI_DT
  {GPIO_VER2_H_GPP_J3,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //CNV_BRI_RSP
  {GPIO_VER2_H_GPP_J4,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //CNV_RGI_DT
  {GPIO_VER2_H_GPP_J5,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //CNV_RGI_RSP
  {GPIO_VER2_H_GPP_J8,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }},
  {GPIO_VER2_H_GPP_J9,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }},
//[K Group]
  {GPIO_VER2_H_GPP_K0,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //TBT_CIO_PLUG_EVENT_N
  {GPIO_VER2_H_GPP_K1,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //GPIO_PCIESLOT3_RST
  {GPIO_VER2_H_GPP_K2,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //GPIO_PCIESLOT2_RST
  {GPIO_VER2_H_GPP_K3,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_K4,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //TBT_FRC_PWR
  {GPIO_VER2_H_GPP_K5,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //BTB_ALERT_PCH_N
  {GPIO_VER2_H_GPP_K8,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //CORE_VID_0
  {GPIO_VER2_H_GPP_K9,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //CORE_VID_1
  {GPIO_VER2_H_GPP_K10, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioHostDeepReset, GpioTermNone, GpioPadConfigUnlock }}, //PCH_RST_GPP_K10 //EBA01_00G_1
  {GPIO_VER2_H_GPP_K11, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //TBT_CIO_PWR_EN

//[R Group]
  {GPIO_VER2_H_GPP_R0,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //HDA_BCLK
  {GPIO_VER2_H_GPP_R1,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //HDA_SYNC
  {GPIO_VER2_H_GPP_R2,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //HDA_SDO
  {GPIO_VER2_H_GPP_R3,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //HDA_SDIO
  {GPIO_VER2_H_GPP_R4,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //HDA_RST
  {GPIO_VER2_H_GPP_R5,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_R6,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_R7,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_R8,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_R9,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_R10, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_R11, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_R12, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_R13, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_R14, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //BoardID
  {GPIO_VER2_H_GPP_R15, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //BoardID
  {GPIO_VER2_H_GPP_R16, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //BoardID
  {GPIO_VER2_H_GPP_R17, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //BoardID
  {GPIO_VER2_H_GPP_R18, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //BoardID
  {GPIO_VER2_H_GPP_R19, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //BoardID

//[S Group]
  {GPIO_VER2_H_GPP_S0,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_S1,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_S2,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_S3,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_S4,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_S5,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_S6,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC
  {GPIO_VER2_H_GPP_S7,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC

//[GDP Group]
  {GPIO_VER2_H_GPD0,    {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //BATLOW
  {GPIO_VER2_H_GPD1,    {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //MS_EVENT NC
  {GPIO_VER2_H_GPD2,    {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //LAN_WAKE
  {GPIO_VER2_H_GPD3,    {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //PWRBTN
  {GPIO_VER2_H_GPD4,    {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SLP_S3
  {GPIO_VER2_H_GPD5,    {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SLP_S4
  {GPIO_VER2_H_GPD6,    {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SLP_A
  {GPIO_VER2_H_GPD7,    {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //USB_WAKEOUT
  {GPIO_VER2_H_GPD8,    {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SUSCLK
  {GPIO_VER2_H_GPD9,    {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SLP_WLAN
  {GPIO_VER2_H_GPD10,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //SLP_S5
  {GPIO_VER2_H_GPD11,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //LANPHYPC
  {GPIO_VER2_H_GPD12,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioPlatformReset, GpioTermNone }}, //NC

  {0x0}
};
//EBA01IL202E_RKLMS+<<

#endif