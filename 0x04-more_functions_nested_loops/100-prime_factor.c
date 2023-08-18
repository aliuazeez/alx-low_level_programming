#include <stdio.h>
/**
 * main - main program
 * Return: always 0
 */
int main(void)
{
	long int n = 612852475143;
	int i = 2;
	int j;

	while (n % i != 0 && n / i == 1)
	{
		i++;
		j = i;
	}
	printf("%d \n", j);
	return (0);
}
