#include "main.h"
/**
 * _strcat - a funtion that appends string src to the string dest,
 * overwiting the terminatio=ng byte at the end of dest and then adds a 
 * terminatu=ing null byte
 * @dest: destination string
 * @src: source string
 * Return: dest otherwise error
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
