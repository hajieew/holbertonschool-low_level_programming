#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char s  = 'a';

	while (s <= 'z')
	{
		if ((s != 'e') && (s !='q'))
		{
			putchar(s);
			s++;
		}
	}
	putchar('\n');
	return (0);
}
