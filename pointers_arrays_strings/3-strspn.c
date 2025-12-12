#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: string containing accepted bytes
 *
 * Return: number of bytes in initial segment of s consisting only
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b;
	int found;

	while (s[a] != '\0')
	{
		found = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				found = 1;
				break;
			}
		}

		if (!found)
			break;

		a++;
	}

	return (a);
}
