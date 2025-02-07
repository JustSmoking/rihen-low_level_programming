#include "main.h"
#include <stdio.h>



void print_alphabets_x10(void)
{
    int j = 0;
    while (j <= 9)
    {
        int i = 97;
        while (i <= 122)
        {
            putchar(i);
            i++;
        }
        putchar('\n');
        j++;
        
    }
}