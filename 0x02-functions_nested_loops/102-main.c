#include "main.h"
#include <stdio.h>

long fibonnaci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonnaci(n - 1) + fibonnaci(n - 2);
}