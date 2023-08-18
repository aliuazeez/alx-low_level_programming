#include "main.h"
/**
 * print_number - prints number
 * @n: the number to print
 * Return: void
 */
void print_number(int n)
{
	if (n <= 0)
	{
		if (n == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar('-');
			n = -n;
			print_number(n / 10);
			_putchar((n % 10) + '0');
		}
	}
	else
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
}
