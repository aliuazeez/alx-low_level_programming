#include <unistd.h>
#define QUOTE "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
/**
 * main - main application
 * Return: 1
 */
int main(void)
{
	write(2, QUOTE", sizeof(QUOTE));
	return (1);
}

