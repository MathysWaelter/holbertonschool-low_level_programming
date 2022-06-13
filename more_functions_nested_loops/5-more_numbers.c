#include "main.h"

/**
 * more_numbers - more
 */

void more_numbers(void)
{
	int x;

	for (x = 1; x <= 14; x++)
	{
		if (x / 10 != 0)
		{
			_putchar(x / 10 + '0');
		}
		_putchar(x % 10 + '0');
	}
	_putchar('\n');
}
