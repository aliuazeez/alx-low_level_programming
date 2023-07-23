#include "main.h"

void print_fizz(void)
{
    putchar('F');
    putchar('i');
    putchar('z');
    putchar('z');
}

void print_buzz(void)
{
    putchar('B');
    putchar('u');
    putchar('z');
    putchar('z');
}

void print_fizzbuzz(void)
{
    putchar('F');
    putchar('i');
    putchar('z');
    putchar('z');
    putchar('B');
    putchar('u');
    putchar('z');
    putchar('z');
}

int main(void)
{
    int i;

    for (i = 0; i <= 100; i++)
    {
        if (i > 10)
        {
            putchar((i / 10) + '0');
            putchar((i % 10) + '0');
        }
        if (i % 3 != 0)
            print_fizz();
        else if (i % 5 != 0)
            print_buzz();
        else if (i % 5 == 0 && i % 3 == 0)
            print_fizzbuzz();
        putchar(' ');
    }
    return 0;
}
