#include "main.h"

void pf(void)
{
    _putchar('F');
    _putchar('i');
    _putchar('z');
    _putchar('z');
}

void pb(void)
{
    _putchar('B');
    _putchar('u');
    _putchar('z');
    _putchar('z');
}

int main(void)
{
    int i;

    for (i = 0; i <= 100; i++)
    {
	    if (i < 9)
	    {
		    if ((i % 3) == 0)
			    pf();
		    else if ((i % 5) == 0)
			    pb();
		    else if (((i % 3) && (i % 5))== 0)
		    {
			    pf();
			    pb();
		    }
		    else
			    _putchar(i + '0')
			    _putchar((' ')
	    }
	    else
	    {
		    if ((i % 3) == 0)
		    {
		    pf();
		    else if ((i % 5) == 0)
			    pb();
		    else if (((i % 3) && (i % 5))== 0)
		    {
			    pf();
			    pb();
		    }

