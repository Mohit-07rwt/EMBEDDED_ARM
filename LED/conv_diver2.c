/*when the bit 1 is set to 1 then 0, then all leds blink 1 times.
when the bit 2 is set to 1 then 0, then all LEds blink 2 times.
when the bit 3 is set to 1 then 0, then all LEDS blink 3 times. It looks this way*/
#include<lpc21xx.h>
#include"header.h"
int main()	
{
	IODIR0=0XFF;
	IOSET0=0XFF;
	int i,j;
	while(1)
	{
		for(i=0;i<=7;i++)
		{
			IOCLR0=1<<i;		
			delay_ms(200);
			IOSET0=1<<i;
			delay_ms(300);
			{
				for(j=0;j<i+1;j++)
				{
					IOCLR0=0xff;		
					delay_ms(50);
					IOSET0=0xff;
					delay_ms(50);				
				}
			}		
		}	
	}		
}
