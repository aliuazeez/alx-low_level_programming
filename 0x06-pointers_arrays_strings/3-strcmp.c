#include "main.h"
/**
 * _strcmp - compare 2 string
 * @s1: 1st string
 * @s2: second string
 * Return: differences between two strings
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
