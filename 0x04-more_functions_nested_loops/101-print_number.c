#include "main.h"
/**
 * print_number - prints number
 * @n: the number to print
 * Return: void
 */
void print_number(int n)
{
	int i;

	if (n <= 9)
		_putchar(n + '0');
	else
	{
		while (n)
		{
			i = (n % 10) + '0';
			_putchar(i);
			n / 10;
		}
	}
}
