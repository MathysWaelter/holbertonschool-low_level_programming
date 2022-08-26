#include "search_algos.h"

/**
 * linear_search - search algo linear
 * @array: array
 * @size: size of array
 * @value: node
 * Return: value in a array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (value);
		}
	}
return (0);
}
