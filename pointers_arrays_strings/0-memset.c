#include "main.h"

/**
 * *_memset - var
 * @s: pointer
 * @b: constant bytes
 * @n: change bytes
 * return: always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n != 0)
	{ 
		n--;
		s[n] = b;
	}
	return (s);
}
