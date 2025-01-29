#include<stdio.h>


int main(){
    int a = 'a';
    int A = 'A';

    while (a <= 'z')
    {
        putchar(a);
        a++;
    }
    while (A <= 'Z')
    {
        putchar(A);
        A++;
    }
    putchar('\n');
    
}