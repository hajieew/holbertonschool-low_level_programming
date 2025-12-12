#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string
 */
void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	char c;

	while (s[a] != '\0')
	{
		a++;
	}

	a--;

	while (b < a)
	{
		c = s[b];
		s[b] = s[a];
		s[a] = c;

		b++;
		a--;
	}
}
