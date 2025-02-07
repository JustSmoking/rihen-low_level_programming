#include "main.h"
#include <stdio.h>

int _abs(int c)
{
    if (c < 0)
    {
        c = c * (-1);
        return c;
    }

    if (c >= 0)
    {
        return c;
    }

}