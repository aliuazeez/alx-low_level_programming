#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10x
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char a;
	int b;

	for (b = 0; b <= 9; a++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
