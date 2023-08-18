#include "main.h"

/**
 * puts2 - print a char and \n
 * @str: string to print in 2
 * Return: nothing
 */
void puts2(char *str)
{
	int i;
	int l = 0;

	if (*str == '\0')
		return;
	while (str[l] != '\0')
		l++;
	for (i = 0; str[i] != l; i+=2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
