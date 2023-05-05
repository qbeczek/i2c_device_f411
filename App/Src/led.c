/*
 * led.c
 *
 *  Created on: Mar 12, 2023
 *      Author: qbejk
 */
#include "led.h"
#include "main.h"

void led_on(){
	HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_SET);
}

void led_off(){
	HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_RESET);
}

void led_toggle(){
	HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
}

