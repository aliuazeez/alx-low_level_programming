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

	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}
	while (str[i] != '\0')
		i++;
	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
