/*Program 15 – LED Ping-Pong Effect					Context: Four LEDs ? P0.16, P0.17, P0.18, P0.19 Tasks:
1.Turn ON LEDs sequentially from P0.16 ? P0.19 (0.5 second
each).
2.Reverse the sequence P0.19 ? P0.16 (0.5 second each).
3.Repeat the forward-backward “ping-pong” effect
continuously*/
#include<lpc21xx.h>
#include"header.h"
#define LED16 (1<<16)
#define LED17 (1<<17)
#define LED18 (1<<18)
#define LED19 (1<<19)
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
			IOSET0=1<<i;
		}
		for(i=19;i>15;i--)
		{
			IOCLR0=1<<i;
			delay_ms(200);
			IOSET0=1<<i;
		}
	
	}
}
