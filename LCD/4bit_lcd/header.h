extern void lcd_data(unsigned char data);
extern void lcd_cmd(unsigned int cmd);
extern void lcd_init(void);
extern void lcd_string(char *p);
extern void delay_sec(unsigned int sec);
extern void delay_ms(unsigned int ms);
extern void lcd_integer(int num);
extern void lcd_cgram(void);
