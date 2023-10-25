#include "main.h"

/**
 * _strncpt - copy a string to another destination
 * @dest: destination string
 * @src: source string
 * @n : no of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return dest;
}
