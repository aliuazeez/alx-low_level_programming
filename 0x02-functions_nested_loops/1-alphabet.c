#include "main.h"
/**
 * print_alphabet - a function that prints alphabets
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
