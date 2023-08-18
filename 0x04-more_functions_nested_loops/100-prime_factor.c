#include <stdio.h>
/**
 * main - main program
 * Return: always 0
 */
int main(void)
{
	long int n = 612852475143;
	int i = 2;

	while (n % i != 0 && n / i == 1)
	{
		i++;
	}
	printf("%d \n", i);
	return (0);
}
