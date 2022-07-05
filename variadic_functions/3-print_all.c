#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: type
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *string;
	char *empty = "";

	va_list all;


	va_start(all, format);

	if (format)
	{
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", empty, va_arg(all, int));
				break;
			case 'i':
				printf("%s%d", empty, va_arg(all, int));
				break;
			case 'f':
				printf("%s%f", empty, va_arg(all, double));
				break;
			case 's':
			string = va_arg(all, char *);
			printf("%s%s", empty, string);
				break;

		default:
		i++;
		continue;
				}


			empty = ", ";
			i++;
			}
			}
		printf("\n");
		va_end(all);
}
