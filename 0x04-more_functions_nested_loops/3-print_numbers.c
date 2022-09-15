#include "main.h"

/**
 * print_numbers - prints the numbers,
 * from 0 to 9
 * followed by a new line
 * Return: 0
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	putchar('\n');
	return (0);
}
