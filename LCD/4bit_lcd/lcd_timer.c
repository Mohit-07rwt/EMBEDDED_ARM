#include<lpc21xx.h>
#include"header.h"
int main()
{
	int sec,min;
	lcd_init();
	while(1)
	{
		for(min=0;min<60;min++)
		{
			for(sec=0;sec<60;sec++)
			{
				lcd_cmd(0x80);
				lcd_data(min/10+48);
				lcd_data(min%10+48);
				lcd_data(':');
				lcd_data(sec/10+48);
				lcd_data(sec%10+48);
				delay_ms(200);
				lcd_cmd(0x01);
			}
		}
	}
}
