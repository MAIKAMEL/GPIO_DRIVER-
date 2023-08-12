/*
 * NAME : GPIO_program.c
 * DATE : 9-8-2023
 * AUTHOR :Mai_Kamel
 * VESION : _v1_
 * NOTE :
 *
 */

/***********Include lib***************/
#include "STD_TYPES.h"
#include "BIT_MATHS.h"
/***********Include MCAL***************/
#include "GPIO_private.h"
#include "GPIO_interface.h"
#include "GPIO_config.h"

/**************************************************Start function*****************************************************/
/*Function name: GPIO_u8SetPinMode
 * Description:  configure the I/O direction mode
 * I/P arguments:
 * 	1- copy_u8PortName: specifies the required port:
 *				- GPIOA_PORT, - GPIOB_PORT, - GPIOC_PORT
 * 	2- copy_u8PinNum: specifies the required Pin:
 * 				- PIN_0 to PIN_15 for GPIO_PORT
 * 				- PIN_0 to PIN_15 for GPIO_PORT
 * 				- PIN_ to PIN_ for GPIO_PORT
 * 	3- copy_u8Mode: specifies modes of input pins
 * 				- INPUT_MODE
 * 				- OUTPUT_MODE
 * 				- ALTF_MODE
 * 				- ANALOG_MODE
 */
void GPIO_u8SetPinMode(u8 copy_u8PortName, u8 copy_u8PinNum, u8 copy_u8PinMode){
	switch(copy_u8PortName){
	case GPIOA_PORT:
		MODIFY_REG(GPIOA->GPIO_MODER, (copy_u8PinMode<<copy_u8PinNum*2), (GPIOX_MODER_MODER0<<copy_u8PinNum*2));
		break;
		/*******************************************************************************************************/
	case GPIOB_PORT:
		MODIFY_REG(GPIOB->GPIO_MODER, (copy_u8PinMode<<copy_u8PinNum*2), (GPIOX_MODER_MODER0<<copy_u8PinNum*2));
		break;
		/*******************************************************************************************************/
	case GPIOC_PORT:
		MODIFY_REG(GPIOC->GPIO_MODER, (copy_u8PinMode<<copy_u8PinNum*2), (GPIOX_MODER_MODER0<<copy_u8PinNum*2));
		break;
		/*******************************************************************************************************/
	default: /*Error*/  break;
	}/*Ending of switch*/
}/*Ending of function*/
/**************************************************End function*******************************************************/

/**************************************************Start function*****************************************************/
/*Function name: MGPIO_u8SetPinOutType
 * Description:  change Port Pin output Type
 * I/P arguments:
 * 	1- copy_u8PortName: specifies the required port:
 *				- GPIOA_PORT, - GPIOB_PORT, - GPIOC_PORT
 * 	2- copy_u8PinNum: specifies the required Pin:
 * 				- PIN_0 to PIN_15 for GPIO_PORT
 * 				- PIN_0 to PIN_15 for GPIO_PORT
 * 				- PIN_ to PIN_ for GPIO_PORT
 * 	3- copy_u8PinType: specifies type of output pins
 * 				- OUT_TYPE_PUSH_PULL
 * 				- OUT_TYPE_OPEN_DRAIN
 */
void GPIO_u8SetPinOutType(u8 copy_u8PortName, u8 copy_u8PinNum, u8 copy_u8PinType){
	switch(copy_u8PortName){
	case GPIOA_PORT:
		MODIFY_REG(GPIOA->GPIO_OTYPER, (copy_u8PinType<<copy_u8PinNum*2), (GPIOX_OTYPER_MODER0<<copy_u8PinNum*2));
		break;
		/*******************************************************************************************************/
	case GPIOB_PORT:
		ODIFY_REG(GPIOB->GPIO_OTYPER, (copy_u8PinType<<copy_u8PinNum*2), (GPIOX_OTYPER_MODER0<<copy_u8PinNum*2));
		break;
		/*******************************************************************************************************/
	case GPIOC_PORT:
		MODIFY_REG(GPIOC->GPIO_OTYPER, (copy_u8PinType<<copy_u8PinNum*2), (GPIOX_OTYPER_MODER0<<copy_u8PinNum*2));
		break;
		/*******************************************************************************************************/
	default: /*Error*/  break;
	}/*Ending of switch*/
}/*Ending of function*/
/**************************************************End function*******************************************************/

