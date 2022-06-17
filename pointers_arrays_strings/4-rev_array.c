#include "main.h"

/**
 * reverse_array - rev
 * @a: var
 * @n: var
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}

