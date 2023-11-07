#include "main.h"
#include <stdlid.h>
#include <string.h>
/**
 * _strdup - duplicate string
 * @str: string to be duplicated
 * Return: a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);
	char *dup == malloc((strlen(str) + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);
	strcpy(dup, str);

	return (dup);
}
