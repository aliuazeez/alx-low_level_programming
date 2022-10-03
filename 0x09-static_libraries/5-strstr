#include "main.h"
#include <stdlib.h>
/**
 * _strcmp - compares two strings, ending at the first byte that is different
 * @s1: string to be compared
 * @s2: string to compare to
 * @b: number of bytes to check
 * Return: 0 if string are different
 */
int _strncmp(char *s1, char *s2, unsigned int b)
{
	unsigned int i;

	for (i = 0; i <= b && *s1 == *s2 && *s1 != '\0' && *s2 != '\0'; i++)
	{
		s1++;
		s2++;
	}
	return (i - b);
}

/**
 * _strstr - locate a substring
 * @haystack: string to look through
 * @needle: substring to find
 * Return: pointer to string
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int len;

	len = 0;
	while (needle[len] != '\0')
		len++;
	while (*haystack != '\0')
	{
		if (_strncmp(haystack, needle, len) == 0)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
