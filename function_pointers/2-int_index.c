#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - return the index of the first element 
 * @array: array
 * @size: size of array
 * @cmp: pointer to function
 * Return: 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	} 
	return (-1);
}
