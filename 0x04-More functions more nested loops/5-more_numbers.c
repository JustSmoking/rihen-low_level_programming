#include "main.h"
#include <stdio.h>

void more_numbers(void)
{
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        int j = 48;
        int k = 49;
        while (j < 58)
        {
            putchar(j);
            if (j == 57)
            {
                int l = 48;
                while (l <= 52)
                {
                    putchar(k);
                    putchar(l);
                    l++;
                }
                
            }
            j++;
        }
        putchar('\n');
        
    }
}
