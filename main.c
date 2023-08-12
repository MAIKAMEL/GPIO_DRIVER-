/*
 * NAME : main.c
 * DATE : 8-8-2023
 * AUTHOR :Mai_Kamel
 * VESION : _v1_
 * NOTE :
 *
 */
#include "STD_TYPES.h"
#include "BIT_MATHS.h"
#include "GPIO_interface.h"

int main(void){
	GPIO_u8SetPinMode(GPIOA_PORT, 0, OUTPUT_MODE);
	while(1){
		/*Set 0:2 pins at PORTA*/
		//for(u8 L_u8count = 0; L_u8count<=2; L_u8count++){
			/*As an output pin*/
			//MGPIO_vSetPinMode(GPIOA_PORT, L_u8count, OUTPUT_MODE);
			/*Type of pins is push pull*/
			//MGPIO_vSetPinOutType(GPIOA_PORT, L_u8count, OUT_TYPE_PUSH_PULL);
			/*Type of speed is medium*/
			//MGPIO_vSetPinOutSpeed(GPIOA_PORT, L_u8count, OUT_SPEED_MEDIUM);
			/*NO pull*/
			//MGPIO_vSetPull(GPIOA_PORT, L_u8count, NO_PULL);

			//MGPIO_vWritePinData(GPIOA_PORT, L_u8count, HIGH);
			/*Delay*/
			//MGPIO_vWritePinData(GPIOA_PORT, L_u8count, LOW);*/
		//}
	}

	return 0;
}
