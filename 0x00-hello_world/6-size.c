#include <stdio.h>
/**
 * main - printing types size
 *
 * Return' always 0
 */
int main(void)
{
	printf("size of char: %u byte(s)\n", (unsigned int)sizeof(char));

	printf("size of int: %u byte(s)\n", (unsigned int)sizeof(int));

	printf("size of long int: %u byte(s)\n", (unsigned int)sizeof(long int));

	printf("size of long long int: %u byte(s)\n", (unsigned int)sizeof(long long int));

	printf("size of float: %u byte(s)\n", (unsigned int)sizeof(float));
	return (0);
}
