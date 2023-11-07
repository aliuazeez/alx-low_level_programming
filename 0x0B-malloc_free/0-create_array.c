#include "main.h"
#include <stdlib.h>
/**
 * create_array - a funcion that creates array of char
 * @size: size of array
 * @c: array
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);
	unsigned int i;

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
