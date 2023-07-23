#include <stdio.h>
int main(void)
{
	int i;
	for (i = 0; i <= 100; i++)
	{
		if (i >= 10)
		{
			if (((i % 3) && (1 % 5)) == 0)
			{
				putchar('F');
				putchar('B');
				putchar(' ');
			}
			else if ((i % 3) == 0)
			{
				putchar('F');
				putchar(' ');
			}
			else if ((i % 5) == 0)
			{
				putchar('B');
				putchar(' ');
			}
			else
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
			}
		}
		else
		{
			if ((i % 3) == 0)
			{
				putchar('F');
				putchar(' ');
			}
			else if ((i % 5) == 0)
			{
				putchar('B');
				putchar(' ');
			}
			else
			{
				putchar(i);
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
