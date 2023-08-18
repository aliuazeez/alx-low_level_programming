#include <stdio.h>
/**
 * main - main program
 * Return: always 0
 */
int main(void)
{
	long int n = 612852475143;
	long int i = 2;
	long int j = 0;

	while (n > 1)
	{
		if (n % i == 0)
		{
			j = i;
			while (n / i == 0)
			{
				n /= i;
			}
		}
		i++;
	}
	return (0);
}
