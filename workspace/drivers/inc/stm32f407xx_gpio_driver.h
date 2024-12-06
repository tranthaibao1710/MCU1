/*
 * stm32f407xx_gpio_driver.h
 *
 *  Created on: Dec 6, 2024
 *      Author: FPTSHOP
 */

#ifndef INC_STM32F407XX_GPIO_DRIVER_H_
#define INC_STM32F407XX_GPIO_DRIVER_H_
#include "stm32f407xx.h"

typedef struct 
{
    /* data */
    uint8_t GPIO_PinNumber ;
    uint8_t GPIO_PinMode ; 
    uint8_t GPIO_PinSpeed ; 
    uint8_t GPIO_PinPuPdControl ; 
    uint8_t GPIO_PinOPTyp ; 
    uint8_t GPIO_PinAltfunMode ; 

}GPIO_PinConfig_t;

typedef struct
{
    /* data */
GPIO_RegDef_t *pGPIOx ; 
GPIO_PinConfig_t GPIO_PinConfig;

}GPIO_Handle_t;





#endif /* INC_STM32F407XX_GPIO_DRIVER_H_ */
