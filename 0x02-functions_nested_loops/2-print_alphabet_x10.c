#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10x alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char c;

	while (n < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		n++;
		_putchar('\n');
	}
}
