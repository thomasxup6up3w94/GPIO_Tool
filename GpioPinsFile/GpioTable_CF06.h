/** @file
  GPIO definition table for TigerLake U

@copyright
  Copyright (c) 2018 - 2020 Intel Corporation. All rights reserved
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
#ifndef _GPIO_TABLE_H_
#define _GPIO_TABLE_H_

#include <Pins/GpioPinsVer4S.h>
#include <Library/GpioLib.h>
#include <Library/GpioConfig.h>

//CF06_20230302_09 reporting >>
static GPIO_INIT_CONFIG mGpioTable[] =
{
    // GpioPad              Pmode,              GPI_IS,              GpioDir,         GPIOTxState,     GPIRoutConfig,   PadRstCfg,         Term,
    //ECF06IMS001_01 -s
    // GPIO A
    {GPIO_VER4_S_GPP_A0,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // ESPI_IO0
    {GPIO_VER4_S_GPP_A1,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // ESPI_IO1
    {GPIO_VER4_S_GPP_A2,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // ESPI_IO2
    {GPIO_VER4_S_GPP_A3,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // ESPI_IO3
    {GPIO_VER4_S_GPP_A4,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // ESPI_CS0#
    {GPIO_VER4_S_GPP_A5,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // ESPI_CLK
    {GPIO_VER4_S_GPP_A6,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // ESPI_RESET#
    {GPIO_VER4_S_GPP_A10, { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // ESPI_ALERT0#
    {GPIO_VER4_S_GPP_A11, { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // ESPI_ALERT1#
    //UnUse
    {GPIO_VER4_S_GPP_A7,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_A8,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_A9,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_A12, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_A13, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_A14, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A  
    
    //GPIO B
    {GPIO_VER4_S_GPP_B12, { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // SLP_S0#   
    {GPIO_VER4_S_GPP_B13, { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // PLTRST#
    {GPIO_VER4_S_GPP_B14, { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // SPKR
    {GPIO_VER4_S_GPP_B20, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDefault,  GpioResumeReset,   GpioTermDefault}}, // SMI#
    {GPIO_VER4_S_GPP_B23, { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // SMLINK1_ALERT_N
    //UnUse
    {GPIO_VER4_S_GPP_B0,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_B1,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_B2,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_B3,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_B4,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_B5,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_B6,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_B7,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_B8,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_B9,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_B10, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_B11, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_B15, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_B16, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_B17, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_B18, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_B19, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_B21, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A   
    {GPIO_VER4_S_GPP_B22, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    
    //GPIO C
    {GPIO_VER4_S_GPP_C0,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // SMBCLK_R
    {GPIO_VER4_S_GPP_C1,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // SMBDATA_R
    {GPIO_VER4_S_GPP_C2,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // TLS_STRAP
    {GPIO_VER4_S_GPP_C5,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // ESPI_STRAP
    {GPIO_VER4_S_GPP_C23, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirIn,       GpioOutDefault,  GpioIntDefault,  GpioResumeReset,   GpioTermDefault}}, // H_PROCHOT_PCH_N_R
    //UnUse
    {GPIO_VER4_S_GPP_C3,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_C4,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_C6,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_C7,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_C8,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_C9,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_C10, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_C11, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_C12, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_C13, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_C14, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_C15, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A 
    {GPIO_VER4_S_GPP_C16, { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // N/A
    {GPIO_VER4_S_GPP_C17, { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // N/A
    {GPIO_VER4_S_GPP_C18, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_C19, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A   
    {GPIO_VER4_S_GPP_C20, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A   
    {GPIO_VER4_S_GPP_C21, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A   
    {GPIO_VER4_S_GPP_C22, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDefault,  GpioResumeReset,   GpioTermNone}},    // N/A  
    
    //GPIO D
    {GPIO_VER4_S_GPP_D0,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // PCIE16X_CLK_REQ0#
    {GPIO_VER4_S_GPP_D2,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // LAN1_CLK_REQ2#
    {GPIO_VER4_S_GPP_D3,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // LAN1_CLK_REQ3#
    {GPIO_VER4_S_GPP_D9,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // SML0_CLK_PCH
    {GPIO_VER4_S_GPP_D10, { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // SML0_DATA_PCH
    {GPIO_VER4_S_GPP_D11, { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // PCI_CLK_REQ4##
    {GPIO_VER4_S_GPP_D12, { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // PCIE4X_CLK_REQ5#
    //UnUse
    {GPIO_VER4_S_GPP_D1,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDefault,  GpioResumeReset,   GpioTermNone}},    // N/A !!!
    {GPIO_VER4_S_GPP_D4,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDefault,  GpioResumeReset,   GpioTermNone}},    // N/A !!!
    {GPIO_VER4_S_GPP_D5,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_D6,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_D7,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_D8,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_D13, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_D14, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A 
    {GPIO_VER4_S_GPP_D15, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A 
    {GPIO_VER4_S_GPP_D16, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A 
    {GPIO_VER4_S_GPP_D17, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A 
    {GPIO_VER4_S_GPP_D18, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A 
    {GPIO_VER4_S_GPP_D19, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A 
    {GPIO_VER4_S_GPP_D20, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A 
    {GPIO_VER4_S_GPP_D21, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A 
    {GPIO_VER4_S_GPP_D22, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A 
    {GPIO_VER4_S_GPP_D23, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A 
      
    //GPIO E  
    {GPIO_VER4_S_GPP_E8,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // SATA_LED#
    {GPIO_VER4_S_GPP_E9,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // USB_OC0#
    {GPIO_VER4_S_GPP_E10, { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // USB_OC1#
    {GPIO_VER4_S_GPP_E11, { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // USB_OC2#
    {GPIO_VER4_S_GPP_E12, { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // USB_OC3#
    //UnUse
    {GPIO_VER4_S_GPP_E0,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDefault,  GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_E1,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDefault,  GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_E2,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDefault,  GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_E3,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDefault,  GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_E4,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDefault,  GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_E5,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDefault,  GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_E6,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDefault,  GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_E7,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDefault,  GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_E13, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_E14, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_E15, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_E16, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_E17, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_E18, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_E19, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A   
    {GPIO_VER4_S_GPP_E20, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A   
    {GPIO_VER4_S_GPP_E21, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A   
    
    //GPIO F
    {GPIO_VER4_S_GPP_F5,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirIn,       GpioOutDefault,  GpioIntDis,      GpioResumeReset,   GpioTermDefault}}, // TPM_PIRQA#
    {GPIO_VER4_S_GPP_F14, { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // PS_ON#_PCH !!!
    {GPIO_VER4_S_GPP_F15, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirIn,       GpioOutDefault,  GpioIntDis,      GpioResumeReset,   GpioTermDefault}}, // SKTOCC#_C
    {GPIO_VER4_S_GPP_F18, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutHigh,     GpioIntDis,      GpioResumeReset,   GpioTermDefault}}, // LAN2_DISABLE#_R
    //UnUse
    {GPIO_VER4_S_GPP_F0,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_F1,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_F2,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_F3,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_F4,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_F6,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_F7,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_F8,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_F9,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_F10, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_F11, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_F12, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_F13, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_F16, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_F17, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_F19, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A  
    {GPIO_VER4_S_GPP_F20, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A   
    {GPIO_VER4_S_GPP_F21, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A   
    {GPIO_VER4_S_GPP_F22, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_F23, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
     
    //GPIO G
    {GPIO_VER4_S_GPP_G0,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirIn,       GpioOutDefault,  GpioIntDis,      GpioResumeReset,   GpioTermDefault}}, // DG_FORCE_PWR
    {GPIO_VER4_S_GPP_G2,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // DNX_FORCE_RELOAD
    {GPIO_VER4_S_GPP_G5,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // SLP_DRAM#
    {GPIO_VER4_S_GPP_G7,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirIn,       GpioOutDefault,  GpioIntDis,      GpioResumeReset,   GpioTermDefault}}, // DG_CIO_PLUG_EVENT#
    //UnUse
    {GPIO_VER4_S_GPP_G1,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_G3,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_G4,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_G6,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
     
    //GPIO H
    {GPIO_VER4_S_GPP_H12, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirIn,       GpioOutDefault,  GpioIntDis,      GpioResumeReset,   GpioTermDefault}}, // FM_ESPI_FLASH_MODE
    {GPIO_VER4_S_GPP_H15, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirIn,       GpioOutDefault,  GpioIntDis,      GpioResumeReset,   GpioTermDefault}}, // PCH_GPP_H15
    {GPIO_VER4_S_GPP_H18, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirIn,       GpioOutDefault,  GpioIntDis,      GpioResumeReset,   GpioTermDefault}}, // GPP_H_18_SML4ALERT#
    //UnUse
    {GPIO_VER4_S_GPP_H0,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_H1,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_H2,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_H3,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_H4,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_H5,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_H6,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_H7,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_H8,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_H9,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_H10, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_H11, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_H13, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A(HW no Write) !!!
    {GPIO_VER4_S_GPP_H14, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_H16, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_H17, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_H19, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_H20, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A  
    {GPIO_VER4_S_GPP_H21, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A   
    {GPIO_VER4_S_GPP_H22, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_H23, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A  
        
    //GPIO I
    {GPIO_VER4_S_GPP_I0,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // GPP_I_0_EXT_PWR_GATE#
    {GPIO_VER4_S_GPP_I1,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // DDPB_VGA_HPD
    {GPIO_VER4_S_GPP_I3,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // DDPD_HDMI_HPD
    {GPIO_VER4_S_GPP_I11, { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // USB_OC4#
    {GPIO_VER4_S_GPP_I12, { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // USB_OC5#
    {GPIO_VER4_S_GPP_I13, { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // USB_OC6#
    {GPIO_VER4_S_GPP_I14, { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // USB_OC7#
    {GPIO_VER4_S_GPP_I18, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirIn,       GpioOutDefault,  GpioIntDis,      GpioResumeReset,   GpioTermDefault}}, // REBOOT_STRAP
    {GPIO_VER4_S_GPP_I22, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirIn,       GpioOutDefault,  GpioIntDis,      GpioResumeReset,   GpioTermDefault}}, // BBS_STRAP
    //UnUse  
    {GPIO_VER4_S_GPP_I2,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_I4,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_I5,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_I6,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_I7,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_I8,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_I9,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_I10, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_I15, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_I16, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_I17, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_I19, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_I20, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A  
    {GPIO_VER4_S_GPP_I21, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A   
       
    //GPIO J 
    {GPIO_VER4_S_GPP_J2,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // CNVI_BRI_DT_R
    {GPIO_VER4_S_GPP_J4,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // CNVI_RGI_DT_R
    //UnUse
    {GPIO_VER4_S_GPP_J0,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_J1,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_J3,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_J5,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_J6,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_J7,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_J8,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_J9,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_J10, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_J11, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    
    //GPIO K
    {GPIO_VER4_S_GPP_K8,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // GPP_K_8_CORE_VID_0
    {GPIO_VER4_S_GPP_K9,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // GPP_K_9_CORE_VID_1
    //UnUse 
    {GPIO_VER4_S_GPP_K0,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_K1,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_K2,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_K3,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_K4,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_K5,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_K6,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_K7,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_K10, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_K11, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
         
    //GPIO R
    {GPIO_VER4_S_GPP_R0,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // HDA_BCLK
    {GPIO_VER4_S_GPP_R1,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // HDA_SYNC_R
    {GPIO_VER4_S_GPP_R2,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // HDA_SDO
    {GPIO_VER4_S_GPP_R3,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // HDA_SDIN
    {GPIO_VER4_S_GPP_R4,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // HDA_RST_N 
    {GPIO_VER4_S_GPP_R12, { GpioPadModeNative2, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // HDMI_DDP3_CLK 
    {GPIO_VER4_S_GPP_R13, { GpioPadModeNative2, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // HDMI_DDP3_DAT
    {GPIO_VER4_S_GPP_R16, { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // DDP1_CLK
    {GPIO_VER4_S_GPP_R17, { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}}, // DDP1_DAT
    //UnUse
    {GPIO_VER4_S_GPP_R5,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_R6,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_R7,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_R8,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_R9,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_R10, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_R11, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_R14, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_R15, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_R18, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_R19, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A 
    {GPIO_VER4_S_GPP_R20, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A  
    {GPIO_VER4_S_GPP_R21, { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A  
    
    //GPIO S
    {GPIO_VER4_S_GPP_S0, { GpioPadModeGpio,     GpioHostOwnGpio,     GpioDirIn,       GpioOutDefault,  GpioIntDis,      GpioResumeReset,   GpioTermDefault}}, // PCH_GPP_S0
    {GPIO_VER4_S_GPP_S1, { GpioPadModeGpio,     GpioHostOwnGpio,     GpioDirIn,       GpioOutDefault,  GpioIntDis,      GpioResumeReset,   GpioTermDefault}}, // PCH_GPP_S1
    {GPIO_VER4_S_GPP_S2, { GpioPadModeGpio,     GpioHostOwnGpio,     GpioDirIn,       GpioOutDefault,  GpioIntDis,      GpioResumeReset,   GpioTermDefault}}, // PCH_GPP_S2
    //UnUse
    {GPIO_VER4_S_GPP_S3, { GpioPadModeGpio,     GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_S4, { GpioPadModeGpio,     GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_S5, { GpioPadModeGpio,     GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_S6, { GpioPadModeGpio,     GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A
    {GPIO_VER4_S_GPP_S7, { GpioPadModeGpio,     GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},    // N/A  
     
    //GPD
    {GPIO_VER4_S_GPD0,   { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}},  // PCH_BATLOW#
    {GPIO_VER4_S_GPD1,   { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}},  // PCH_ACPRESENT
    {GPIO_VER4_S_GPD2,   { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}},  // LAN_WAKE#
    {GPIO_VER4_S_GPD3,   { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}},  // PWRBTN#
    {GPIO_VER4_S_GPD4,   { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}},  // SLP_S3#
    {GPIO_VER4_S_GPD5,   { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}},  // SLP_S4#
    {GPIO_VER4_S_GPD6,   { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}},  // SLP_A##
    {GPIO_VER4_S_GPD7,   { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermDefault}},  // GPD_7
    {GPIO_VER4_S_GPD8,   { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}},  // SUSCLK
    {GPIO_VER4_S_GPD9,   { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermDefault}},  // SLP_WLAN#
    {GPIO_VER4_S_GPD10,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}},  // SLP_S5#
    {GPIO_VER4_S_GPD11,  { GpioPadModeNative1, GpioHostOwnDefault,  GpioDirDefault,  GpioOutDefault,  GpioIntDefault,  GpioResetDefault,  GpioTermDefault}},  // LAN1_DISABLE#
    //UnUse
    {GPIO_VER4_S_GPD12,  { GpioPadModeGpio,    GpioHostOwnGpio,     GpioDirOut,      GpioOutLow,      GpioIntDis,      GpioResumeReset,   GpioTermNone}},     // N/A
    //ECF06IMS001_01 -e
    {0x0}

};
//CF06_20230302_09 reporting <<

#endif // _GPIO_TABLE_H_
