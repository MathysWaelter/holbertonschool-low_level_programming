#include "main.h"

/**
 * more_numbers - more
 */

void more_numbers(void)
{
	int x;

	for (x = 1; x <= 10; x++)
	{
		if (x / 10 != 14)
		{
			_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
		}
	_putchar('\n');
	}
}
