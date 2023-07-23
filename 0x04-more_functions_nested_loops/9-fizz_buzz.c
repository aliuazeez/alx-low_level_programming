#include "main.h"

/**
 * main - starting point
 *
 * Return: always 0
 */
void pfizz(void)
{
	_putchar('F');
	_putchar('i');
	_putchar('z');
	_putchar('z');
}
void pbuzz(void)
{
	_putchar('B');
	_putchar('u');
	_putchar('z');
	_putchar('z');
}
void pfb(void)
{
	_putchar('F');
	_putchar('i');
	_putchar('z');
	_putchar('z');
	_putchar('B');
	_putchar('u');
	_putchar('z');
	_putchar('z');
}

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i > 9)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(' ');
		}
		else
		{
			_putchar(i + '0');
			_putchar(' ');
		}
		if ((i % 3) == 0)
		{
			pfizz();
			_putchar(' ');
		}
		else if ((i % 5) == 0)
		{
			pbuzz();
			_putchar(' ');
		}
		else if (((i % 3) && (i % 5)) == 0)
		{
			pfb();
			_putchar(' ');
		}
	}
	return (0);
}
