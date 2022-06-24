#include "main.h"
#include <stdio.h>

/**
 * main - execute a program
 * @argc: int of argument
 * @argv: char of argument
 * Return: 0.
 */

int main(int argc, char **argv)
{
	int i;

	(void)argc;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}

	return (0);
}
