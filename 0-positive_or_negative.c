#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("$n is positive")
	else if (n == 0)
	printf("$n is zero")
	else if (n < 0)
	printf("$n is negative")
	return (0);
}
