#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert strings to int
 * @s: the string to convert to int
 * Return: int value
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	if (s[i] <= '\0')
		return (0);
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}
	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (result * sign);
}
