#include "main.h"

/**
 * more_numbers - more
 */

void more_numbers(void)
{
	int x;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x / 10 != 0)
			    _putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
		}	
	_putchar('\n');
	}
}
