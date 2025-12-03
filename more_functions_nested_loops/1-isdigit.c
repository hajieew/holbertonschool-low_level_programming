#include "main.h"

/**
 * _isdigit - checks if input is number or not
 * @c: the character to check
 *
 * Return: 1 if input is numbers, otherwise 0
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);

	return (0);
}
