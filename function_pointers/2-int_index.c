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
	int j = 0;
	int y;

	if (size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0,y = 0; i < size; i++)
	{
		y = cmp(array[i]);
		if (y == 1)
		{
			j++;
		}
	}
	if (j > 0)
	{
	return (j);
	} 
	return (-1);
}
