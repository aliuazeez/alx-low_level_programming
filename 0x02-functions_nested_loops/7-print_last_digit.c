#include "main.h"

/**
 * print_last_digit - print last digit
 * @i: the value to check
 * Return: always 0
 */
int print_last_digit(int i)
{
	if (i % 10 < 0)
	{
		return (-(i % 10));
	}
	else
		return (i % 10);
}
