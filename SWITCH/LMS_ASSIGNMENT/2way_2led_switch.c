#include"lpc21xx.h"
#include"header.h"
#define sw1 ((IOPIN0>>8)&1)
#define sw2 ((IOPIN0>>9)&1)
int main()
{
	int c=0,c2=0;
	IODIR0=0XFF;
	while(1)
	{
		if(sw1==0)
		{																										
			while(sw1==0);												
			if(c%2==0)														
			{																								
			IOSET0=0XF;																						
			IOCLR0=0XF0;																		
			}																				
			else																	
			{																														
				IOCLR0=0XF;												
				IOCLR0=0XF0;														
			}
			c++;
		}
		if(sw2==0)
		{
			while(sw2==0);
			if(c2%2==0)
			{
			IOSET0=0XF0;
			IOCLR0=0XF;
			}
			else
			{
				IOCLR0=0XF;
				IOCLR0=0XF0;
			}
			c2++;
		}
	}
}

