#include "main.h"
#include <stdlib.h>

void *setZero(void *p ,unsigned int x)
{
	char *c;
	unsigned int i;

	c = p;

	for(i = 0 ; i < x; i++)
	{
		c[i] = '\0';
	}
	return (c);
}


/**
 * *_calloc - allocates memory
 * @nmemb: array
 * @size: size of array
 * Return: 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	setZero(p, nmemb);

	return (p);
}
