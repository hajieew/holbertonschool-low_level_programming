#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char s  = 'z';

	while (s >= 'a')
	{
		putchar(s);
		s--;
	}

	putchar('\n');
	return (0);
}
