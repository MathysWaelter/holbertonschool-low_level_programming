#include "main.h"

/**
 * print_rev - print a string
 * @str: var
 */

void print_rev(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}
