#include "main.h"

/**
 * print_last_digit - print last digit
 * @i: the value to check
 * Return: always 0
 */
int print_last_digit(int i)
{
	int b;

	b = _abs(i);
	return (b % 10);
}
