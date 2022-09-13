#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet
 * in lowercase, followed by a new line
 * Return: always 0
 */
void print_alphabet(void)
{
	int ap;

	for (ap = 'a'; ap <= 'z'; ap++)
	{
		_putchar(ap);
	}
	_putchar('\n');
}
