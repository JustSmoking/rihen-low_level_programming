#include <stdio.h>


int main(){
    char a = 'a';

    while (a <= 'z')
    {
        if (a != 'q' && a != 'e')
            putchar(a);
        a++;
    }
    putchar('\n');
    
}