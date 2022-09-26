#include "main.h"
/**
 * _memcpy - copies memories area
 * @dest: pointer to destination memory area
 * @src: pointer to source mempry area
 * @n: number of bytes to copy
 * Return: pointer to destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
