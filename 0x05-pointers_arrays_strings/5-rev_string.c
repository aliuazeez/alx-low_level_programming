#include "main.h"
/**
 * rev_string - print string in reverse
 * @s: string to print
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int l = 0;

	while (s[l] != '\0')
		l++;
	for (i = l - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
