/* Write an ECP that will print active-low switch pressed count on three active-low leds.
Refer the given image for more details.
Note: Don’t take the action when the switch is pressed, after releasing a switch increment the count
& print the count on 3 leds.*/
#include<lpc21xx.h>
#include"header.h"
#define SW ((IOPIN0>>7)&1)
int main()
{
	int c=0;
	IODIR0=0X7;
	//IOCLR0=0X7;
	while(1)
	{
		if(SW==0)
		{
			while(SW==0);
			c++;
			if(c<8)
			{
				IOSET0=c<<0;
				delay_ms(200);
				IOCLR0=c<<0;
			}
			if(c>7)
				c=0;
		}
	}
}
