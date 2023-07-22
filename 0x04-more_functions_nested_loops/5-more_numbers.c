#include "main.h"

/**
 * more_numbers - print int from 0 to 14 10x
 * Return: nothing
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 14; i++)
	{
		for (j = 10; j <= 10; j++)
		{
			_putchar(i + '0');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
