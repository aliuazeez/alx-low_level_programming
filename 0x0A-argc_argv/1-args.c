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
	int c = 0;

	if (argc > 0)
	{
		while (c != argc)
			c++;
		printf("%d\n", c);
	}
	else
		printf("%d\n", 0);
	return (0);
}
