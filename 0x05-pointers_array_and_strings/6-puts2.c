#include "main.h"
#include<stdio.h>

void puts2(char *str)
{
    while (*str != '\0')
    {
        putchar(*str);
        str += 2;
    }
    putchar('\n');
    
}
