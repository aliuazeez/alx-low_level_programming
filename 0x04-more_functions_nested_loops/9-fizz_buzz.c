#include <stdio.h>
/**
 * main - entry point
 * print fizz for 3, buzs for 5 and fizzbuzz
 * for number divisible by 5 and 3
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i == 100)
			printf("\n");
		else
			printf(" ");
	}
	return (0);
}
