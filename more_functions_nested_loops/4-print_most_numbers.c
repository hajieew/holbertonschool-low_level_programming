#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
	int a = 0;

	if ((a >= 0) && (a <= 9) && (a != 2) && (a != 4))
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
