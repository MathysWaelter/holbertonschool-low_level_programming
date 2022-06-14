#include "main.h"

/**
 * print_diagonal - print
 * @n: var
 */

void print_diagonal(int n)
{
	int a = 0;
	int b = 0;

	if (n > 0)
		while (a < n)
		{
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
		_putchar('\\');
		_putchar('\n');
		a++;
		b = 0;
		}
	else
		_putchar('\n');
}	
