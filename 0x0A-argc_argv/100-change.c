#include <stdio.h>
#include <stdlib.h>
/**
 * main - starting point
 * @argc: nunber of argument passed
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int change;
	int coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	if (change < 0)
	{
		printf("0\n");
		return (0);
	}

	while (change > 0)
	{
		if (change >= 25)
			change = change - 25;
		else if (change >= 10)
			change = change - 10;
		else if (change >= 5)
			change -= 5;
		else if (change >= 2)
			change -= 2;
		else
			change -= 1;
		coin++;
	}
	printf("%d\n", coin);
	return (0);
}
