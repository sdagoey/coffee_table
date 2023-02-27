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
unsigned char LED_blue_array[NUM_LEDS];
unsigned char LED_green_array[NUM_LEDS];
unsigned char LED_red_array[NUM_LEDS];
extern SPI_HandleTypeDef hspi1;
static unsigned char start_frame[4] = {0x00,0x00,0x00,0x00};
static unsigned char end_frame[4] = {0xFF,0xFF,0xFF,0xFF};
unsigned char global_brighness = 0xE;

void update_LED_String(unsigned char *, unsigned char *, unsigned char *);
void clear_all_LEDs(void);

#endif /* SK9882_H_ */
