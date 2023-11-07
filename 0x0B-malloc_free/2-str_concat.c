#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenate two strings
 * @s1: first string to print
 * @s2: string to be printed later
 * Return: s1, followed by s2
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	char *concat = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);
	strcpy(concat, s1);
	strcat(concat, s2);

	return (concat);
}
