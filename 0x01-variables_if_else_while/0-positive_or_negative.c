#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int n = RAND_MAX % rand();
    int signe = (n % 10 == 5) ? -1 : 1;
    n = signe * n;
    if (n > 0)
    {
        printf("%d est positif \n", n);
    } else if (n == 0)
    {
        printf("%d est nul \n", n);    
    }else
    {
        printf("%d est negatif \n", n);
    }

    return 0;
}