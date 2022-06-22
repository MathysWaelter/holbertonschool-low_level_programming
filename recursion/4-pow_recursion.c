#include "main.h"

/**
 * _pow_recursion - return the value 
 * @x: var
 * @y: var
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	int i;
	int pow = 1;

	for (i = 1; i <= y; i++)
		pow = pow * x;
	return (pow);
}

