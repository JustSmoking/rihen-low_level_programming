#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(0));
    int n = (RAND_MAX % (rand() * 100));
    
    if (n % 10 < 6 && n % 10 != 0)
        printf("%d is less than 6 and not 0", n % 10);
    else if (n % 10 == 0)
        printf("%d is equal to 0", n % 10);
    else if (n % 10 > 5)
        printf("%d is greater than 5", n % 10); 
    
}