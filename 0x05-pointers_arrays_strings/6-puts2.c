#include "main.h"

/**
 * puts2 - print a char and \n
 * @str: string to print in 2
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	if (*str == '\0')
		return;
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
