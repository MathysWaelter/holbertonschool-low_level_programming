#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 48;
	char b;

		while (a != 58)
		{
		putchar(a);
		a++;
		}
		for (b = 'a'; b <= 'f'; b++)
			putchar(b);
	putchar('\n');
	return (0);

}
