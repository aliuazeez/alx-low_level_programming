#include "main.h"
#include <stddef.h>
/**
 * print_rev - print string in reverse
 * @s: string to print
 * Return: void
 */
void print_rev(char *s)
{
    if (s == NULL)
        return;

    int length = 0;
    while (s[length] != '\0')
    {
        length++;
    }

    int i;

    for (i = length - 1; i >= 0; i--)
    {
        _putchar(s[i]);
    }

    _putchar('\n');
}
