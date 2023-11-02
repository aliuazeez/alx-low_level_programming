#include "main.h"
/**
 * is_prime_number - a fuction that check for prime number
 * @n: number to check
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_check(n, 2));
}
/**
 * is_prime_check - check for prime number
 * @n: no to check
 * @div: the divisor to check
 * Return: integer
 */
int is_prime_check(int n, int div)
{
	if (n == div)
		return (1);
	if ((n % div) == 0)
		return (0);
	return (is_prime_check(n, div +1));
}
