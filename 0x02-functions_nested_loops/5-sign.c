#include "header/main.h"

int main()
{
    int r;
    r = print_sign(98);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    r = print_sign(0);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    r = print_sign(0xff);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    r = print_sign(-1);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    return (0);
}
