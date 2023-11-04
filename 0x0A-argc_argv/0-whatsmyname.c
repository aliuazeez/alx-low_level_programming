#include <stdio.h>
#include <stdlib.h>
/**
 * main - starting point
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	while (argc >= 0)
	{
		printf("%s\n", argv[0]);
		break;
	}
	exit(EXIT_SUCCESS);
}
