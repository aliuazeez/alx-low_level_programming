#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	while (i < 10)
	{
		putchar(i); /*should be followed by an increment for i*/
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
