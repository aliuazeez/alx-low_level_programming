#include "main.h"
/**
 * _abs - print absolute number
 * @ab: integer input
 * Return:  ab
 */
int _abs(int ab)
{
	if (ab < 0)
		return (ab * -1);
	else if (ab > 0)
		return (ab);
	else
		return (0);
}
