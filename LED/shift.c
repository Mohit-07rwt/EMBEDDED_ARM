//blink alternate led
#include<lpc21xx.h>
#include"header.h"
int main()
{
	int i;
	IODIR0=0XFF;
	IOSET0=0XFF;
	delay_ms(200);
	while(1)
	{
		for(i=0;i<=7;i=i+2)
		{
			IOCLR0=1<<i;
			delay_ms(150);
			IOSET0=1<<i;
			delay_ms(150);
		}
	}
}
