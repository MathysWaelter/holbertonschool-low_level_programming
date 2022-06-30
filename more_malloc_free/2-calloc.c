#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory
 * @nmemb: array
 * @size: size of array
 * Return: 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *p;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		p[i] = '\0';

	return (p);
}
