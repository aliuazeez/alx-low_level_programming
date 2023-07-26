#include "main.h"
/**
 * int _strlen - vounts the no of string
 * @s: string to br counted
 * Return: nothing
 */
int _strlen(char *s)
{
	int i = 0;

	for (i = 0; *s != 0; i++)
		s++;
	return (i);
}
