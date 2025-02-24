#include "main.h"
#include<stdio.h>

void print_chessboard(char (*a)[8])
{
    int i;
    while (*a != NULL)
    {
        for (i = 0; i < 8; i++)
        {
            printf("%c", (*a)[i]);
        }
        printf("\n");
        a++;   
    }
    
}
