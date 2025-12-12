#include "main.h"

/**
 * print_chessboard - prints an 8x8 chessboard
 * @a: pointer to 8-element arrays of chars
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int a_i, b;

	for (a_i = 0; a_i < 8; a_i++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[a_i][b]);
		}
		_putchar('\n');
	}
}
