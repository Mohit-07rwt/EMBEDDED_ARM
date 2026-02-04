/*Program 12 – LED Counting Sequence
Context: Four LEDs ? P0.16, P0.17, P0.18, P0.19 Tasks:
1.Turn ON one LED at a time in binary count order (0001 ?
0010 ? 0011 ? 0100 …).
2.Keep each LED ON for 0.5 second.
3.After reaching 1111, reset to 0001.
4.Repeat indefinitely.*/
#include<lpc21xx.h>
#include"header.h"
int main()
{
	int i;
	IODIR0=0XF<<16;
	IOSET0=0XF<<16;
	while(1)
	{
		for(i=0;i<16;i++)
		{
			IOCLR0=i<<16;
			delay_ms(200);
			IOSET0=i<<16;			
		}
	}
}
