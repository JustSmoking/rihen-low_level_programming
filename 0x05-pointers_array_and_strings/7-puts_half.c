#include "main.h"
#include<stdio.h>

void puts_half(char *str)
{
    int count = 0;
    char *temp = str;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    str--;
    while (str != temp)
    {
        str--;
    }
    if (count % 2 == 0)
    {
        int i;
        int aff = count / 2;
        for (i = aff; i < count; i++)
        {
            putchar(str[i]);
        }
        
    }
    else
    {
        int aff = count / 2 + 1;
        int i;
        for (i = aff; i < count; i++)
        {
            putchar(str[i]);
        }
        
    }
    
    
}
