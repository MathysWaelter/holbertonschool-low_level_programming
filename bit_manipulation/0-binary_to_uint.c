#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * binary_to_uint - convert binary to int
 * @b: is null
 * Return: int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int x = 0;

	if (b == NULL)
		return (0);

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		val = val << 1;
		if (b[x] == '1')
			val = val + 1;
	}
	return (val);
}
