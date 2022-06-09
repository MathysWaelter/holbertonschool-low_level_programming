#include "main.h"

/**
  * print_alphabet_x10 - Print A-Z
  *
  * Return: Always 0 (Success)
  */

void print_alphabet_x10(void)
{
	int x;
	int i;

	for (i = O; i <= 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
		_putchar('\n');
	}
}
