#include "main.h"
#include <stdio.h>

void print_array(int *a, int n)
{
    int i = 0;
    while (i < n)
    {
        printf("%d, ", *a);
        a++;
        i++;
    }
    
}
