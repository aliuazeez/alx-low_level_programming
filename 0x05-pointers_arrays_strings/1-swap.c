#include "main.h"
/**
 * swap_int - swap two int
 * @a: int 1
 * @b: int 2
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int *i;

	*i = *b;
	*a = *b;
	*a = *i;
}
