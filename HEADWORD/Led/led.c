#include "led.h"
#include "stm32f10x.h"

void Led_Init(void) 
{  
      GPIO_InitTypeDef GPIO_InitStruct;
			
			RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOE|RCC_APB2Periph_GPIOB,ENABLE);
			GPIO_InitStruct.GPIO_Pin   = GPIO_Pin_5;
			GPIO_InitStruct.GPIO_Mode  = GPIO_Mode_Out_PP;
      GPIO_InitStruct.GPIO_Speed =  GPIO_Speed_50MHz;
			GPIO_Init(GPIOB,&GPIO_InitStruct);
			GPIO_SetBits(GPIOB,GPIO_Pin_5);
			
			RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOE,ENABLE);
			
			GPIO_InitStruct.GPIO_Pin   = GPIO_Pin_5;
			GPIO_InitStruct.GPIO_Mode  = GPIO_Mode_Out_PP;
      GPIO_InitStruct.GPIO_Speed =  GPIO_Speed_50MHz;
			GPIO_Init(GPIOE,&GPIO_InitStruct);
			GPIO_SetBits(GPIOE,GPIO_Pin_5);
			
			
}





