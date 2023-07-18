#include "main.h"

/**
 * print_alphabet_x10 - 
 * print alphabet 10x
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	int b;

	for (b = 0; b <= 10; a++)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		a = 'a';
	}
	_putchar('\n);
}
