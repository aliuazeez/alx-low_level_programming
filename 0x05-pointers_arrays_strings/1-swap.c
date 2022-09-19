#include "main.h"

/**
 * swap_int - a function that swaps int
 * @a: input
 * @b: input
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
