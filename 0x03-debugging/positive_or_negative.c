#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * positive_or_negative - test for +ve or -ve
 * @i: int to test
 * Return: always 0
 */
/* betty style doc for function main goes there */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else if (i > 0)
		printf("%d is positive\n", i);
	else
		printf("%d is zero\n", i);
}
