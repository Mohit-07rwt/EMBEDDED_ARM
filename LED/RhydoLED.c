#include<lpc21xx.h>
#include"header.h"
int main()
{
	IODIR0=7<<17;
	IOSET0=7<<17;
	int i;
	while(1)
	{
		for(i=0;i<8;i++)
		{	
			IOCLR0=i<<17;
			delay_ms(100);
			IOSET0=i<<17;
			delay_ms(100);
		}
	}
}
