#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a: double pointer
 * Return: always 0.
 */
void print_chessboard(char (*a)[8])
{
	int i, x;

	for (i = 0; i < 8; i++)
	{
		for (x = 0; x < 8; x++)
		{
			if (x == 7)
			{
			_putchar(a[i][x]);
			_putchar('\n');
			}
			else
				_putchar(a[i][x]);
	}
}
}
