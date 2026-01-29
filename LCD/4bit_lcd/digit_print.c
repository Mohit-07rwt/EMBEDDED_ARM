#include<lpc21xx.h>
#include"header.h"
int main()
{
	int i,num;
	lcd_init();
	while(1)
	{
		for(i=0;i<=59;i++)
		{
			lcd_cmd(0x80);
			num=i;
			lcd_data(num/10+48);
			lcd_data(num%10+48);
			delay_ms(200);
			lcd_cmd(0x01);
		}
	}
}
