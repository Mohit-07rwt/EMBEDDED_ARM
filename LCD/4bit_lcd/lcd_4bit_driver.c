#include<lpc21xx.h>
#include"header.h"
void lcd_data(unsigned char data)
{
	IOCLR1=0XFE<<16;
	IOSET1=(data & 0XF0)<<16;
	IOSET1=1<<17;
	IOCLR1=1<<18;
	IOSET1=1<<19;
	delay_ms(2);
	IOCLR1=1<<19;
	
	IOCLR1=0XFE<<16;
	IOSET1=(data & 0X0F)<<20;
	IOSET1=1<<17;
	IOCLR1=1<<18;
	IOSET1=1<<19;
	delay_ms(2);
	IOCLR1=1<<19;

}

void lcd_cmd(unsigned int cmd)
{
	IOCLR1=0XFE<<16;
	IOSET1=(cmd & 0XF0)<<16;
	IOCLR1=1<<17;
	IOCLR1=1<<18;
	IOSET1=1<<19;
	delay_ms(2);
	IOCLR1=1<<19;
	
	IOCLR1=0XFE<<16;
	IOSET1=(cmd & 0X0F)<<20;
	IOCLR1=1<<17;
	IOCLR1=1<<18;
	IOSET1=1<<19;
	delay_ms(2);
	IOCLR1=1<<19;
}


//for starting
void lcd_init()
{
	IODIR1=0XFE<<16;
	lcd_cmd(0x02);
	lcd_cmd(0x28);
	lcd_cmd(0x0e);
	lcd_cmd(0x01);
}


//for string
void lcd_string(char *p)
{
	while(*p!=0)
	{
		lcd_data(*p);
		p++;
	}
}

//for integer 
void lcd_int(int num)
{
	int a[10],i=0;
	if(num==0)
	{
		lcd_data('0');
		return;
	}
	if(num<0)
	{
		num=-num;
		lcd_data('-');
	}
	while(num>0)
	{
		a[i]=num%10+48;
		num=num/10;
		i++;
	}
	for(i=i-1;i>=0;i--)
	{
		lcd_data(a[i]);
	}
}




//for cgram character generation
void lcd_cgram(void)
{
	unsigned char a[8]={0x00,0x0a,0X15,0x15,0X11,0X0a,0x04,0x00};
	lcd_cmd(0x40);
	for(int i=0;i<8;i++)
	{
		lcd_data(a[i]);
	}
}
