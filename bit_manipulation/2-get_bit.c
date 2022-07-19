#include "main.h"

/**
 * get_bit - returns the value of a bit 
 * @n: value
 * @index: placement
 * Return: Value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 0)
	{
	return (n >> index) & 1;
	}
	else if (index > 0)
		return(-1);
	else 
		return(0);
	
}
