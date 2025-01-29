#include<stdio.h>


int main(){
    int i = 0;
    while (i <= 9)
    {
        if (i == 9)
        {
            putchar(i + '0');
        }else{
            putchar(i + '0');
            putchar(',');
            putchar(' ');
        }
        i++;
        
    }
}