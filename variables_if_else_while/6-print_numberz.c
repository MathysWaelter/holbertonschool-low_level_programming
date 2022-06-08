#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print(long n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n / 10)
		print(n / 10);
	putchar(n % 10 + '0');
}

int main(void)
{
	long int n = 9;

	print(n);
	return (0);
}
