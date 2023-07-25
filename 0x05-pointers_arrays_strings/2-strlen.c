#include "main.h"
/**
 * int strlen - vounts the no of string
 * @s: string to br counted
 * Return: nothing
 */
int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
	}	
	return (i);
}
