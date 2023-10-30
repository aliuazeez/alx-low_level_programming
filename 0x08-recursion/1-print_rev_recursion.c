#include "main.h"
/**
 * _print_rev_recursion - print string in reverse
 * @s: string to be printed
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	if (i > 0)
	{
		_putchar(s[i - 1]);
		_print_rev_recursion(s);
		i--;
	}
	else
		return;
}
