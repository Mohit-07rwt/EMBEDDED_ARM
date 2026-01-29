#include<lpc21xx.h>
#include"header.h"
int main()
{
	lcd_init();
	lcd_cmd(0x80 +3);
//	lcd_data('M');
//	lcd_data('O');
//	lcd_data('H');
//	lcd_data('I');
//	lcd_data('T');
		lcd_string("MOHIT ");
	
	//delay_ms(150);
	//lcd_cmd(0xc0 +3);
	//lcd_data(' ');
	//lcd_data('R');
	//lcd_data('A');
	//lcd_data('W');
	//lcd_data('A');
	//lcd_data('T');
	lcd_string(" RAWAT");
}
