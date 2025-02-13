#include "main.h"
#include <stdio.h>



void print_rev(char *s)
{
    char *ptr = s;

    while (*s !='\0')
    {
        s++;
    }
    s--;
    while (s != ptr)
    {
        putchar(*s);
        s--;
    }
    
}



