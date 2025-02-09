#include "main.h"
#include <stdio.h>



void print_diagonal(int n)
{
    int i = 0;
    int j;
    if (n <= 0)
    {
        putchar('\n');

    }
    else
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < i; j++)
            {
                putchar(' ');
            }
            putchar('\\');
            putchar('\n');
        }
    }
    putchar('\n');
}
