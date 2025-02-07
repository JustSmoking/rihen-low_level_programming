#include "main.h"
#include <stdio.h>

void times_tables(void)
{
    int i = 0, j = 0;
    while (i <= 9)
    {
        while (j <= 9)
        {
            int k = i * j;
            if (k >= 10)
            {
                putchar(((k / 10) % 10) + '0');
                putchar((k % 10) + '0');
                putchar(' ');
                putchar(',');
                
            }
            else
            {
                putchar(k + '0');
                putchar(' ');
                putchar(',');
            }
            j++;
        }
        i++;
        j = 0;
    }
    
}