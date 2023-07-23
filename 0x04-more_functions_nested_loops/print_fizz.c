#include "main.h"
/**
 * print_fizz - print fizz
 * Return: 0
 */
void print_fizz(void)
{
	char fizz[] = "Fizz";
	char *ptr = fizz;

	while (*ptr)
		_putchar(*ptr++);
}
