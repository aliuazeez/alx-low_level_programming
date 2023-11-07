#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - duplicate string
 * @str: string to be duplicated
 * Return: a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
		return (NULL);

	dup = malloc((strlen(str) + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);
	strcpy(dup, str);

	return (dup);
}
