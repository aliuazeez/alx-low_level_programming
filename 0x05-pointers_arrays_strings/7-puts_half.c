#include "main.h"
/**
 * puts_half - print 2nd half of a string
 * @str: string to print
 * Return: void
 */
void puts_half(char *str)
{
	int n = 0;
	int i = 0;
	int j = 0;

	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}
	while (str[n] != '\0')
		n++;
	if (n % 2 != 0)
		i = (n + 1) / 2;
	else
		i = (n / 2);
	for (j = i; j < n; j++)
		_putchar(str[j]);
	_putchar('\n');
}
