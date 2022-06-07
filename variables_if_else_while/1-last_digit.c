#include <stdlib.h>
#include<stdio.h>
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
	if (n > 5)
		printf("Last digit of $n is %d and is greater than 5\n", n % 10);
	else if (n == 0)
		printf("Last digit of $n is %d and is 0\n", n % 10);
	else
		printf("Last digit of $n is %d and is less than 6 and not 0\n", n % 10);
	return (0);
}
