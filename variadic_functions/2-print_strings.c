#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the fonction
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list name;
	char *x;

	va_start(name, n);

	if (separator == NULL)
		printf("nil");

	for (i = 0; i < n; i++)
	{
		x = va_arg(name, char *);
		printf("%s", x);
		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(name);
}
