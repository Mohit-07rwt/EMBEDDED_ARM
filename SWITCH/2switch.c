 #include<lpc21xx.h>
 #include"header2.h"
 #define DIR (3<<0)
 #define SW1 ((IOPIN0>>5)&1)
 #define SW2 ((IOPIN0>>6)&1)
 int main()
{
	int c=0;
	IODIR0=DIR;
	IOSET0=DIR;
	
	while(1)
	{
		if(SW1==0 || SW2==0)
		{
			while(SW1==0 || SW2==0);
			c++;
		}
		if(c%2!=0)
			IOCLR0=DIR;
		else
			IOSET0=DIR;
	}
}
