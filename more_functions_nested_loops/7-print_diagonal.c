#include "main.h"

/**
 * print_diagonal - print
 * @n: var
 */

void print_diagonal(int n)
{
	int i;
	int x = n - 1;

	for (i = 0; i < n; i++)
	{
		if (n != 0)
		{
			if (i != x)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
	
