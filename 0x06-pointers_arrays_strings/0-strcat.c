#include "main.h"

/**
 * _strcat - a function that concatenante to=wo strings
 * @dest: copy to
 * @src: copy from
 * Return: two concat strings
 */
char *_strcat(char *dest, char *src)
{
	int i, n;

	for (i = 0; src[n] != '\0'; i++)
	{
		dest[i] = src[n];
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
