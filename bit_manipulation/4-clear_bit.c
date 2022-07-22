#include "main.h"

/**
 * clear_bit - clear the value of a bit
 * @n: value
 * @index: placement
 * Return: Value of the bit
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > (sizeof(n) * 8))
		return (-1);

	i = i << index;

	*n = (~i & *n);
	return (1);
}
