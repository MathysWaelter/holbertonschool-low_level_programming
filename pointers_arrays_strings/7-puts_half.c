#include "main.h"

/**
 * puts_half - print
 * @str: var
 */

void puts_half(char *str)
{
	int i = 0;
	int b;

	for (b = 0; str[b] != '\0'; b++)
	{
	}
	b = b - 1;
	while (str[i] != '\0')
	{
		if (i > (b / 2))
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

