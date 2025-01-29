#include <stdio.h>


int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 1;
    int a1 = 0;
    int b1 = 0;
    int c1 = 0;
    int d1 = 1;
    int e = 1;
    int f = 1;
    
     while (a <= 9 && b <= 9 && c <= 9 && d <= 9)
    {
        while (b <= 9)
        {
            while (c <= 9)
            {
                while (d <= 9)
                {
                    putchar(a + '0');
                    putchar(b + '0');
                    putchar (' ');
                    putchar(c + '0');
                    putchar(d + '0');
                    putchar(',');
                    putchar(' ');
                    d++;
                }
                e++;
                c++;
                d = e + 1;
            }
            f++;
            b++;
            c = f + 1;;
        
        }
        a1++;
        b1++;
        c1++;
        d1++;
        a = a1;
        b = b1;
        c = c1;
        d = d1;
        
    }
    
}
    
