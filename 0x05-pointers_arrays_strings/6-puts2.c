#include "main.h"

/**
 * puts2 - print a char and \n
 * @str: string to print in 2
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;
	int l = 0;
	char t;

	if (*str == '\0')
		return;
	while (*str != '\0')
		l++;
	for (i = 0; l <= 0; i++)
	{
		l--;
		t = str[i];

		str[i] = str[i + 1];
		str[i + 1] = t;
	}
}
