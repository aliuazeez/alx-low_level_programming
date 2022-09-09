#include <stdio.h>
/**
 * main - print all single numbers
 * of base 10 starting from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int az;

	for (az = 0; az <= 9; az++)
		printf("%d", az);
	printf("\n");
	return (0);
}
