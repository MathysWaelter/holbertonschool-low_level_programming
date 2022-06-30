#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: min value(included)
 * @max: max value(included)
 * Return: Always 0.
 */

int *array_range(int min, int max)
{
	int *p;
	int i, b;

	if (min > max)
		return (NULL);

	if (max == min)
		max++;

	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (i = min, b = 0; i < max; i++, b++)
		p[b] = i;

	return (p);
}

