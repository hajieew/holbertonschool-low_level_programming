#include "main.h"

/**
 * _sqrt_helper - helper function to find square root
 * @n: number
 * @x: candidate root
 *
 * Return: natural square root or -1
 */
int _sqrt_helper(int n, int x)
{
	if (x * x == n)
		return (x);

	if (x * x > n)
		return (-1);

	return (_sqrt_helper(n, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 0));
}
