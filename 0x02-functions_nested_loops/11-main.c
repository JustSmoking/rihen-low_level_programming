#include "main.h"
#include <stdio.h>

void print_to_98(int a)
{
    while (a < 99)
    {
        if (a <= 99)
        {
            printf("%d, ", a++);
        }
        else if (a >= 97)
        {
            printf("%d, ", a--);

        }
             
    }
    
}