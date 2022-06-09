#include "main.h"
/**
 * print_sign - Print sign nuber
 * @n: var
 *
 * Return: Always 0.
 */

int print_sign(int n)
{
	int a = 0;


	if (n > 0)
	{
		_putchar('+');
		a = 1;
	}

	else if (n == 0)
	{
		_putchar('0');
		a = 0;
	}

	else
	{
		_putchar('-');
		a = -1;
	}
	return (a);
}
