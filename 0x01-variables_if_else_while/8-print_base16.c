#include <stdio.h>

int main(){

    int a = 0;
    while (a <= 9)
    {
        putchar(a + '0');
        a++;
    }

    char b = 'a';
    while (b <= 'f')
    {
        putchar(b);
        b++;
    }

    putchar('\n');
    
}