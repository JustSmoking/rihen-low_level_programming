#include "main.h"


void rev_string(char *s)
{
    char tab[100];
    char *ptr = tab;
    char *temp = s;
    char *temp2 = s;
    while (*s != '\0' )
    {
        *ptr = *s;
        s++;
        ptr++;
    }
    ptr--;
    while (s != temp)
    {
        s--;
    }
    
    while (ptr != temp2 && *s != '\0')
    {
        *s = *ptr;
        ptr--;
        s++;
    }
    
    
}
