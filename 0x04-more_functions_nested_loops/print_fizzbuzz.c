#include "main.h"
/**
 * print_fizzbuzz - print fizzbuzz
 * Return: 0
 */
void print_fizzbuzz(void)
{
	char fizzbuzz[] = "FizzBuzz";
	char *ptr = fizzbuzz;

	while (*ptr)
		_putchar(*ptr++);
}
