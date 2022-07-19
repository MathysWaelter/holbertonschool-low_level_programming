#include "main.h"

/**
 * get_bit - returns the value of a bit
 * @n: value
 * @index: placement
 * Return: Value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
