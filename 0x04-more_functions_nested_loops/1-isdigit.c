#include "main.h"

/**
 * _isdigit - check for number character
 * @c: input
 * Return: 1 if digit otherwise 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
