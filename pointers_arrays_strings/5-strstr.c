#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring in a string
 * @haystack: string to search in
 * @needle: substring to find
 *
 * Return: pointer to beginning of located substring,
 * or NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	if (*needle == '\0')
		return (haystack);

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
				break;
		}

		if (needle[b] == '\0')
			return (&haystack[a]);
	}

	return (NULL);
}
