#include "main.h"

/**
 * _isalpha - check if its alphabet
 * @c: the value to b3 checked
 * Return: 1 if no error else 0
 */
int _isalpha(int c)
{
	if (( c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
