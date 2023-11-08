#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - check mem allocation
 * @b: mem to check
 * Return: exit 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit (98);
	return (ptr);
}
