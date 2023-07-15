#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	int l = 'a';
	int L = 'A';

	/*prints the small letter alphatets*/
	while (l <= 'z')
	{
		putchar(l);
		l++;
	}

	/*prints the block letter*/
	while (L <= 'Z')
	{
		putchar(L);
		L++;
	}
	putchar('\n');
	return (0);
}

