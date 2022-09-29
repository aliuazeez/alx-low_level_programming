#include "main.h"
/**
 * check_prime - check if number is prime
 * @d: factor check
 * @f: possible prime number
 * Return: 1 if prime otherwise 0
 */
int check_prime(int d, int f)
{
	if (f < 2 || f % d == 0)
		return (0);
	else if (f > d / 2)
		return (1);
	else
		return (check_prime(d + 1, f));
}
/**
 * is_prime_number - states if number is prime
 * @n: number to check
 * Return: 1 if prime otherwise 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check_prime(2, n));
}
