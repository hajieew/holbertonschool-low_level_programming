#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	char s = 'a';

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}

	while (s <= 'f')
	{
		putchar(s);
		s++;
	}

	printf("\n");

	return (0);
}
