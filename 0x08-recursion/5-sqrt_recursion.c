#include "main.h"
/**
 * _sqrt_recursion - function that returns square root
 * @n: number to check
 * Return: sqrt toot or -1 if n does not have a natural number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return _sqrt_checker(n, 1, n);
}
/**
 * _sqrt_checker - checker
 * @n: number to check
 * @bgn: begining of count
 * @end: end of count
 * Return: an int
 */
int _sqrt_checker(int n, int bgn, int end)
{
	int mid = (bgn + end) / 2;

	if (bgn > end)
		return (mid);
	if (mid * mid) > n)
		return (_sqrt_checker(n, bgn, mid - 1));
	return (_sqrt_checker(n, mid + 1, end));
}
