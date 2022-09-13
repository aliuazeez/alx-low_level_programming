#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints _putchar
 * followed by a new line
 * Return: always 0
 */
int main(void)
{
	char *ch = "_putchar";

	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
