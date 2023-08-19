#include <stdio.h>
#include "main.h"
/**
 * print_array - prints array
 * @a: a pointer
 * @n: the size of array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;
	int j = n;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}
	i = n;
	while (i != 0)
	{
		n -= i;
		i--;
		printf("%d", a[n]);
		n = j;
		if (i != 0)
			printf(", ");
		else
			putchar('\n');
	}
}
