#include "stm8s.h"

#define PORT1_GP (GPIOC)
#define PINC3 (GPIO_PIN_3)

void delay (int ms) //Function Definition 
{
int i =0 ;
int j=0;
for (i=0; i<=ms; i++)
{
for (j=0; j<120; j++) // Nop = Fosc/4
_asm("nop"); //Perform no operation //assembly code 
}
}

main()
{
	GPIO_Init(PORT1_GP, (GPIO_Pin_TypeDef)PINC3, GPIO_MODE_OUT_PP_LOW_FAST);
	
while (1){
GPIO_WriteReverse(PORT1_GP, (GPIO_Pin_TypeDef)PINC3);
delay(500);
}
}
