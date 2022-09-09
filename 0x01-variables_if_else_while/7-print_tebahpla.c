#include <stdio.h>
/**
 * main - print alphabet in lowercase
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char az;

	for (az = 'z'; az >= 'a'; az--)
	{
		putchar(az);
	}
	putchar('\n');
	return (0);
}
