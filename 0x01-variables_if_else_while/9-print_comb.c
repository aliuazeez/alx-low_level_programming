#include <stdio.h>
/**
 * main - print all combination of single-digit number
 * seperated by , followed by space
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lt;
	
	for (lt = 48; lt <= 58; lt++)
	{
		putchar(lt);
		if (lt != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
