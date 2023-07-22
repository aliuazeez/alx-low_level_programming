#include "main.h"

/**
 * print_line - prints line in n time
 * @n: number of time n prints
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; n > i; n--)
	{
		if (n <= 0)
			_putchar('\n');
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
