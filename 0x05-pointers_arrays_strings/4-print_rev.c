#include "main.h"
#include <stddef.h>
/**
 * print_rev - print string in reverse
 * @s: string to print
 * Return: void
 */
void print_rev(char *s) {
    if (s == NULL)
        return;

    // Calculate the length of the string
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }

    // Print the string in reverse
    for (int i = length - 1; i >= 0; i--) {
        _putchar(s[i]);
    }

    // Print a new line at the end
    _putchar('\n');
}
}
