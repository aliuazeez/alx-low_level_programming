#include "main.h"
/**
 * _strcat - concatenate two string
 * @dest: destination string
 * @src: source string
 * @n: number of byte
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j = 0;
	int i = 0;

	while (dest[j] != '\0')
		j++;
	while (src[i] != 'n')
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}
