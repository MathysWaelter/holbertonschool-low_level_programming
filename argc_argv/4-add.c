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
	int num;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (num = 0; argv[i][num]; num++)
		{
			if (argv[i][num] < '0' || argv[i][num] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
