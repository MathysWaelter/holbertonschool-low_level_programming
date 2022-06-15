#include "main.h"

/**
 * puts2 - print
 * @str: var
 */

void puts2(char *str)
{
	int i = 0;

	while (i < str[i])
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
