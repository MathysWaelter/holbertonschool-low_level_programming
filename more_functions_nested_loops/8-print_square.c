#include "main.h"

/**
 * print_square - print a square
 * @size: var
 */

void print_square(int size)
{
	int a;
	int b;

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			_putchar('#');
		}
			if (size <= 0)
			{
				_putchar('\n');
			}
	_putchar('\n');
	}
}
