#include "main.h"
/**
 * _strlen_recursion - print string length
 * @s: string to check
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_strlen_recursion(s + 1);
		i++;
		return (i);
	}
	else
		return (i);
}
