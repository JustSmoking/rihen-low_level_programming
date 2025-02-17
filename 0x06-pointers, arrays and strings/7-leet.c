#include "main.h"




char *leet(char *s)
{
    int i;
    char *ptr = "aAeEoOLlTt";
    char *ptr2 = "4433007711";
    char *ptr3 = s;
    while (*s != '\0')
    {
        for (i = 0; i < 10; i++)
        {
            if (*s == ptr[i])
            {
                *s = ptr2[i];
            }
        }
        s++;
    }
    return ptr3; 
}
