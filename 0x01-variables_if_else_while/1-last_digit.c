#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	printf("Last digit of %d is ", n);

	if (l > 5)
		printf("%d and is greater than 5\n", l);
	else if (l == 0)
		printf("%d and is 0\n", l);
	else
		printf("%d and is less than 6 and not 0\n", l);
	return (0);
}
