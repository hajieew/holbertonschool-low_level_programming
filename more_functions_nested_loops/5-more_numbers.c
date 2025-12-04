#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{

		int b = 0;

		while (b <= 14)
		{
		if (b >= 10)
			_putchar('1');

		_putchar(b % 10 + '0');
			b++;
		}

		_putchar('\n');
	}
}
