#include <stdio.h>
/**
 * main - print all number base 16 in lowercase
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int aa;
	char sd;

	for (aa = 48; aa < 58; aa++)
	{
		putchar(aa);
	}
	for (sd = 'a'; sd <= 'f'; sd++)
	{
		putchar(sd);
	}
	putchar('\n');
	return (0);
}
