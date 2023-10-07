/*
 * leds.c
 *
 *  Created on: Oct 7, 2023
 *      Author: PC
 */
#include "leds.h"
#include "main.h"

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
