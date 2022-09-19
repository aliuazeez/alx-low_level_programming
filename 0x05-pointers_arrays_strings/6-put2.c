#include "main.h"
/**
 * puts2 -  function that print every cter of a string
 * starting with first character
 * followed by  new line
 * @str: pointer
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
