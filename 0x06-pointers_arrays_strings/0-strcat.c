#include "main.h"
/**
 * _strcat - concatenate two string
 * @dest: destination string
 * @src: source string
 * Return: @dest
 */
char *_strcat(char *dest, char *src)
{
	int n = 0;
	int i = 0;

	while (dest[n] != '\0')
		n++;
	while (src[i] != '\0')
	{
		dest[n + i] = src[i];
		i++;
	}
	dest[n + i] = '\0';
	return (dest);
}
