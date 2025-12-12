#include <stddef.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string containing bytes to match
 *
 * Return: pointer to first occurrence in s of any byte from accept, or NULL if none found
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				return (&s[a]);
			}
		}
	}

	return (NULL);
}
