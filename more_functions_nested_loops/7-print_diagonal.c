#include "main.h"

/**
 * print_line - a function that draws a diagonal
 * @n: number of times the character '\' should be printed
 *
 * Description: This function prints the character '\' n times,
 * followed by a new line. If n is 0 or less, it only prints a new diagonal.
 */

void print_diagonal(int n)
{
        int s = 0;

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
                else
              	{
		        _putchar('\n');
			break;
		}
        }

        _putchar('\n');
}
