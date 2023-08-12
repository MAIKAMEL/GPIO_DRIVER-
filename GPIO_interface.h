/*
 * NAME : GPIO_interfacee.h
 * DATE : 9-8-2023
 * AUTHOR :Mai_Kamel
 * VESION : _v1_
 * NOTE :
 *
 */

/**********************************************************************************
 ***********************guard of file will call on time in .c *********************
 *********************************************************************************/
#ifndef GPIO_INTERFACE_H_
#define GPIO_INTERFACE_H_

/***********Include lib***************/
#include "STD_TYPES.h"
#include "BIT_MATHS.h"
/***********Include MCAL***************/
#include "GPIO_private.h"
#include "GPIO_interface.h"
#include "GPIO_config.h"

/*************************************Port mode (GPIO_MODER) register*************************************/
/*************Port Name******************/
#define GPIOA_PORT  0
#define GPIOB_PORT  1
#define GPIOC_PORT  2

/*************Pin Number*****************/
#define PIN_0	0
#define PIN_1	1
#define PIN_2	2
#define PIN_3	3
#define PIN_4	4
#define PIN_5	5
#define PIN_6	6
#define PIN_7	7
#define PIN_8	8
#define PIN_9	9
#define PIN_10	10
#define PIN_11	11
#define PIN_12	12
#define PIN_13	13
#define PIN_14	14
#define PIN_15	15

/*************Modes**********************/
#define INPUT_MODE		(0X00)
#define OUTPUT_MODE		(0X01)
#define ALTF_MODE		(0X10)
#define ANALOG_MODE		(0X11)

void GPIO_u8SetPinMode(u8 copy_u8PortName, u8 copy_u8PinNum, u8 copy_u8PinMode);
/***********************************************************************************************/

/**********************************Port output type (GPIO_OTYPER) register*************************************/
#define OUT_TYPE_PUSH_PULL		0
#define OUT_TYPE_OPEN_DRAIN		1

void GPIO_u8SetPinOutType(u8 copy_u8PortName, u8 copy_u8PinNum, u8 copy_u8PinType);
/***********************************************************************************************/

/***********************************Port output speed (GPIO_OSPEEDR) register***********************************/
#define OUT_SPEED_LOW			(0X00)
#define OUT_SPEED_MEDIUM		(0X01)
#define OUT_SPEED_HIGTH			(0X10)
#define OUT_SPEED_VERY_HIGTH	(0X11)

void GPIO_u8SetPinOutSpeed(u8 copy_u8PortName, u8 copy_u8PinNum, u8 copy_u8OutPinSpeed);
/***********************************************************************************************/

/***********************************Pull-up / pull-down (GPIO_PUPDR)register********************************/
#define NO_PULL		(0x00)
#define PULL_UP		(0x01)
#define PULL_DOWN	(0x10)
void GPIO_u8SetPinPullMode(u8 copy_u8PortName, u8 copy_u8PinNum, u8 copy_u8PinPullMode);
/***********************************************************************************************/

/***********************************Port input data (GPIO_IDR) register************************************/
u8 GPIO_u8GetPinValue(u8 copy_u8PortName,u8 copy_u8PinNum);
/***********************************************************************************************/

/***********************************Port output data (GPIO_ODR)register***********************************/
#define RESTE		0
#define SET			1
u8 GPIO_u8ChangePinOutMode(u8 copy_u8PortName,u8 copy_u8PinNum,u8 copy_u8PinOutVal);
/***********************************************************************************************/

/***********************************GPIO_BSRR REGISTER*******************************************/
u8 GPIO_u8DirectSetPinOutMode(u8 copy_u8PortName,u8 copy_u8PinNum,u8 copy_u8PinOutVal);
/***********************************************************************************************/

#endif
