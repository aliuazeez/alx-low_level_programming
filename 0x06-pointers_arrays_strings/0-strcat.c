#include "main.h"

/**
 * _strcat - a function that concatenante to=wo strings
 * @dest: copy to
 * @src: copy from
 * Return: two concat strings
 */
char *_strcat(char *dest, char *src)
{
	while (*dest)
		++dest;
	while (*dest++ = *src++);
	*dest = '\0';
	return (dest);
}
