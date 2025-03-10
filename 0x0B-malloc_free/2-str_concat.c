#include<stdio.h>
#include<stdlib.h>


char *str_concat(char *s1, char *s2)
{   int i;
    int count1 = 0, count2 = 0;

    while (*s1 != '\0' && *s2 != '\0')
    {
        count1++;
        count2++;
        s1++;
        s2++;
    }
    
    char *array = (char*)malloc(sizeof(char) * (count1 + count2 + 1));

    if(!array) return NULL;
    for(i = 0; i < count1; i++)
    {
        array[i] = s1[i];
        array++;
    }

    for(i = 0; i < count2; i++)
    {
        array[count1 + i] = s2[i];
        array++;
    }

    array[count1 + count2] = '\0';

    return array;

}