/**************************************************Start function*****************************************************/
/*Function name: GPIO_u8SetPinOutSpeed
 * Description: configure the I/O output speed
 * I/P arguments:
 * 	1- copy_u8PortName: specifies the required port:
 *				- GPIOA_PORT, - GPIOB_PORT, - GPIOC_PORT
 * 	2- copy_u8PinNum: specifies the required Pin:
 * 				- PIN_0 to PIN_15 for GPIO_PORT
 * 				- PIN_0 to PIN_15 for GPIO_PORT
 * 				- PIN_ to PIN_ for GPIO_PORT
 * 	3- copy_u8OutPinSpeed: specifies speed of output pins
 * 				- OUT_SPEED_LOW
 * 				- OUT_SPEED_MEDIUM
 * 				- OUT_SPEED_HIGTH
 * 				- OUT_SPEED_VERY_HIGTH
 */
void GPIO_u8SetPinOutSpeed(u8 copy_u8PortName, u8 copy_u8PinNum, u8 copy_u8OutPinSpeed){
	switch(copy_u8PortName){
	case GPIOA_PORT:
		MODIFY_REG(GPIOA->GPIO_OSPEEDR, (copy_u8OutPinSpeed<<copy_u8PinNum*2), (GPIOX_OSPEEDR_OSPEEDR0<<copy_u8PinNum*2));
		break;
		/*******************************************************************************************************/
	case GPIOB_PORT:
		MODIFY_REG(GPIOB->GPIO_OSPEEDR, (copy_u8OutPinSpeed<<copy_u8PinNum*2), (GPIOX_OSPEEDR_OSPEEDR0<<copy_u8PinNum*2));
		break;
		/*******************************************************************************************************/
	case GPIOC_PORT:
		MODIFY_REG(GPIOC->GPIO_OSPEEDR, (copy_u8OutPinSpeed<<copy_u8PinNum*2), (GPIOX_OSPEEDR_OSPEEDR0<<copy_u8PinNum*2));
		break;
		/*******************************************************************************************************/
	default: /*Error*/  break;
	}/*Ending of switch*/
}/*Ending of function*/
/**************************************************End function*******************************************************/

/**************************************************Start function*****************************************************/
/*Function name: GPIO_u8SetPinPullMode
 * Description: configure the I/O pull-up or pull-down
 * I/P arguments:
 * 	1- copy_u8PortName: specifies the required port:
 *				- GPIOA_PORT, - GPIOB_PORT, - GPIOC_PORT
 * 	2- copy_u8PinNum: specifies the required Pin:
 * 				- PIN_0 to PIN_15 for GPIO_PORT
 * 				- PIN_0 to PIN_15 for GPIO_PORT
 * 				- PIN_ to PIN_ for GPIO_PORT
 * 	3- copy_u8PinType: specifies pull type of output pins
 * 				- NO_PULL
 * 				- PULL_UP
 * 				- PULL_DOWN
 */
void GPIO_u8SetPinPullMode(u8 copy_u8PortName, u8 copy_u8PinNum, u8 copy_u8PinPullMode){
	switch(copy_u8PortName){
	case GPIOA_PORT:
		MODIFY_REG(GPIOA->GPIO_PUPDR, (copy_u8PinPullMode<<copy_u8PinNum*2), (GPIOX_PUPDR_PUPDR0<<copy_u8PinNum*2));
		break;
		/*******************************************************************************************************/
	case GPIOB_PORT:
		MODIFY_REG(GPIOB->GPIO_PUPDR, (copy_u8PinPullMode<<copy_u8PinNum*2), (GPIOX_PUPDR_PUPDR0<<copy_u8PinNum*2));
		break;
		/*******************************************************************************************************/
	case GPIOC_PORT:
		MODIFY_REG(GPIOC->GPIO_PUPDR, (copy_u8PinPullMode<<copy_u8PinNum*2), (GPIOX_PUPDR_PUPDR0<<copy_u8PinNum*2));
		break;
		/*******************************************************************************************************/
	default: /*Error*/  break;
	}/*Ending of switch*/
}/*Ending of function*/
/**************************************************End function*******************************************************/

/**************************************************Start function*****************************************************/
/*Function name: GPIO_u8GetPinValue
 * Description:  Get Port input data
 * I/P arguments:
 * 	1- copy_u8PortName: specifies the required port:
 *				- GPIOA_PORT, - GPIOB_PORT, - GPIOC_PORT
 * 	2- copy_u8PinNum: specifies the required Pin:
 * 				- PIN_0 to PIN_15 for GPIO_PORT
 * 				- PIN_0 to PIN_15 for GPIO_PORT
 * 				- PIN_ to PIN_ for GPIO_PORT
 */
