/* Program 14 – LED Staircase Pattern		Context: Four LEDs ? P0.16, P0.17, P0.18, P0.19 Tasks:
1.Turn ON LEDs sequentially one by one to simulate a
staircase (0.5 second each).
2.Keep all LEDs ON for 1 second.
3.Turn OFF LEDs sequentially from last to first.
4.Repeat indefinitely */

#include<lpc21xx.h>
#include"header.h"
int main()
{
		int i;
		IODIR0=0XF<<16;
		IOSET0=0XF<<16;
		while(1)
		{
			for(i=16;i<20;i++)
			{
				IOCLR0=1<<i;
				delay_ms(200);
			}
			delay_ms(400);
			
		for(i=19;i>15;i--)
			{
				IOSET0=1<<i;
				delay_ms(200);
			}
		}
}
