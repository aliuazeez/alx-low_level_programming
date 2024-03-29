#include "main.h"
/**
 * _print_rev_recursion - print string in reverse
 * @s: string to be printed
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
		i++;
	if (i > 0)
	{
		_print_rev_recursion(s + 1);
		_putchar(s[i - 1]);
		i--;
	}
	else
		return;
}
