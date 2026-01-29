#include<lpc21xx.h>
#include"header.h"
void lcd_data(unsigned char data)
{
	IOCLR0=0X7FF; 	 //clear p0.0-p0.10
	IOSET0=data;		 //write binary values on data pins
	IOSET0=1<<8;		 //rs=1
	IOCLR0=1<<9;		 //rw=0
	IOSET0=1<<10;		 //en=1
	delay_ms(2);
	IOCLR0=1<<10;		 //en=0
}

void lcd_cmd(unsigned int cmd)
{
	IOCLR0=0X7FF; 	 //clear p0.0-p0.10
	IOSET0=cmd;		 //write binary values on data pins
	IOCLR0=1<<8;		 //rs=0
	IOCLR0=1<<9;		 //rw=0
	IOSET0=1<<10;		 //en=1
	delay_ms(2);
	IOCLR0=1<<10;		 //en=0
}


void lcd_init()
{
	IODIR0=0X7FF; 	 //clear p0.0-p0.10
	lcd_cmd(0x38);   //select 1 & 2 row of lcd
	lcd_cmd(0x0e);
	lcd_cmd(0x01);
}

void lcd_string(char *p)
{
	while(*p!=0)
	{
		lcd_data(*p);
		p++;
	}
}
