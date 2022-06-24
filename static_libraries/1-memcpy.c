#include "main.h"

/**
 * *_memcpy - var
 * @dest: var
 * @src: var
 * @n: var
 * Return: Always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n != 0)
	{
		n--;
		dest[n] = src[n];
	}
	return (dest);
}
