#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a: 2-d array
 *
 * Return:void
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
				_putchar(10);
		}
	}
}
