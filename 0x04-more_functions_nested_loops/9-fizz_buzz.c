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
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
			printf("%s ", fb);
		else if ((i % 3) == 0)
			printf("%s ", fizz);
		else if ((i % 5) == 0)
			printf("%s ", buzz);
		else
			printf("%d ", i);
	}
	putchar('\n');
	return (0);
}
