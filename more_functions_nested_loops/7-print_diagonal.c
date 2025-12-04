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
                        _putchar('\\');
                        s++;
                }
                else
                        _putchar('\n');
        }

        _putchar('\n');
}
