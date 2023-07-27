#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: string to print
 * Return: void
 */
void print_rev(char *s)
{
	if (s == '\0'))
		_putchar('\n');
	int i = 0;
	while (s[i] != '\0')
		i++;
	int j;

	for (j = i - 1; i >= 0; i--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
