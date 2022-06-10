#include "main.h"
#include<stdio.h>

/**
 * print_to_98 - Natural number
 * @n: Var
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
	while (n != 98)
		if (n > 98)
			n--;
		else if (n < 98)
			n++;
	_putchar(n);
}

