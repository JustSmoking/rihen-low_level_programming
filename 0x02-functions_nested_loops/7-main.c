#include "main.h"
#include <stdio.h>

int print_last_digit(int c)
{
    int k = _abs(c % 10);
    if (c == 0)
    {
        putchar(c + '0');
        return 0;
    }

    putchar(k + '0');
    return k;
    
}
