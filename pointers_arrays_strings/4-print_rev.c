#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to the string
 */
void print_rev(char *s)
{
	int a = 0;
	int i;

	while (s[a] != '\0')
	{
		a++;
	}

	for (i = a - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
