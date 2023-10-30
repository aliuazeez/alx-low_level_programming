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
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (i);
}
