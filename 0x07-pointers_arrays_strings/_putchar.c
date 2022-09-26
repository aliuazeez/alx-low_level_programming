#include <unistd.h>
/**
 * _putchar - writes the charactre c to stdout
 * @c: the xter to print
 * Return: anything
 */
int _putchar(char c)
{
	return(write (1, &c, 1));
}
