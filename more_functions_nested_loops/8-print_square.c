#include "main.h"

/**
 * print_square - print a square
 * @size: var
 */

void print_square(int size)
{
	int a = 0;
	int b = 0;

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
