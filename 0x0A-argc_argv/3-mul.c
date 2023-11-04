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
	if (argc == 3)
	{
		int i = atoi(argv[1]);
		int j = atoi(argv[2]);

		printf("%d\n", i * j);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
