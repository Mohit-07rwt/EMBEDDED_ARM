//first blink even then odd 
#include<lpc21xx.h>
#include"header.h"
int main()
{
	IODIR0=0XFF;
	IOSET0=0XFF;
	int i,j=0;
	while(1)
	{
		if(j%2==0)
			i=0;
		else
			i=1;
	
		{
			for(;i<=7;i=i+2)
			{
				IOCLR0=1<<i;
				delay_ms(150);
				IOSET0=1<<i;
				delay_ms(150);
			}
		}
	}
}
