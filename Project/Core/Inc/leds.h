/*
 * leds.h
 *
 *  Created on: Oct 7, 2023
 *      Author: PC
 */

#ifndef INC_LEDS_H_
#define INC_LEDS_H_

const int MAX_LED = 4;
int index_led = 0;
int led_buffer[4] = {1, 2, 3, 4};

void display7SEG(int num);
void update7SEG(int index);

#endif /* INC_LEDS_H_ */
