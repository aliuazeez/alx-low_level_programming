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

	if (*s == '\0')
		_putchar(' ');
	else
	{
		while (s[l] != '\0')
			l++;
		for (i = l - 1; i >= l / 2; i--)
		{
			_putchar(s[i]);
		}
	}
}
