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
		exit(98);
	(void)x;
	return (x);
}
