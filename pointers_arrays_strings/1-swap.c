#include "main.h"

/**
 * swap_int - swap
 * @a: point a
 * @b: point b
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}