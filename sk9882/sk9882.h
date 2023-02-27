/*
 * sk9882.h
 *
 *  Created on: Feb 26, 2023
 *      Author: TheMullet
 */

#ifndef SK9882_H_
#define SK9882_H_
#include "stm32f0xx_hal.h"

#define NUM_LEDS 10


void update_LED_String(unsigned char *, unsigned char *, unsigned char *);
void clear_all_LEDs(void);

#endif /* SK9882_H_ */
