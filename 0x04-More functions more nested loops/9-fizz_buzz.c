#include "main.h"
#include <stdio.h>


int main()
{
    int i = 1;
    while (i <= 100)
    {
        if (i % 5 == 0 && i % 3 == 0)
        {
            printf("FizzBuzz ");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz ");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz ");
        }
        else
        {
            printf("%d ", i);
        }
        i++;
    }
    
}
