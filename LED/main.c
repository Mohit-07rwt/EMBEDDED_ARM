#include<lpc21xx.h>
#include"header.h"
int main()
{
	IODIR0=0XFF;
	while(1)
	{
		IOCLR0=0XFF;
		delay_ms(100);
		IOSET0=0XFF;
		delay_ms(100);
	}
}
