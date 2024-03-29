#include "main.h"

/**
 * print_triangle - prints diagonal in n time
 * @size: number of time n prints
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j < i + 1; j++)
		{
			_putchar('#');
		}
	}
	_putchar('\n');
}
