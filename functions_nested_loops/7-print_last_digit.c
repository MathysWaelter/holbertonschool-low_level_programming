#include "main.h"

/**
 * print_last_digit - absolute value
 * @x: dzdz
 * Return: Always 0.
 */

int print_last_digit(int x)
{
	int n;

	n = (x % 10);
	_putchar(n + '0');
	return (n);
}
