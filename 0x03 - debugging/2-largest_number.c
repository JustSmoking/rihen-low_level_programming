#include "main.h"


int largest_number(int a, int b, int c)
{
    int largest = 0;
    if (a > b && a > c)
    {
        largest = a;
    }
    else if (b > a && b > c)
    {
        largest = b; 
    }
    else
    {
        largest = c; 
    }

    return (largest);
}
