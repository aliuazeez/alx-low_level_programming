#include "main.h"

/**
 * _abs - return absolute value
 * @r: value input
 * Return: always 0
 */
int _abs(int r)
{
	if (r < 0)
		return (-r);
	else
		return (r);
}
/**
 * print_last_digit - print last digit
 * @i: value input
 * Return: always 0
 */
int print_last_digit(int i)
{
	i = _abs(i);
	_putchar(i % 10 + '0');
	return (i % 10);
}
