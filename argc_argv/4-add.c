#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - execute program
 * @argc: int of argument
 * @argv: char of argument
 * Return: 0
 */

int main(int argc, char **argv)
{
	int sum;
	int i;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
