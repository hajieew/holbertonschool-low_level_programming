#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to modify
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int a = 0;

	/* İlk simvol böyük hərf olmalıdırsa, çeviririk */
	if (str[a] >= 'a' && str[a] <= 'z')
		str[a] = str[a] - ('a' - 'A');
	a++;

	while (str[a] != '\0')
	{
		if ((str[a - 1] == ' ' || str[a - 1] == '\t' || str[a - 1] == '\n' ||
		     str[a - 1] == ',' || str[a - 1] == ';' || str[a - 1] == '.' ||
		     str[a - 1] == '!' || str[a - 1] == '?' || str[a - 1] == '"' ||
		     str[a - 1] == '(' || str[a - 1] == ')' || str[a - 1] == '{' ||
		     str[a - 1] == '}') &&
		    (str[a] >= 'a' && str[a] <= 'z'))
		{
			str[a] = str[a] - ('a' - 'A');
		}
		a++;
	}

	return (str);
}
