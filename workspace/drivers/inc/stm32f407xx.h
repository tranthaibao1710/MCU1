/*
 * stm32f407xx.h
 *CC
 *  Created on: Dec 4, 2024
 *      Author: FPTSHOP
 */

#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_
#include <stdint.h>
#define __vo volatile
#define FLASH_BASEADDR             (uint32_t) 0x08000000
#define SRAM1_BASEADDR             (uint32_t)0x20000000
#define SRAM2_BASEADDR             0x20001C00U
#define ROM                        0x1FFF0000U
#define RAM                        SRAM1_BASEADDR

#define ENABLE       1 
#define DISABLE      0 
#define SET          ENABLE
#define RESET          DISABLE
#define GPIO_PIN_SET   SET
#define GPIO_PIN_RESET   RESET

#define PERIPH_BASE                   0x40000000U
#define APB1PERIPH_BASE               PERIPH_BASE
#define APB2PERIPH_BASE               0x40010000U
#define AHB1PERIPH_BASE               0x40020000U
#define AHB2PERIPH_BASE               0x50000000U




#define GPIOA_BASE               (AHB1PERIPH_BASE + 0x0000)
#define GPIOB_BASE               (AHB1PERIPH_BASE + 0x0400)
#define GPIOC_BASE               (AHB1PERIPH_BASE + 0x0800)
#define GPIOD_BASE               (AHB1PERIPH_BASE + 0x0C00)
#define GPIOE_BASE               (AHB1PERIPH_BASE + 0x1000)
#define GPIOF_BASE               (AHB1PERIPH_BASE + 0x1400)
#define GPIOG_BASE               (AHB1PERIPH_BASE + 0x1800)
#define GPIOH_BASE               (AHB1PERIPH_BASE + 0x1C00)
#define GPIOI_BASE               (AHB1PERIPH_BASE + 0x2000)

#define RCC_BASE                 (AHB1PERIPH_BASE + 0x3800)

#define I2C1_BASE                (APB1PERIPH_BASE + 0x5400)
#define I2C2_BASE                (APB1PERIPH_BASE + 0x5800)
#define I2C3_BASE                (APB1PERIPH_BASE + 0x5C00)

#define USART2_BASE              (APB1PERIPH_BASE + 0x4400)
#define USART3_BASE              (APB1PERIPH_BASE + 0x4800)
#define UART4_BASE               (APB1PERIPH_BASE + 0x4C00)
#define UART5_BASE               (APB1PERIPH_BASE + 0x5000)

#define SPI2_BASE               (APB1PERIPH_BASE + 0x3800)
#define SPI3_BASE               (APB1PERIPH_BASE + 0x3C00)



#define EXTI_BASE               (APB2PERIPH_BASE + 0x3C00)
#define SPI1_BASE               (APB2PERIPH_BASE + 0x3000)
#define SYSCFG_BASE             (APB2PERIPH_BASE + 0x3800)
#define USART1_BASE              (APB2PERIPH_BASE + 0x1000)
#define USART6_BASE              (APB2PERIPH_BASE + 0x1400)

typedef struct {
	__vo uint32_t  MODER;
	__vo uint32_t  OTYPER;
	__vo uint32_t  OSPEEDR;
	__vo uint32_t  PUPDR;
	__vo uint32_t  IDR ;
	__vo uint32_t  ODR;
	__vo uint32_t  BSRR;
	__vo uint32_t  LCKR;
	__vo uint32_t  AFR[2];
}GPIO_RegDef_t;

typedef struct {
	__vo uint32_t CR ;
	__vo uint32_t PLLCFGR ;
	__vo uint32_t CFGR ;
	__vo uint32_t CIR ;
	__vo uint32_t AHB1RSTR ;
	__vo uint32_t AHB2RSTR ;
	__vo uint32_t AHB3RSTR ;
	__vo uint32_t Reserved0 ;
	__vo uint32_t APB1RSTR ;
	__vo uint32_t APB2RSTR ;
	__vo uint32_t Reserved1 ;
	__vo uint32_t Reserved2 ;
	__vo uint32_t AHB1ENR ;
	__vo uint32_t AHB2ENR ;
	__vo uint32_t AHB3ENR ;

}RCC_RegDef_t;


#define GPIOA    ((GPIO_RegDef_t*)GPIOA_BASE)
#define GPIOB    ((GPIO_RegDef_t*)GPIOB_BASE)
#define GPIOC    ((GPIO_RegDef_t*)GPIOC_BASE)
#define GPIOD    ((GPIO_RegDef_t*)GPIOD_BASE)
#define GPIOE    ((GPIO_RegDef_t*)GPIOE_BASE)
#define GPIOF    ((GPIO_RegDef_t*)GPIOF_BASE)
#define GPIOG    ((GPIO_RegDef_t*)GPIOG_BASE)
#define GPIOH    ((GPIO_RegDef_t*)GPIOH_BASE)
#define GPIOI    ((GPIO_RegDef_t*)GPIOI_BASE)


