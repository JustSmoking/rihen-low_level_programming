#include "../header/main.h"
#include <stdio.h>

void print_alphabets(void)
{
    int i = 97;
    while (i <= 122)
    {
        putchar(i);
        i++;
    }
    
}

void print_alphabets_x10(void)
{
    int j = 0;
    while (j <= 9)
    {
        int i = 97;
        while (i <= 122)
        {
            putchar(i);
            i++;
        }
        putchar('\n');
        j++;
        
    }
    
}
int _islower(int c)
{
    if (c >= 97 && c < 123)
    {
        return 1;
    }
    return 0;
}

int _isalpha(int c)
{
    if (c >= 65 && c < 123)
    {
        return 1;
    }
    return 0;
}

int print_sign(int n)
{
    if (n > 0)
    {
        putchar('+');
        return 1;
    }

    if (n == 0)
    {
        putchar('0');
        return 0;
    }
    if (n < 0)
    {
        putchar('/');
        return 1;
    }   
}

int _abs(int c)
{
    if (c < 0)
    {
        c = c * (-1);
        return c;
    }

    if (c >= 0)
    {
        return c;
    }

}

int print_last_digit(int c)
{
    int k = _abs(c % 10);
    if (c == 0)
    {
        putchar(c + '0');
        return 0;
    }

    putchar(k + '0');
    return k;
    
}
void jack_bauer(void)
{
    int i = 0, j = 0, k = 0, l = 0;
    while (i <= 2 && j <= 3 && k <= 5 && l <= 9)
    {
        while (j <= 3)
        {
            while (k <= 5)
            {
                while (l <= 9)
                {
                    putchar(i + '0');
                    putchar(j + '0');
                    putchar(':');
                    putchar(k + '0');
                    putchar(l + '0');
                    l++;
                    putchar('\n');

                }
                k++;
                l = 0;
            }
            k = 0;
            j++;
        } 
        j = 0;
        i++;  
    }        
}

void times_tables(void)
{
    int i = 0, j = 0;
    while (i <= 9)
    {
        while (j <= 9)
        {
            int k = i * j;
            if (k >= 10)
            {
                putchar(((k / 10) % 10) + '0');
                putchar((k % 10) + '0');
                putchar(' ');
                putchar(',');
                
            }
            else
            {
                putchar(k + '0');
                putchar(' ');
                putchar(',');
            }
            j++;
        }
        i++;
        j = 0;
    }
    
}

int add(int a, int b)
{
    return a + b;
}

void print_to_98(int a)
{
    while (a < 99)
    {
        if (a <= 99)
        {
            printf("%d, ", a++);
        }
        else if (a >= 97)
        {
            printf("%d, ", a--);

        }
             
    }
    
}

long fibonnaci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonnaci(n - 1) + fibonnaci(n - 2);
}