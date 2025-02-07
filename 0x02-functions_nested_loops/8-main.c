#include "main.h"
#include <stdio.h>

void jack_bauer(void)
{
    int i = 0, j = 0, k = 0, l = 0;
    while (i <= 2 && j <= 3 && k <= 5 && l <= 9)
    {
        while (j <= 3)
        {
            while (k <= 5)
            {
                while (l <= 9)
                {
                    putchar(i + '0');
                    putchar(j + '0');
                    putchar(':');
                    putchar(k + '0');
                    putchar(l + '0');
                    l++;
                    putchar('\n');

                }
                k++;
                l = 0;
            }
            k = 0;
            j++;
        } 
        j = 0;
        i++;  
    }        
}