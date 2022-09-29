#include "main.h"
/**
 * check - checks the input no from n
 * @c: no to check
 * @n: no to be squared
 * Return: natural square root of no base
 */
int check(int n, int c)
{
	if (n * n == c)
		return (n);
	if (n * n > c)
		return (-1);
	return (check(n + 1, c));
}
/**
 * _sqrt_recursion - return natural no square root of
 * number n
 * @n: number to return square root
 * Return: the natural square root of number n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
