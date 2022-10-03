#include "main.h"
/**
 * _strchr - locatte the xter in a string
 * @s: pointer to string
 * @c: xter to locate
 * Return: anything
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
