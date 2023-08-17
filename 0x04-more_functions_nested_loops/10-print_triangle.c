#include "main.h"
/**
 * print_triangle - print triangle
 * @size: number of size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = size - 1; i >= 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j < size - i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

