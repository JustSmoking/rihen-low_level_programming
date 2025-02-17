#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
    int i = 0;
    char *ptr1 = dest;

    while (*dest != '\0')
    {
        dest++;
    }
    while (*src != '\0' && i < n)
    {
        if (*dest == '\0')
        {
            *dest = *src;
            i++;
            dest++;
            src++;
            *dest = '\0';
        }
        
    }
    dest = ptr1;
    return dest;
    
}
