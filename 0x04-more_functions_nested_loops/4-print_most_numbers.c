#include "main.h"

/**
 * print_most_numbers - prints number except 2 & 4
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		_putchar(a);
		while (a != 2 || a != 4)
			a++;
	}
}
