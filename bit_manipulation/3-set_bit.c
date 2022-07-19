
#include "main.h"

/**
 * set_bit - returns the value of a bit
 * @n: value
 * @index: placement
 * Return: Value of the bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	*n |= 1 << index;
	return (1);
}