u8 GPIO_u8GetPinValue(u8 copy_u8PortName,u8 copy_u8PinNum){
	u8 L_u8data = 0;
	switch(copy_u8PortName){
	case GPIOA_PORT:
		L_u8data = GET_BIT(GPIOA->GPIO_IDR, copy_u8PinNum);		break;
	case GPIOB_PORT:
		L_u8data = GET_BIT(GPIOB->GPIO_IDR, copy_u8PinNum);		break;
	case GPIOC_PORT:
		L_u8data = GET_BIT(GPIOC->GPIO_IDR, copy_u8PinNum);		break;
	default: /*Error*/  break;
	}/*Ending of switch*/
	return L_u8data;
}/*Ending of function*/
/**************************************************End function*******************************************************/

/**************************************************Start function*****************************************************/
/*Function name: GPIO_u8ChangePinOutMode
 * Description:  Get Port input data
 * I/P arguments:
 * 	1- copy_u8PortName: specifies the required port:
 *				- GPIOA_PORT, - GPIOB_PORT, - GPIOC_PORT
 * 	2- copy_u8PinNum: specifies the required Pin:
 * 				- PIN_0 to PIN_15 for GPIO_PORT
 * 				- PIN_0 to PIN_15 for GPIO_PORT
 * 				- PIN_ to PIN_ for GPIO_PORT
 * 	3- copy_u8PinOutVal: specifies pull type of output pins
 * 				- RESTE
 * 				- SET
 */
u8 GPIO_u8ChangePinOutMode(u8 copy_u8PortName,u8 copy_u8PinNum,u8 copy_u8PinOutVal){
	switch(copy_u8PortName){
	case GPIOA_PORT:
		MODIFY_REG(GPIOA->GPIO_ODR, (copy_u8PinOutVal<<copy_u8PinNum*2), (GPIOX_ODR_MODER0<<copy_u8PinNum*2));
		break;
		/*******************************************************************************************************/
	case GPIOB_PORT:
		MODIFY_REG(GPIOB->GPIO_ODR, (copy_u8PinOutVal<<copy_u8PinNum*2), (GPIOX_ODR_MODER0<<copy_u8PinNum*2));
		break;
		/*******************************************************************************************************/
	case GPIOC_PORT:
		MODIFY_REG(GPIOC->GPIO_ODR, (copy_u8PinOutVal<<copy_u8PinNum*2), (GPIOX_ODR_MODER0<<copy_u8PinNum*2));
		break;
		/*******************************************************************************************************/
	default: /*Error*/  break;
	}/*Ending of switch*/
}/*Ending of function*/
/**************************************************End function*******************************************************/

/**************************************************Start function*****************************************************/
/*Function name: GPIO_u8DirectSetPinOutMode
 * Description: Direct atomic change of OP Mode
 * I/P arguments:
 * 	1- copy_u8PortName: specifies the required port:
 *				- GPIOA_PORT, - GPIOB_PORT, - GPIOC_PORT
 * 	2- copy_u8PinNum: specifies the required Pin:
 * 				- PIN_0 to PIN_15 for GPIO_PORT
 * 				- PIN_0 to PIN_15 for GPIO_PORT
 * 				- PIN_ to PIN_ for GPIO_PORT
 * 	3- copy_u8PinOutVal: specifies pull type of output pins
 * 				- RESTE
 * 				- SET
 */
u8 GPIO_u8DirectSetPinOutMode(u8 copy_u8PortName,u8 copy_u8PinNum,u8 copy_u8PinOutVal){
	if(copy_u8PinOutVal == 1){
		switch(copy_u8PortName){
		case GPIOA_PORT:
			SET_BIT(GPIOA->GPIO_BSRR, copy_u8PinNum);		break;
		case GPIOB_PORT:
			SET_BIT(GPIOB->GPIO_BSRR, copy_u8PinNum);		break;
		case GPIOC_PORT:
			SET_BIT(GPIOC->GPIO_BSRR, copy_u8PinNum);		break;
		default: /*Error*/  break;
		}
	}
	else if(copy_u8PinOutVal == 0){
		switch(copy_u8PortName){
		case GPIOA_PORT:
			SET_BIT(GPIOA->GPIO_BSRR, copy_u8PinNum+16);		break;
		case GPIOB_PORT:
			SET_BIT(GPIOB->GPIO_BSRR, copy_u8PinNum+16);		break;
		case GPIOC_PORT:
			SET_BIT(GPIOC->GPIO_BSRR, copy_u8PinNum+16);		break;
		default: /*Error*/  break;
		}
	}
}/*Ending of function*/
/**************************************************End function*******************************************************/

