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

	if (*argv[0] == '\0')
		printf("0");
	else
	{
		while (c < argc)
			c++;
		printf("%d\n", c - 1);
	}
	return (0);
}
