#include "main.h"

/**
 * print_last_digit - print last digit
 * _abs - return absolute value
 * @r: value input
 * @i: the value to check
 * Return: always 0
 */
int _abs(int r)
{
	if (r < 0)
		return (-r);
	else
		return (r);
}
int print_last_digit(int i)
{
	int b;

	b = _abs(i);
	return (b % 10);
}
