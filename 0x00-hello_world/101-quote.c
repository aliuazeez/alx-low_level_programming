#include <unistd.h>
#define QUOTE "and that piece of art is useful\" - Dora Korpar, 2015-10-19"
/**
 * main - main application
 * Return: 1
 */
int main(void)
{
	write(2, QUOTE"\n", sizeof(QUOTE) + 1);
	return (1);
}

