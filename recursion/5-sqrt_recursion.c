#include "main.h"

/**
 * _sqrt_recursion - find square
 * @n: find
 * Return: -1
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (_find_sqrt(1, n));
}

/**
 * _find_sqrt - finds square
 * @i: var
 * @f: var
 *
 * Return: -1
 */
int _find_sqrt(int i, int f)
{
	if (i > f)
		return (-1);
	if (i * i == f)
		return (i);
	return (_find_sqrt(i + 1, f));
}
