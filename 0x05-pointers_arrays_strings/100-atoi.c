#include "main.h"
#include <limits.h>
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

	while (s[i] == ' ')
		i++;
	while(s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
		{
			return (sign == 1) ? INT_MAX : INT_MIN;
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (sign * result);
}
