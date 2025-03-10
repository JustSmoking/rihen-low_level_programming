#include<stdio.h>
#include<stdlib.h>



char *_strdup(char *str)
{
    int i;
    int count = 0;
    char *ptr = str;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    str = ptr;
    
    char *array = (char*)malloc((sizeof(char) * count) + 1);
    if (!array)
    {
        return NULL;
    }
    
    for (i = 0; i < count; i++)
    {
        array[i] = str[i];
    }
    
    free(str);
    array[count] = '\0';

    
    return array;

}