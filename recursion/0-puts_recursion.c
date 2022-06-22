#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: var
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
	_puts_recursion(s + 1);
	}
}
