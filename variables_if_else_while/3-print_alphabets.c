#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;
	char y;

	for (x = 'a'; x <= 'z'; x++)
	for (y = 'A'; y <= 'Z'; y++)
	putchar(x);
	putchar(y);
	putchar('\n');
	return (0);
}
