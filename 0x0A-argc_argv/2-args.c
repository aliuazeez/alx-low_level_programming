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
		printf("%s\n", argv[c]);
	else
	{
		while (c < argc)
		{
			printf("%s\n", argv[c]);
			c++;
		}
	}
	return (0);
}
