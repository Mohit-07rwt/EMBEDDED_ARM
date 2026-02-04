/*5. Write an ECP that will blink an active-low led with a blink interval of 500ms when the active-low
switch is pressed & hold. Stop an LED blink when the switch is released.
Connections: LED is connected to P0.17 & SWITCH is connected to P0.14.*/
#include<lpc21xx.h>
#include"header.h"
#define sw ((IOPIN0>>14)&1)
int main()
{
	int i;
	IODIR0=1<<17;
	IOCLR0=1<<17;
	while(1)
	{
		if(sw==0)
		{	
			while(sw==0)
			//for(i=0;i<10;i++)
			{	
				IOSET0=1<<17;
				delay_ms(110);
				IOCLR0=1<<17;
				delay_ms(110);
			}
		}
		else
			IOCLR0=1<<17;
	}
}
