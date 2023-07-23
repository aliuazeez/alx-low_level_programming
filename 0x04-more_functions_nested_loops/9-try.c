#include "main.h"

/**
 * pf - print Fizz
 * Return: nothing
 */

void pf(void)
{
	_putchar('F');
	_putchar('i');
	_putchar('z');
	_putchar('z');
}

/**
 * pb - print Buzz
 * Return: nothing
 */

void pb(void)
{
	_putchar('B');
	_putchar('u');
	_putchar('z');
	_putchar('z');
}

/**
 * pfb - print FizzBuzz
 * Return: nothing
 */

void pfb(void)
{
	pf();
	pb();
}

/**
 * main - entry point
 * a program that print 1 to 100, but if a number
 * is divisible by 3, it print Fizz, prints Buzz
 * if divisible by 5 and FizzBuzz if divisible
 * by 3 & 5
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i <= 9)
		{
			if (((i % 5) == 0) && ((i % 3) != 0))
			{
				pb();
				_putchar(' ');
			}
			else if (((i % 3) == 0) && ((i % 5) != 0))
			{
				pf();
				_putchar(' ');
			}
			else
			{
				_putchar(i + '0');
				_putchar(' ');
			}
		}
		else
		{
			if ((i % 3) == 0)
			{
				pf();
				_putchar(' ');
			}
			else if ((i % 5) == 0)
			{
				pb();
				_putchar(' ');
			}
			else if (((i % 3) == 0) && ((i % 5) == 0))
			{
				pfb();
				_putchar(' ');
			}
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
	return (0);
}
