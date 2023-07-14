#include <stdio.h>
/**
 * main - printing types size
 *
 * Return: always 0
 */
int main(void)
{
	char a;
	int i;
	long int j;
	long long int l;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(a));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(j));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(l));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));

	return (0);
}
