#include "main.h"
/**
 * factorial - a function that retuens the factorial of a giveen nu,ber
 * @n: input number
 * Return: factorial otherwise -1 on error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
