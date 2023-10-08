/*
 * leds.h
 *
 *  Created on: Oct 7, 2023
 *      Author: PC
 */

#ifndef INC_LEDS_H_
#define INC_LEDS_H_

extern const int MAX_LED;
extern int index_led;
extern int led_buffer[4];

void display7SEG(int num);
void update7SEG(int index);

#endif /* INC_LEDS_H_ */
