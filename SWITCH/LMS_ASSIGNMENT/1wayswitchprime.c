#include <LPC21xx.H>
#include "header.h"
#define SW1 ((IOPIN0 >> 14) & 1)
int isPrime(int num)
{
	int a;
	for(a=2;a<num;a++)
	{
		if(num % a == 0)
		break;
	}
	if(a == num)
		return 1;
	else
		return 0;
}

int main()
{
	int i,c;
	IODIR0 = 0XFF;
	while(1)
	{
		if(SW1==0)
		{
			while(SW1==0);
			for(i=0;i<8;i++)
			{
				if(c%2==0)
				{
					if(isPrime(i))
					{
						IOSET0=1<<i;
						delay_ms(200);
						IOCLR0=1<<i;
						delay_ms(200);
					}
				}
				if(c%2!=0)
				{
					if(isPrime(i)==0)
					{
						IOSET0=1<<i;
						delay_ms(200);
						IOCLR0=1<<i;
						delay_ms(200);
					}
				}
			}
			c++;
		}
	}
}
