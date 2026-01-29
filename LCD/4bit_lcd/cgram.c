#include<lpc21xx.h>
#include"header.h"
int main()
{	
	lcd_init();
	lcd_string("MY L");
	lcd_cgram();
	lcd_cmd(0x84);
	//lcd_data('b');
	lcd_data(0);
	//lcd_cmd(0xc8);
	//lcd_data(0);
	lcd_string("VE");
	lcd_string(" ANURADHA");
}
	