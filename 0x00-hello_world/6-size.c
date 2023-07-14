#include <stdio.h>
/**
 * main - printing types size
 *
 * Return: always 0
 */
int main(void)
{
	printf("size of a char: %u byte(s)\n", (int)sizeof(char));
	printf("size of an int: %u byte(s)\n", (int)sizeof(int));
	printf("size of a long int: %u byte(s)\n", (int)sizeof(long int));
	printf("size of a long long int: %u byte(s)\n", (int)sizeof(long long int));
	printf("size of a float: %u byte(s)\n", (int)sizeof(float));
	return (0);
}
