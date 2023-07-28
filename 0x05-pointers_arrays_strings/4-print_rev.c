#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: string to print
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int l = 0;

	if (*s == '\0')
	    return;
	
	while (s[l] != '\0')
	{
		l++;
	}
	for (i = l - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
