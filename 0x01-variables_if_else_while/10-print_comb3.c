#include<stdio.h>

int main(){
    int a = 0; 
    int c = 0;
    int b = 1;

    while (a <= 9  && b <= 9)
    {
        while (b <= 9)
        {
            putchar(a + '0');
            putchar(b + '0');
            putchar(',');
            putchar(' ');
            b++;
        }
        c++;
        a++;
        b = c + 1;
    }
    putchar('\n');
    
}