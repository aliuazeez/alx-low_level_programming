#include <stdio.h>
/**
 * main - a program that prints all arguments it receives
 * with one argument per line, ending with a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
