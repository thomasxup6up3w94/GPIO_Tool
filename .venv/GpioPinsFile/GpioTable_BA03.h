#ifndef _AMI_OEM_GPIO_LIB_SAMPLE_H_
#define _AMI_OEM_GPIO_LIB_SAMPLE_H_

#include <Pins/GpioPinsVer2Lp.h>
#include <Pins/GpioPinsVer4S.h>
#include <Library/GpioLib.h>
#include <Library/GpioConfig.h>



// GPIO tables for pre-memory phase
GLOBAL_REMOVE_IF_UNREFERENCED GPIO_INIT_CONFIG mGpioTableAdlPreMem[]=
{
//     GPIO Pin,               Pmode,         GPI_IS,          GpioDir,      GPIOTxState   GPIRoutConfig, RxEvCfg, PadRstCfg,         Term,

//[A Group]
//{GPIO_VER4_S_GPP_A0,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //ESPI_IO0
//{GPIO_VER4_S_GPP_A1,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //ESPI_IO1
//{GPIO_VER4_S_GPP_A2,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //ESPI_IO2
//{GPIO_VER4_S_GPP_A3,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //ESPI_IO3
//{GPIO_VER4_S_GPP_A4,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //ESPI_CS0#
//{GPIO_VER4_S_GPP_A5,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //ESPI_CLK
//{GPIO_VER4_S_GPP_A6,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //ESPI_RESET#
//BA03_20211117e-  {GPIO_VER4_S_GPP_A7,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //ESPI_CS1#
  {GPIO_VER4_S_GPP_A8,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_A9,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
//BA03_20211117e-  {GPIO_VER4_S_GPP_A10,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //ESPI_ALERT0#
  {GPIO_VER4_S_GPP_A11,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_A12,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_A13,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_A14,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC

//[B Group]
  {GPIO_VER4_S_GPP_B0,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_B1,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_B2,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //PMC_ALERT#???
  {GPIO_VER4_S_GPP_B3,   {GpioPadModeGpio,     GpioHostOwnAcpi,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault, GpioPadConfigUnlock}}, //NC //BA03_20211215a+ BT:GpioHostOwnGpio->GpioHostOwnAcpi, GpioPadConfigUnlock
  {GPIO_VER4_S_GPP_B4,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_B5,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_B6,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_B7,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_B8,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_B9,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_B10,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_B11,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_B12,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermDefault }}, //SLP_S0# //BA03_20211117e GpioResetDefault->GpioPlatformReset
  {GPIO_VER4_S_GPP_B13,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermDefault }}, //PLTRST# //BA03_20211117e GpioResetDefault->GpioPlatformReset
  {GPIO_VER4_S_GPP_B14,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault, GpioPadConfigUnlock }}, //SPKR //BA03RPL_20221110a //BA03_20220125a add GpioPadConfigUnlock
  {GPIO_VER4_S_GPP_B15,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_B16,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_B17,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //LAN_RST#, default high
  {GPIO_VER4_S_GPP_B18,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //PMC_ALERT#
  {GPIO_VER4_S_GPP_B19,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //M2E_WLAN_DIS#
  {GPIO_VER4_S_GPP_B20,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //PCB_ID
  {GPIO_VER4_S_GPP_B21,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_B22,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_B23,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //HW Not used

//[C Group]
  {GPIO_VER4_S_GPP_C0,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermDefault }}, //SMBCLK_VSB_PCH //BA03_20211117e GpioResetDefault->GpioPlatformReset
  {GPIO_VER4_S_GPP_C1,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermDefault }}, //SMBDATA_VSB_PCH //BA03_20211117e GpioResetDefault->GpioPlatformReset
  {GPIO_VER4_S_GPP_C2,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //HW Not used???
  {GPIO_VER4_S_GPP_C3,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_C4,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_C5,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //HW Not used???
  {GPIO_VER4_S_GPP_C6,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_C7,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_C8,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_C9,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_C10,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_C11,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_C12,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_C13,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_C14,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_C15,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_C16,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //SMBDATA_VSB_IT8851/USB TYPE C PD I2C
  {GPIO_VER4_S_GPP_C17,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //SMBCLK_VSB_IT8851/USB TYPE C PD I2C
  {GPIO_VER4_S_GPP_C18,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_C19,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_C20,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_C21,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_C22,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_C23,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC

//[D Group]
  {GPIO_VER4_S_GPP_D0,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermDefault }}, //CLKREQ#0 //BA03_20211117e GpioResetDefault->GpioPlatformReset
  {GPIO_VER4_S_GPP_D1,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_D2,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_D3,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_D4,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //SMBCLK_VSB_MUX_PCH/USB TYPE C PD I2C
  {GPIO_VER4_S_GPP_D5,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_D6,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_D7,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_D8,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_D9,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermDefault }}, //SML0_CLK_PCH/Intel LAM I219V SMB //BA03_20211117e GpioResetDefault->GpioPlatformReset
  {GPIO_VER4_S_GPP_D10,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermDefault }}, //SML0_DAT_PCH/Intel LAM I219V SMB //BA03_20211117e GpioResetDefault->GpioPlatformReset
  {GPIO_VER4_S_GPP_D11,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_D12,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_D13,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_D14,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_D15,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //SMBDAT_VSB_MUX_PCH/USB TYPE C PD I2C
  {GPIO_VER4_S_GPP_D16,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_D17,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_D18,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_D19,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_D20,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_D21,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_D22,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_D23,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC

//[E Group]
  {GPIO_VER4_S_GPP_E0,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_E1,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //???
  {GPIO_VER4_S_GPP_E2,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //???
  {GPIO_VER4_S_GPP_E3,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_E4,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_E5,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_E6,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //PE1_WAKE#/PCIE 16X slot wake-up#
  {GPIO_VER4_S_GPP_E7,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_E8,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //PCH_SATA_LED#
  {GPIO_VER4_S_GPP_E9,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermDefault }}, //USB_OC#0 //BA03_20211103d GpioHostDeepReset->GpioPlatformReset
  {GPIO_VER4_S_GPP_E10,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermDefault }}, //USB_OC#1 //BA03_20211103d GpioHostDeepReset->GpioPlatformReset
  {GPIO_VER4_S_GPP_E11,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermDefault }}, //USB_OC#2 //BA03_20211103d GpioHostDeepReset->GpioPlatformReset
  {GPIO_VER4_S_GPP_E12,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermDefault }}, //USB_OC#3 //BA03_20211103d GpioHostDeepReset->GpioPlatformReset
  {GPIO_VER4_S_GPP_E13,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_E14,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_E15,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_E16,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_E17,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_E18,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_E19,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_E20,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_E21,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC

//[F Group]
  {GPIO_VER4_S_GPP_F0,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioOutDefault, GpioResetDefault, GpioTermDefault}}, //intel DCI debug port/???
  {GPIO_VER4_S_GPP_F1,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //intel DCI debug port/???
  {GPIO_VER4_S_GPP_F2,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //intel DCI debug port/???
  {GPIO_VER4_S_GPP_F3,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //intel DCI debug port/???
  {GPIO_VER4_S_GPP_F4,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //M2 WIFI reset#/NC
  {GPIO_VER4_S_GPP_F5,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_F6,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_F7,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_F8,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //intel DCI debug port/NC
  {GPIO_VER4_S_GPP_F9,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_F10,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_F11,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //PCIE 1X slot reset/
  {GPIO_VER4_S_GPP_F12,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_F13,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_F14,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //PCH_PSON#_SIO
  {GPIO_VER4_S_GPP_F15,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //PCH_RSVD_SKTOCC#/NC
  {GPIO_VER4_S_GPP_F16,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_F17,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_F18,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_F19,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_F20,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_F21,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_F22,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_F23,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC

//[G Group]
  {GPIO_VER4_S_GPP_G0,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_G1,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_G2,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_G3,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_G4,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_G5,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //SLP_DRAM#
  {GPIO_VER4_S_GPP_G6,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_G7,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC

//[H Group]
  {GPIO_VER4_S_GPP_H0,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_H1,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_H2,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermDefault }}, //CLK_REQ#8/M2 SSD slot clk req //BA03_20211117e GpioResetDefault->GpioPlatformReset
  {GPIO_VER4_S_GPP_H3,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_H4,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_H5,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermDefault }}, //CLKREQ#11/M2 WLAN slot clk req //BA03_20211117e GpioResetDefault->GpioPlatformReset
  {GPIO_VER4_S_GPP_H6,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermDefault }}, //CLKREQ#12/Onboard LAN clk req //BA03_20211117e GpioResetDefault->GpioPlatformReset
  {GPIO_VER4_S_GPP_H7,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_H8,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_H9,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_H10,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_H11,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_H12,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_H13,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_H14,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_H15,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_H16,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //Reserve ID
  {GPIO_VER4_S_GPP_H17,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //Reserve ID
  {GPIO_VER4_S_GPP_H18,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_H19,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //Reserve ID
  {GPIO_VER4_S_GPP_H20,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_H21,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_H22,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_H23,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC

//[I Group]
  {GPIO_VER4_S_GPP_I0,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_I1,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //HDMI_DDP1_HPD
  {GPIO_VER4_S_GPP_I2,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //DP_DDP2_HPD
  {GPIO_VER4_S_GPP_I3,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //HDMI_DDPC_HPD
  {GPIO_VER4_S_GPP_I4,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_I5,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_I6,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_I7,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_I8,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_I9,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_I10,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_I11,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset,GpioTermDefault }}, //USB_OC4 //BA03_20211103d GpioHostDeepReset->GpioPlatformReset
  {GPIO_VER4_S_GPP_I12,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_I13,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_I14,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_I15,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_I16,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_I17,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_I18,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_I19,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //Reserve BIOS MB ID
  {GPIO_VER4_S_GPP_I20,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //Reserve BIOS MB ID
  {GPIO_VER4_S_GPP_I21,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirIn,      GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //Reserve BIOS MB ID
  {GPIO_VER4_S_GPP_I22,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC

//[J Group]
  {GPIO_VER4_S_GPP_J0,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_J1,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //C10_GATE#
  {GPIO_VER4_S_GPP_J2,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_J3,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_J4,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_J5,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_J6,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_J7,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_J8,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_J9,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermDefault }}, //CLKREQ#17 //BA03_20211117e GpioResetDefault->GpioPlatformReset
  {GPIO_VER4_S_GPP_J10,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_J11,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  
//[K Group]
  {GPIO_VER4_S_GPP_K0,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_K1,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_K2,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_K3,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_K4,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_K5,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
//  {GPIO_VER4_S_GPP_K6,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NA
//  {GPIO_VER4_S_GPP_K7,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NA
  {GPIO_VER4_S_GPP_K8,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //CORE_VID_0-->PCH_VID0
  {GPIO_VER4_S_GPP_K9,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //CORE_VID_1-->PCH_VID1
//  {GPIO_VER4_S_GPP_K10, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }},//NA
  {GPIO_VER4_S_GPP_K11, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC

//[R Group]
  {GPIO_VER4_S_GPP_R0,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //HDA_BCLK-->AZ_BITCLK
  {GPIO_VER4_S_GPP_R1,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //HDA_SYNC-->AZ_SYNC
  {GPIO_VER4_S_GPP_R2,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //HDA_SDO-->AZ_SDOUT_R
  {GPIO_VER4_S_GPP_R3,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //HDA_SDIO-->AZ_SDIN0
  {GPIO_VER4_S_GPP_R4,  {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //HDA_RST-->AZ_RST#
  {GPIO_VER4_S_GPP_R5,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_R6,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_R7,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_R8,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_R9,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_R10, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_R11, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_R12, {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //HDMI_DDPC_CLK/HDMI2 DDC
  {GPIO_VER4_S_GPP_R13, {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //HDMI_DDPC_DAT/HDMI2 DDC
  {GPIO_VER4_S_GPP_R14, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_R15, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_R16, {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //HDMI_DDP1_CLK/HDMI DDC
  {GPIO_VER4_S_GPP_R17, {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //HDMI_DDP1_DAT/HDMI DDC
  {GPIO_VER4_S_GPP_R18, {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //DP_DDP2_CTRLCLK/DP support HDMI DDC
  {GPIO_VER4_S_GPP_R19, {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //DP_DDP2_CTRLDAT/DP support HDMI DDC
  {GPIO_VER4_S_GPP_R20, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_R21, {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC

//[S Group]
  {GPIO_VER4_S_GPP_S0,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_S1,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_S2,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_S3,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_S4,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_S5,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_S6,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPP_S7,  {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC

//[GDP Group]
  {GPIO_VER4_S_GPD0,    {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //BATLOW#
  {GPIO_VER4_S_GPD1,    {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //PCH_ACPRESENT
  {GPIO_VER4_S_GPD2,    {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermDefault }}, //LAN_WAKE# //BA03_20211229b GpioResetDefault -> GpioPlatformReset
  {GPIO_VER4_S_GPD3,    {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset,GpioTermDefault }}, //PWRBTN# //BA03_20211115d GpioResetDefault -> GpioPlatformReset
  {GPIO_VER4_S_GPD4,    {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermDefault }}, //SLP_S3#_R //BA03_20211115d GpioResetDefault -> GpioPlatformReset
  {GPIO_VER4_S_GPD5,    {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermDefault }}, //SLP_S4#_R //BA03_20211115d GpioResetDefault -> GpioPlatformReset
  {GPIO_VER4_S_GPD6,    {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //SLP_A# ////BA03_20211117e GpioResetDefault->GpioPlatformReset
  {GPIO_VER4_S_GPD7,    {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //NC
  {GPIO_VER4_S_GPD8,    {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //PCH_SUSCLK
  {GPIO_VER4_S_GPD9,    {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //SLP_WLAN#
  {GPIO_VER4_S_GPD10,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioPlatformReset, GpioTermDefault }}, //NC (SLP_S5#)//BA03_20211117e GpioResetDefault->GpioPlatformReset
  {GPIO_VER4_S_GPD11,   {GpioPadModeNative1,  GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioResetDefault, GpioTermDefault }}, //LAN_DISABLE#(LANPHYPC)
  {GPIO_VER4_S_GPD12,   {GpioPadModeGpio,     GpioHostOwnGpio,    GpioDirOut,     GpioOutHigh,    GpioIntDefault, GpioResetDefault, GpioTermDefault, GpioPadConfigUnlock }}, //ME_DIS# //BA03_20211228a Add GpioPadConfigUnlock
  {0x0}
};

#endif //_AMI_OEM_GPIO_LIB_SAMPLE_H_
