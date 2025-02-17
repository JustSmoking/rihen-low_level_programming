#include "main.h"


char *rot13(char *s)
{
    int i;
    char *temp = s;
    char *ptr = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
    char *ptr2 = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

    while (*s != '\0')
    {
        for (i = 0; i < 52; i++)
        {
            if (*s == ptr[i])
            {
                *s = ptr2[i];
                break;
            }
            
        }
        s++;
    }
    return temp;
}
