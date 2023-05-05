/*
 * my_main.c
 *
 *  Created on: Mar 12, 2023
 *      Author: qbejk
 */

#include "my_main.h"
#include "led.h"
#include "stm32f4xx_hal.h"

void my_main_run (){

	for(;;){
		led_toggle();
		HAL_Delay(1000);
	}
}
