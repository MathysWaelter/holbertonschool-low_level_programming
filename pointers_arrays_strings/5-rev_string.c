#include "main.h"

/**
 * rev_string - reverse string
 * @s: var
 */

void rev_string(char *s)
{
	char tmp;
	int i, d;
	int f;
	int size = 0;

	for (i = 0; s[i] != 0; i++)
	{
		size++;
	}

	f = size - 1;

	for (d = 0; d < (size / 2); d++)
	{
		tmp = s[d];
		s[d] = s[f];
		s[f] = tmp;
		f--;
	}
}

