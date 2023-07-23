#include "main.h"
/**
 * print_buzz - print buzz
 * Return: 0
 */
void print_buzz(void)
{
	char buzz[] = "Buzz";
	char *ptr = buzz;

	while (*ptr)
		_putchar(*ptr++);
}
