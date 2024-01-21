#include "stm32f4xx.h"
#include "led.h"
#include "tim.h"
#include "sys.h" 
#include "delay.h"
#include "usart.h"
#include "stdio.h"
#include "math.h"
#include "exti.h"  
#include "bee.h"
int main(void)
{  
    
	delay_init(168);
	led_init();
    //exti_init();
	 TIM4_Init(7500,8400);
	Bee_Init();
	int a=1;
    while (1)
   { 
//   a++;
//    if(a%2==0){	
//     for(int i=0;i<=47;i++){
//	 int b=musicnum[i]-1;
//		 TIM4_Init(8400,Pscnum[b]);
//		 delay_ms(800);
//	 
//	 }}
//	else{
//	TIM_Cmd(TIM3,DISABLE);//¹Ø±Õ¶¨Ê±Æ÷
//		delay_ms(800);
//	}
   }
		
}

