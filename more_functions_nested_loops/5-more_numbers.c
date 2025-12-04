#include "main.h"

/**
 *
 */
void more_numbers(void)
{
	int a;
	int b = 0;
	for (a = 0; a <= 9; a++)
	{
		while (b <= 14)
		{
		if (b >= 10)
			_putchar('1');

		_putchar(b % 10 + '0');
			b++;
		}
	}
}
