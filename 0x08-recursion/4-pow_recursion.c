#include "main.h"
/**
 * _pow_recursion - prints x to the power of y
 * @x: base
 * @y: exponent
 * Return: pow(x, y)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (x != 0 && y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (0);
}
