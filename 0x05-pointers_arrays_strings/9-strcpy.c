#include <stdio.h>
/**
 * _strcpy - copy strings
 * @dest: string destination
 * @src: string source to be copied
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = '\0';
	int n = 0;
	int i = n;
	int j = 0;

	if (*src == '\0')
	{
		*dest = '\0';
		return (dest);
	}
	while (src[n] != '\0')
		n++;
	i = n + 1;
	temp = src;

	while (j != i)
	{
		dest[j] = temp[j];
		j++;
	}
	return (dest);
}
