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

extern const int MAX_LED_MATRIX;
extern int index_led_matrix;


void display7SEG(int num);
void update7SEG(int index);
void updateClockBuffer(int hour, int minute);
void updateLEDMatrix(int index);
void update_shift(int shift);
#endif /* INC_LEDS_H_ */
