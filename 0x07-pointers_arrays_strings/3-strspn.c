#include "main.h"


unsigned int _strspn(char *s, char *accept)
{
    char *temp = accept;
    unsigned int i = 0;
    while (*s != '\0')
    {
        unsigned int j = 0;
        while (*accept != '\0')
        {
            if (*s == *accept)
            {
                j++;
                i++;
                break;
            }
            accept++;
        }
        if (j == 0)
        {
            return i;
        }
        
        accept = temp;
        s++;
    }
    return i;
    
}
