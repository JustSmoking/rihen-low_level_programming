#include "main.h"
#include <stdio.h>

int _isalpha(int c)
{
    if (c >= 65 && c < 123)
    {
        return 1;
    }
    return 0;
}