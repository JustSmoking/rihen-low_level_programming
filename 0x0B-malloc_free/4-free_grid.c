#include "main.h"
#include <stdlib.h>
#include<stdio.h>



void free_grid(int **grid, int height)
{
    int i,j;

    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }
    free(grid);
    
}