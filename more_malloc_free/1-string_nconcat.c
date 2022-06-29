#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concat
 * @s1: string 1
 * @s2: string 2
 * @n: char
 * Return: 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int x, i;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++)
		x++;

	s3 = malloc(sizeof(char) * (x + 6));
	if (s3 == NULL)
	{
		return (NULL);
	}

	x = 0;

	for (i = 0; s1[i]; i++)
	{
		s3[x++] = s1[i];
	}

	for (i = 0; s2[i] && i < n; i++)
	{
		s3[x++] = s2[i];
	}

	s3[x] = '\0';

	return (s3);
}
