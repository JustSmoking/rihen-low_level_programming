#include "main.h"
#include <stdio.h>

void print_line(int n)
{
    int i = 0;
    if (n <= 0)
    {
        return;

    }
    else
    {
        for (i = 0; i < n; i++)
        {
            putchar('_');
        }    
    }
    putchar('\n');
}
