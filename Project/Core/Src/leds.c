/*
 * leds.c
 *
 *  Created on: Oct 7, 2023
 *      Author: PC
 */
#include "leds.h"
#include "main.h"

const int MAX_LED = 4;
int index_led = 0;
int led_buffer[4] = {1, 2, 3, 4};

const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
uint8_t matrix_buffer[8] = {0xFB, 0xF5, 0xEE, 0xEE, 0xE0, 0xEE, 0xEE, 0xEE};
int shift_matrix = 0;
void display7SEG(int num){
	switch(num){
	case 0:
		  HAL_GPIO_WritePin(Led_a_GPIO_Port, Led_a_Pin, RESET);
		  HAL_GPIO_WritePin(Led_b_GPIO_Port, Led_b_Pin, RESET);
		  HAL_GPIO_WritePin(Led_c_GPIO_Port, Led_c_Pin, RESET);
		  HAL_GPIO_WritePin(Led_d_GPIO_Port, Led_d_Pin, RESET);
		  HAL_GPIO_WritePin(Led_e_GPIO_Port, Led_e_Pin, RESET);
		  HAL_GPIO_WritePin(Led_f_GPIO_Port, Led_f_Pin, RESET);
		  HAL_GPIO_WritePin(Led_g_GPIO_Port, Led_g_Pin, SET);
		  break;
	case 1:
		  HAL_GPIO_WritePin(Led_a_GPIO_Port, Led_a_Pin, SET);
		  HAL_GPIO_WritePin(Led_b_GPIO_Port, Led_b_Pin, RESET);
		  HAL_GPIO_WritePin(Led_c_GPIO_Port, Led_c_Pin, RESET);
		  HAL_GPIO_WritePin(Led_d_GPIO_Port, Led_d_Pin, SET);
		  HAL_GPIO_WritePin(Led_e_GPIO_Port, Led_e_Pin, SET);
		  HAL_GPIO_WritePin(Led_f_GPIO_Port, Led_f_Pin, SET);
		  HAL_GPIO_WritePin(Led_g_GPIO_Port, Led_g_Pin, SET);
		  break;
	case 2:
		  HAL_GPIO_WritePin(Led_a_GPIO_Port, Led_a_Pin, RESET);
		  HAL_GPIO_WritePin(Led_b_GPIO_Port, Led_b_Pin, RESET);
		  HAL_GPIO_WritePin(Led_c_GPIO_Port, Led_c_Pin, SET);
		  HAL_GPIO_WritePin(Led_d_GPIO_Port, Led_d_Pin, RESET);
		  HAL_GPIO_WritePin(Led_e_GPIO_Port, Led_e_Pin, RESET);
		  HAL_GPIO_WritePin(Led_f_GPIO_Port, Led_f_Pin, SET);
		  HAL_GPIO_WritePin(Led_g_GPIO_Port, Led_g_Pin, RESET);
		  break;
	case 3:
		  HAL_GPIO_WritePin(Led_a_GPIO_Port, Led_a_Pin, RESET);
		  HAL_GPIO_WritePin(Led_b_GPIO_Port, Led_b_Pin, RESET);
		  HAL_GPIO_WritePin(Led_c_GPIO_Port, Led_c_Pin, RESET);
		  HAL_GPIO_WritePin(Led_d_GPIO_Port, Led_d_Pin, RESET);
		  HAL_GPIO_WritePin(Led_e_GPIO_Port, Led_e_Pin, SET);
		  HAL_GPIO_WritePin(Led_f_GPIO_Port, Led_f_Pin, SET);
		  HAL_GPIO_WritePin(Led_g_GPIO_Port, Led_g_Pin, RESET);
		  break;
	case 4:
		  HAL_GPIO_WritePin(Led_a_GPIO_Port, Led_a_Pin, SET);
		  HAL_GPIO_WritePin(Led_b_GPIO_Port, Led_b_Pin, RESET);
		  HAL_GPIO_WritePin(Led_c_GPIO_Port, Led_c_Pin, RESET);
		  HAL_GPIO_WritePin(Led_d_GPIO_Port, Led_d_Pin, SET);
		  HAL_GPIO_WritePin(Led_e_GPIO_Port, Led_e_Pin, SET);
		  HAL_GPIO_WritePin(Led_f_GPIO_Port, Led_f_Pin, RESET);
		  HAL_GPIO_WritePin(Led_g_GPIO_Port, Led_g_Pin, RESET);
		  break;
	case 5:
		  HAL_GPIO_WritePin(Led_a_GPIO_Port, Led_a_Pin, RESET);
		  HAL_GPIO_WritePin(Led_b_GPIO_Port, Led_b_Pin, SET);
		  HAL_GPIO_WritePin(Led_c_GPIO_Port, Led_c_Pin, RESET);
		  HAL_GPIO_WritePin(Led_d_GPIO_Port, Led_d_Pin, RESET);
		  HAL_GPIO_WritePin(Led_e_GPIO_Port, Led_e_Pin, SET);
		  HAL_GPIO_WritePin(Led_f_GPIO_Port, Led_f_Pin, RESET);
		  HAL_GPIO_WritePin(Led_g_GPIO_Port, Led_g_Pin, RESET);
		  break;
	case 6:
		  HAL_GPIO_WritePin(Led_a_GPIO_Port, Led_a_Pin, RESET);
		  HAL_GPIO_WritePin(Led_b_GPIO_Port, Led_b_Pin, SET);
		  HAL_GPIO_WritePin(Led_c_GPIO_Port, Led_c_Pin, RESET);
		  HAL_GPIO_WritePin(Led_d_GPIO_Port, Led_d_Pin, RESET);
		  HAL_GPIO_WritePin(Led_e_GPIO_Port, Led_e_Pin, RESET);
		  HAL_GPIO_WritePin(Led_f_GPIO_Port, Led_f_Pin, RESET);
		  HAL_GPIO_WritePin(Led_g_GPIO_Port, Led_g_Pin, RESET);
		  break;
	case 7:
		  HAL_GPIO_WritePin(Led_a_GPIO_Port, Led_a_Pin, RESET);
		  HAL_GPIO_WritePin(Led_b_GPIO_Port, Led_b_Pin, RESET);
		  HAL_GPIO_WritePin(Led_c_GPIO_Port, Led_c_Pin, RESET);
		  HAL_GPIO_WritePin(Led_d_GPIO_Port, Led_d_Pin, SET);
		  HAL_GPIO_WritePin(Led_e_GPIO_Port, Led_e_Pin, SET);
		  HAL_GPIO_WritePin(Led_f_GPIO_Port, Led_f_Pin, SET);
		  HAL_GPIO_WritePin(Led_g_GPIO_Port, Led_g_Pin, SET);
		  break;
	case 8:
		  HAL_GPIO_WritePin(Led_a_GPIO_Port, Led_a_Pin, RESET);
		  HAL_GPIO_WritePin(Led_b_GPIO_Port, Led_b_Pin, RESET);
		  HAL_GPIO_WritePin(Led_c_GPIO_Port, Led_c_Pin, RESET);
		  HAL_GPIO_WritePin(Led_d_GPIO_Port, Led_d_Pin, RESET);
		  HAL_GPIO_WritePin(Led_e_GPIO_Port, Led_e_Pin, RESET);
		  HAL_GPIO_WritePin(Led_f_GPIO_Port, Led_f_Pin, RESET);
		  HAL_GPIO_WritePin(Led_g_GPIO_Port, Led_g_Pin, RESET);
		  break;
	case 9:
		  HAL_GPIO_WritePin(Led_a_GPIO_Port, Led_a_Pin, RESET);
		  HAL_GPIO_WritePin(Led_b_GPIO_Port, Led_b_Pin, RESET);
		  HAL_GPIO_WritePin(Led_c_GPIO_Port, Led_c_Pin, RESET);
		  HAL_GPIO_WritePin(Led_d_GPIO_Port, Led_d_Pin, RESET);
		  HAL_GPIO_WritePin(Led_e_GPIO_Port, Led_e_Pin, SET);
		  HAL_GPIO_WritePin(Led_f_GPIO_Port, Led_f_Pin, RESET);
		  HAL_GPIO_WritePin(Led_g_GPIO_Port, Led_g_Pin, RESET);
		  break;
	default:
		  break;
	}
}

