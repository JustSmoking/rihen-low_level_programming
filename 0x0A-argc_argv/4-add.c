#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int i, sum = 0;
    if (argc == 1)
    {
        printf("0");
        return 1;
    }
    
    for(i = 0; i < argc; i++)
    {
       sum += atoi(argv[i]);
    }    
    printf("%d", sum);
}
