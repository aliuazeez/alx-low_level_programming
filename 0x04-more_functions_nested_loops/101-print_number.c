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
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
}
