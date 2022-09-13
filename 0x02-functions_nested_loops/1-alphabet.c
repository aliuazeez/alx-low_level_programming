#include "main.h"

/**
 * main - a function that prints the alphabet
 * in lowercase, followed by a new line
 * Return: always 0
 */
void print_alphabet(void)
{
	char ap;

	for (ap = 'a'; ap <= 'z'; ap++)
	{
		_putchar(ap);
	}
	_putchar('\n');
	return (0);
}
