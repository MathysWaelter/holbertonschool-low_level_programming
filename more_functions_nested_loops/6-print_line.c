#include "main.h"

/**
 * print_line - draws straight line
 * @n: var
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n != 0)
		{
			_putchar('_');
		}
	else
	{
		_putchar('\n');
	}
	}
	_putchar('\n');
}

