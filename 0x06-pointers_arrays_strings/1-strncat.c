#include "main.h"
/**
 * _strcat - concatenate two string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[j + i] = '\0';
	return (dest);
}
