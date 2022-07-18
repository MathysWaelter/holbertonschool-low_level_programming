#include "main.h"
#include <stdio.h>

/**
 * print_binary - print int to binary 
 * @n: long int
 */

void print_binary(unsigned long int n)
{
	int res = 0;
	int i = 0;
	int x;

	while (n != 0)
	{
	x = n & 1;
	n = n >> 1;
	res = res + x * i;
	++i;
	}
}
	
		
