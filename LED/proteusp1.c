#include<lpc21xx.h>
#include"header.h"
int main()
{
	IODIR0=1;
	IOSET0=1;
	while(1)
	{
		IOCLR0=1;
		delay_ms(500);
		IOSET0=1;
		delay_ms(500);
	}
}
