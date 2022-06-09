#include "main.h"

/**
  * print_alphabet_x10 - Print A-Z
  *
  * Return: Always 0 (Success)
  */

void print_alphabet_x10(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		for (x <= 10)
		_putchar(x);
	}
		_putchar('\n');
}
