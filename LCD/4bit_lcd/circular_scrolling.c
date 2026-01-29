/*#include <lpc21xx.h>
#include "header.h"
char msg[] = "MOHIT RAWAT   ";

int main()
{
    int i, j;
    char disp[17];
		int len = sizeof(msg) - 1;

    lcd_init();

    while(1)
    {
        for(i = 0; i < 16; i++)
        {
          for(j = 0; j < 16; j++)
            {
                //disp[j] = msg[(i + j) % (sizeof(msg) - 1)];
								disp[j] = msg[(len - i + j) % len];
            }
            disp[16] = '\0';

            lcd_cmd(0x80);
            lcd_string(disp);

            delay_ms(300);
        }
    }
}
*/


#include <lpc21xx.h>
#include "header.h"

char msg[] = "MOHIT RAWAT   ";

int main()
{
    int i, j;
    int len = sizeof(msg) - 1;
    char disp[17];

    lcd_init();

    while(1)
    {
        for(i = 0; i < len; i++)
        {
            for(j = 0; j < 16; j++)
            {
                disp[j] = msg[(len - i + j) % len];
            }
            disp[16] = '\0';

            lcd_cmd(0x80);
            lcd_string(disp);

            delay_ms(300);
        }
    }
}
