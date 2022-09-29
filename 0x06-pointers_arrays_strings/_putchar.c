#include <unistd.h>
/**
 * _putchar - writes the xter c to the stdout
 * @c: the xter to print
 * Return: 1 on success otherwise -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
