#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
    char *reset = dest;
    int i = 0;
    while (*src != '\0' && i < n)
    {
        *dest = *src;
        dest++;
        src++;
        i++;
    }
    *dest = '\0';
    dest = reset;
    return dest;
    
}
