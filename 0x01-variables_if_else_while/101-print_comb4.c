#include<stdio.h>


int main(){
    int a = 0;
    int b = 1;
    int c = 2;
    int d = 1;
    int e = 1;
    int a1 = 0;
    int b1 = 1;
    int c1 = 2;
    while (a <= 9 && b <= 9 && c <= 9)
    {
        while (b <= 9)
        {
            while (c <= 9)
            {
                putchar(a + '0');
                putchar(b + '0');
                putchar(c + '0');
                putchar(',');
                putchar(' ');
                c++;
            }
            e++;
            b++;
            c = e + 1;
        
        }
        a1++;
        b1++;
        c1++;
        a = a1;
        b = b1;
        c = c1;
        
    }
    
}