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
    uint8_t GPIO_PinNumber;       // Số chân GPIO
    uint8_t GPIO_PinMode;         // @Chế độ hoạt động của chân GPIO
    uint8_t GPIO_PinSpeed;        // Tốc độ của chân GPIO
    uint8_t GPIO_PinPuPdControl;  // Chế độ Pull-up/Pull-down
    uint8_t GPIO_PinOPTyp;        // Kiểu đầu ra (Output type)
    uint8_t GPIO_PinAltfunMode;   // Chức năng thay thế (Alternate function)
} GPIO_PinConfig_t;


typedef struct
{
    /* data */
GPIO_RegDef_t *pGPIOx ; 
GPIO_PinConfig_t GPIO_PinConfig;

}GPIO_Handle_t;

//@Chế độ hoạt động của chân GPIO
#define GPIO_MODE_IN 0 
#define GPIO_MODE_OUT 1
#define GPIO_MODE_ALTFN 2 
#define GPIO_MODE_ANALOG 3
#define GPIO_MODE_IT_FT 4  
#define GPIO_MODE_IT_RT 5  
#define GPIO_MODE_IT_RFT 6  

#define GPIO_OP_TYPE_PP 0  
#define GPIO_OP_TYPE_OD 1

#define GPIO_OP_SPEED_LOW 0 
#define GPIO_OP_SPEED_MEDIUM 1
#define GPIO_OP_SPEED_FAST 2
#define GPIO_OP_SPEED_HIGH 3  

#define GPIO_NO_PUPD 0
#define GPIO_PIN_PU 1
#define GPIO_PIN_PD 2

#define GPIO_PIN_0 0
#define GPIO_PIN_1 1  
#define GPIO_PIN_2 2 
#define GPIO_PIN_3 3 
#define GPIO_PIN_4 4 
#define GPIO_PIN_5 5 
#define GPIO_PIN_6 6 
#define GPIO_PIN_7 7 
#define GPIO_PIN_8 8 
#define GPIO_PIN_9 9 
#define GPIO_PIN_10 10 
#define GPIO_PIN_11 11 
#define GPIO_PIN_12 12 
#define GPIO_PIN_13 13 
#define GPIO_PIN_14 14 
#define GPIO_PIN_15 15 
// peripheral clock setup 
void GPIO_PeriClockControl(GPIO_RegDef_t *pGPIOx ,  uint32_t EnorDi);

// init and deinit 
void GPIO_Init(GPIO_Handle_t *pGPIOHandle);
void GPIO_DeInit(void);


// data read and write
uint8_t GPIO_ReadFromPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber);
uint16_t GPIO_ReadFromPort(GPIO_RegDef_t *pGPIOx);
void GPIO_WriteFromPin(GPIO_RegDef_t *pGPIOx , uint8_t PinNumber, uint8_t value);
void GPIO_WriteFromPort(GPIO_RegDef_t *pGPIOx , uint8_t value );
void GPIO_TogglePin(GPIO_RegDef_t *pGPIOx,uint8_t PinNumber);

//irq
void GPIO_IRQConfig(uint8_t IRQNumber , uint8_t IRQPriority , uint8_t EnorDi);
void GPIO_IRQCHandling(uint8_t PinNumber);


#endif /* INC_STM32F407XX_GPIO_DRIVER_H_ */
