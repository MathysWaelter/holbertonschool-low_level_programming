#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x = 0;
	va_list sum;

	if(n == 0)
		return (0);

	va_start(sum, n);
	
	for (i = 0; i < n; i++)
	{
		x += va_arg(sum, unsigned int);
	}
	va_end(sum);
	return (x);
}
