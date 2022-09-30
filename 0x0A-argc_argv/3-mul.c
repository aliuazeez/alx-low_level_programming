#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers
 * followed by a newline
 * @argc: argument count
 * @argv: argument vector
 * Return: multiplication of two arguments, otherwise error
 */
int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
