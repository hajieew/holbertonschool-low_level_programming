#include "main.h"

/**
 * print_line - a function that draws a straight line
 *
 * n - the number of '_'
 */

void print_line(int n)
{
	int s = 0;

	while (s < n)
	{
		if (n > 0)
		{
			_putchar('_');
			s++;
		}
		else
			_putchar('\n');
	}

	_putchar('\n');
}
