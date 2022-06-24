#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - execute a program
 * mult - multiplie 
 * @argc: int of argument
 * @argv: char of argument
 * Return: 0;
 */
int mult(int n1, int n2);

int main(int argc, char **argv)
{
	int n1, n2, result;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	result = mult(n1, n2);
	printf("%d\n", result);

		return (0);
}

int mult(int n1,int n2)
{
	return (n1*n2);
}
