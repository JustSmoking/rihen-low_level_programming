#include "main.h"
#include <stdio.h>
#include <stdlib.h>


int **alloc_grid(int width, int height)
{
    int i;
    int j;

    if (width <= 0 || height <= 0) return NULL;
    
    int **gridArray = (int **)malloc(sizeof(int*) * width);

    
    if (!gridArray) return NULL;
    
    for (i = 0; i < width; i++)
    {
        gridArray[i] = (int*)malloc(sizeof(int) * height);
         
        if (!gridArray[i])
        {
            for (j = 0; j < i; j++)
            {
                free(gridArray[j]);
            }
            free(gridArray);
            return NULL;
        }
        memset(gridArray[i], 0, sizeof(int) * height);
    }
    return gridArray;
}