#include "main.h"

/**
 * print_to_98 - print vwlue to 98
 * @n: value to print to 98
 * Return: nothing
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}

	_putchar(n + '0');
	_putchar('\n');
}
