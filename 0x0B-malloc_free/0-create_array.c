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
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
