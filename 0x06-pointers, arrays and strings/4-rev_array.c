#include "main.h"


void reverse_array(int *a, int n)
{
    int tab[20];
    int *ptr = a;
    int *ptr2 = tab;
    int i = 0;
    while (i < n)
    {
        tab[i] = *a;
        a++;
        ptr2++;
        i++;
    }
    ptr2--;
    a = ptr;
    i = 0;
    while (i < n)
    {
        *a = *ptr2;
        a++;
        ptr2--;
        i++;
    }
    a = ptr;
}
