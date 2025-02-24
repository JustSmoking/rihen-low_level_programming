#include "main.h"
#include <stdlib.h>

char *_strpbrk(char *s, char *accept)
{
    char *temp = accept;
    while (*s != '\0')
    {

        while (*accept != '\0')
        {
            if (*s == *accept)
            {
                return s;
            }
            accept++;
        }
        accept = temp;
        s++;
    }
    return NULL;

}