#define RCC       ((RCC_RegDef_t*)RCC_BASE)

#define GPIOA_PCLK_EN()  (RCC->AHB1ENR|=(1<<0))
#define GPIOB_PCLK_EN()  (RCC->AHB1ENR|=(1<<1))
#define GPIOC_PCLK_EN()  (RCC->AHB1ENR|=(1<<2))
#define GPIOD_PCLK_EN()  (RCC->AHB1ENR|=(1<<3))
#define GPIOE_PCLK_EN()  (RCC->AHB1ENR|=(1<<4))
#define GPIOF_PCLK_EN()  (RCC->AHB1ENR|=(1<<5))
#define GPIOG_PCLK_EN()  (RCC->AHB1ENR|=(1<<6))
#define GPIOH_PCLK_EN()  (RCC->AHB1ENR|=(1<<7))
#define GPIOI_PCLK_EN()  (RCC->AHB1ENR|=(1<<8))



#define I2C1_PCLK_EN()  (RCC->APB1ENR|=(1<<21))
#define I2C2_PCLK_EN()  (RCC->APB1ENR|=(1<<22))
#define I2C3_PCLK_EN()  (RCC->APB1ENR|=(1<<23))


#define SPI1_PCLK_EN()  (RCC->APB2ENR|=(1<<12))
#define SPI2_PCLK_EN()  (RCC->APB1ENR|=(1<<14))
#define SPI3_PCLK_EN()  (RCC->APB1ENR|=(1<<15))



#define USART1_PCLK_EN()   (RCC->APB2ENR|=(1<<4))
#define USART6_PCLK_EN()   (RCC->APB2ENR|=(1<<5))
#define USART2_PCLK_EN()   (RCC->APB1ENR|=(1<<17))
#define USART3_PCLK_EN()   (RCC->APB1ENR|=(1<<18))
#define UART4_PCLK_EN()    (RCC->APB1ENR|=(1<<19))
#define UART5_PCLK_EN()    (RCC->APB1ENR|=(1<<20))

#define SYSSFG_PCLK_EN()  (RCC->APB2ENR|=(1<<14))

/* DISABLE */

#define GPIOA_PCLK_DI()  (RCC->AHB1ENR&=~(1<<0))
#define GPIOB_PCLK_DI()  (RCC->AHB1ENR&=~(1<<1))
#define GPIOC_PCLK_DI()  (RCC->AHB1ENR&=~(1<<2))
#define GPIOD_PCLK_DI()  (RCC->AHB1ENR&=~(1<<3))
#define GPIOE_PCLK_DI()  (RCC->AHB1ENR&=~(1<<4))
#define GPIOF_PCLK_DI()  (RCC->AHB1ENR&=~(1<<5))
#define GPIOG_PCLK_DI()  (RCC->AHB1ENR&=~(1<<6))
#define GPIOH_PCLK_DI()  (RCC->AHB1ENR&=~(1<<7))
#define GPIOI_PCLK_DI()  (RCC->AHB1ENR&=~(1<<8))



#define I2C1_PCLK_DI()  (RCC->APB1ENR&=~(1<<21))
#define I2C2_PCLK_DI()  (RCC->APB1ENR&=~(1<<22))
#define I2C3_PCLK_DI()  (RCC->APB1ENR&=~(1<<23))


#define SPI1_PCLK_DI()  (RCC->APB2ENR&=~(1<<12))
#define SPI2_PCLK_DI()  (RCC->APB1ENR&=~(1<<14))
#define SPI3_PCLK_DI()  (RCC->APB1ENR&=~(1<<15))



#define USART1_PCLK_DI()   (RCC->APB2ENR&=~(1<<4))
#define USART6_PCLK_DI()   (RCC->APB2ENR&=~(1<<5))
#define USART2_PCLK_DI()    (RCC->APB1ENR&=~(1<<17))
#define USART3_PCLK_DI()    (RCC->APB1ENR&=~(1<<18))
#define UART4_PCLK_DI()    (RCC->APB1ENR&=~(1<<19))
#define UART5_PCLK_DI()    (RCC->APB1ENR&=~(1<<20))

#define SYSSFG_PCLK_DI()  (RCC->APB2ENR&=~(1<<14))











#endif /* INC_STM32F407XX_H_ */
