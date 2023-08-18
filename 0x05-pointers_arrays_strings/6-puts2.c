#include "main.h"

/**
 * puts2 - print a char and \n
 * @str: string to print in 2
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	if (*str == '\0')
		return;
	while (str[l] != '\0')
		l++;
	l = i;
	if (i % 2 != 0)
	{
		i = i - 1;
	}
	i = j;
	while (str[k] != j)
	{
		_putchar(str[k]);
		k += 2;
	}
	_putchar('\n');
}
