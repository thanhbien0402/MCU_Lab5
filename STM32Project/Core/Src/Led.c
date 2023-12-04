/*
 * Led.c
 *
 *  Created on: Dec 4, 2023
 *      Author: Admin
 */

#include <main.h>
#include <Led.h>

void LED_oneshot(void){
	HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
}

void LED1(void){
	HAL_GPIO_TogglePin(LED_RED1_GPIO_Port, LED_RED1_Pin);
}

void LED2(void){
	HAL_GPIO_TogglePin(LED_RED2_GPIO_Port, LED_RED2_Pin);
}

void LED3(void){
	HAL_GPIO_TogglePin(LED_RED3_GPIO_Port, LED_RED3_Pin);
}

void LED4(void){
	HAL_GPIO_TogglePin(LED_RED4_GPIO_Port, LED_RED4_Pin);
}
