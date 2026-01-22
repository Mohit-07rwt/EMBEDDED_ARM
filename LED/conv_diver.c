#include<lpc21xx.h>
#include"header.h"
int main()
{
	IODIR0=0XFF;
	IOSET0=0XFF;
	int i,j;
	while(1)
	{
		for(i=0,j=7;i<8;i++,j--)
		{	
			IOCLR0=1<<i | 1<<j;
			delay_ms(100);
			IOSET0=1<<i | 1<<j;
			delay_ms(100);
		}
	}
}
