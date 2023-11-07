#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenate all argument
 * @ac: argument count
 * @av: argument vector
 * Return: argument as string
 */
char *argstostr(int ac, char **av)
{
	int length;
	int total_length;
	int i;
	int index = 0;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	length = 0;

	for (i = 0; i < ac; i++)
		total_length = total_length + strlen(av[i]) + 1;
	concat = malloc(total_length * sizeof(char));
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		length = strlen(av[i]);
		strcpy(concat + index, av[i]);
		index = index + length;
		concat[index++] = '\n';
	}
	return (concat);
}
