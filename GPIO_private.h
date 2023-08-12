/*
 * NAME : GPIO_private.h

 * DATE : 9-8-2023
 * AUTHOR :Mai_Kamel
 * VESION : _v1_
 * NOTE :
 *
 */

/**********************************************************************************
 ***********************guard of file will call on time in .c *********************
 *********************************************************************************/
#ifndef GPIO_PRIVATE_H_
#define GPIO_PRIVATE_H_

typedef struct{
	volatile u32 GPIO_MODER;
	volatile u32 GPIO_OTYPER;
	volatile u32 GPIO_OSPEEDR;
	volatile u32 GPIO_PUPDR;
	volatile u32 GPIO_IDR;
	volatile u32 GPIO_ODR;
	volatile u32 GPIO_BSRR;
	volatile u32 GPIO_LCKR;
	volatile u32 GPIO_AFR;
	volatile u32 GPIO_AFRH;
}GPIO_T;

#define GPIOA_BASE_ADDRESS			0x40020000
#define GPIOB_BASE_ADDRESS			0x40020400
#define GPIOC_BASE_ADDRESS			0x40020800


#define GPIOA		((GPIO_T *)GPIOA_BASE_ADDRESS)
#define GPIOB		((GPIO_T *)GPIOB_BASE_ADDRESS)
#define GPIOC		((GPIO_T *)GPIOC_BASE_ADDRESS)

/*Mask of registers ???*/
/*Register GPIOx_MODER BITS mask*/
#define GPIOX_MODER_MODER0		0x00000003
#define GPIOX_OTYPER_MODER0		0x00000001
#define GPIOX_OSPEEDR_OSPEEDR0	0x00000003
#define GPIOX_IDR_IDR0			0x00000001
#define GPIOX_PUPDR_PUPDR0		0x00000003
#define GPIOX_ODR_MODER0		0x00000001

#define LOCKED_PIN		16
#endif
