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
