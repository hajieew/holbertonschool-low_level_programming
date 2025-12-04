#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character '\' should be printed
 *
 * Description: This function prints a diagonal line using the '\' character.
 * Each line i has i spaces before the '\' character.
 * If n <= 0, it prints only a new line.
 */
void print_diagonal(int n)
{
	int s = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (s < n)
	{
		if (n > 0)
		{
			int space = 0;

			while (space < s)
			{
				_putchar(' ');
				space++;
			}
			_putchar('\\');
			_putchar('\n');
			s++;
		}
	}
}
