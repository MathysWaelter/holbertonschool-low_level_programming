#include "main.h"

/**
 * puts_half - print
 * @str: var
 */

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i / 5)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

