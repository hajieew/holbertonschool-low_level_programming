#include "main.h"

/**
 * print_line - a function that draws a straight line
 * @n: number of times the character '_' should be printed
 *
 * Description: This function prints the character '_' n times,
 * followed by a new line. If n is 0 or less, it only prints a new line.
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
