#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * binary_to_uint - convert binary to int
 * @b: is null
 * return: int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val;
	int x;

	if (b == NULL)
		return (0);

	while (b[x] == '0' || b[x] == '1')
	{
		val = val << 1;
		val = val + b[x]-'0';
		x++;
	}
	return (val);
}

