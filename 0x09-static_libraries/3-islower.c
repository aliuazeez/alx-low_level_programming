#include "main.h"
/**
 * _islower - xheck for for lowercase
 * @c: the character to b3 checked
 * Return: 1 if no error, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
