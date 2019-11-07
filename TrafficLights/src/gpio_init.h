#ifndef __GPIO_INIT_H_
#define __GPIO_INIT_H_

#include "xgpio.h"		// Added for xgpio object definitions

XStatus initGpio(void);

// Display regions
XGpio  REGION_0_COLOUR;
XGpio  REGION_1_COLOUR;
XGpio  REGION_2_COLOUR;
XGpio  REGION_3_COLOUR;
XGpio  REGION_4_COLOUR;
XGpio  REGION_5_COLOUR;
XGpio  REGION_6_COLOUR;
XGpio  REGION_7_COLOUR;
XGpio  REGION_8_COLOUR;
XGpio  REGION_9_COLOUR;
XGpio  REGION_10_COLOUR;
XGpio  REGION_11_COLOUR;

// PD button
XGpio PD_BTN;

// LEDs
XGpio LEDs;

// 7-seg display
XGpio SEG7_HEX_OUT;
XGpio SEG7_SEL_OUT;
#endif
