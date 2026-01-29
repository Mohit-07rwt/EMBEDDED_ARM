extern void delay_sec(unsigned int sec);
extern void delay_ms(unsigned int ms);
void lcd_data(unsigned char data);
void lcd_cmd(unsigned int cmd);
void lcd_init(void);
void lcd_string(char *p);