void update7SEG(int index){
		switch(index){
		case 0:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			display7SEG(led_buffer[index]);
			break;
		case 1:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			display7SEG(led_buffer[index]);
			break;
		case 2:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			display7SEG(led_buffer[index]);
			break;
		case 3:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
			display7SEG(led_buffer[index]);
			break;
		default:
			break;
		}
}

void updateClockBuffer(int hour, int minute){
	led_buffer[0] = hour / 10;
	led_buffer[1] = hour % 10;
	led_buffer[2] = minute / 10;
	led_buffer[3] = minute % 10;
}

void update_shift(int shift){
	shift_matrix = shift;
}

void convert_buffer(uint8_t value, int shift){
	uint8_t temp = (value >> (uint8_t)((shift + 0) % MAX_LED_MATRIX)) & 1;
	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, temp);
	temp = (value >> (uint8_t)((shift + 1) % MAX_LED_MATRIX)) & 1;
	HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, temp);
	temp = (value >> (uint8_t)((shift + 2) % MAX_LED_MATRIX)) & 1;
	HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, temp);
	temp = (value >> (uint8_t)((shift + 3) % MAX_LED_MATRIX)) & 1;
	HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, temp);
	temp = (value >> (uint8_t)((shift + 4) % MAX_LED_MATRIX)) & 1;
	HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, temp);
	temp = (value >> (uint8_t)((shift + 5) % MAX_LED_MATRIX)) & 1;
	HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, temp);
	temp = (value >> (uint8_t)((shift + 6) % MAX_LED_MATRIX)) & 1;
	HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, temp);
	temp = (value >> (uint8_t)((shift + 7) % MAX_LED_MATRIX)) & 1;
	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, temp);
}


void clear(){
	HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, SET);
	HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, SET);
	HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, SET);
	HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, SET);
	HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, SET);
	HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, SET);
	HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, SET);
	HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, SET);
}
void updateLEDMatrix(int index){
	clear();
	switch(index){
		case 0:
			HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, RESET);
			break;
	}
	convert_buffer(matrix_buffer[index], shift_matrix);
}
