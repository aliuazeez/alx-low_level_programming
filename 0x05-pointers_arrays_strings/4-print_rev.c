#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: string to print
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	s++;
	for (i = 0; *s == '\0'; s--)
		_putchar(*s);
	_putchar('\n');
}
