/*
 * gpio_init.c
 *
 *  Created on: 31 Oct 2019
 *      Author: s1758499
 */

#include "gpio_init.h"

XStatus initGpio()
{
	XStatus status;


	// Display regions
	status = XGpio_Initialize(&REGION_0_COLOUR, 7);

	if (status != XST_SUCCESS)
		return XST_FAILURE;

	status = XGpio_Initialize(&REGION_1_COLOUR, 10);

	if (status != XST_SUCCESS)
		return XST_FAILURE;

	status = XGpio_Initialize(&REGION_2_COLOUR, 11);

	if (status != XST_SUCCESS)
		return XST_FAILURE;

	status = XGpio_Initialize(&REGION_3_COLOUR, 12);

	if (status != XST_SUCCESS)
		return XST_FAILURE;

	status = XGpio_Initialize(&REGION_4_COLOUR, 13);

	if (status != XST_SUCCESS)
		return XST_FAILURE;

	status = XGpio_Initialize(&REGION_5_COLOUR, 14);

	if (status != XST_SUCCESS)
		return XST_FAILURE;

	status = XGpio_Initialize(&REGION_6_COLOUR, 15);

	if (status != XST_SUCCESS)
		return XST_FAILURE;

	status = XGpio_Initialize(&REGION_7_COLOUR, 16);

	if (status != XST_SUCCESS)
		return XST_FAILURE;

	status = XGpio_Initialize(&REGION_8_COLOUR, 17);

	if (status != XST_SUCCESS)
		return XST_FAILURE;

	status = XGpio_Initialize(&REGION_9_COLOUR, 18);

	if (status != XST_SUCCESS)
		return XST_FAILURE;

	status = XGpio_Initialize(&REGION_10_COLOUR, 8);

	if (status != XST_SUCCESS)
		return XST_FAILURE;

	status = XGpio_Initialize(&REGION_11_COLOUR, 9);

	if (status != XST_SUCCESS)
		return XST_FAILURE;


	// LEDs
	status = XGpio_Initialize(&LEDs, 2);

	if (status != XST_SUCCESS)
		return XST_FAILURE;


	// 7-seg display
	status = XGpio_Initialize(&SEG7_HEX_OUT, 0);

	if (status != XST_SUCCESS)
		return XST_FAILURE;

	status = XGpio_Initialize(&SEG7_SEL_OUT, 1);

	if (status != XST_SUCCESS)
		return XST_FAILURE;


	// PD button
	status = XGpio_Initialize(&PD_BTN, 6);

	if (status != XST_SUCCESS)
		return XST_FAILURE;


	// Slide switches
	status = XGpio_Initialize(&SWITCHES, 19);

	return XST_SUCCESS;
}

