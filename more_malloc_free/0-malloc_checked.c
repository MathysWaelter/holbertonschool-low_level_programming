#include "main.h"
#include "stdlib.h"

/**
 * *malloc_checked - allocates memory 
 *@b: value
 */

void *malloc_checked(unsigned int b)
{
 	int *x;

	x = malloc(b);
	if (x == NULL)
		return (NULL);
	(void)x;
	return (x);
}
