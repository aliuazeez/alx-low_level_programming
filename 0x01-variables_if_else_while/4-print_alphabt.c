#include <stdio.h>
/**
 * main - print alphabet in lowercase
 * except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char az = 'a';

	while (az <= 'z')
	{
		if (az != 'e' && az != 'q')
		{
			putchar(az);
		}
		az++;
	}
	putchar('\n');
	return (0);
}
