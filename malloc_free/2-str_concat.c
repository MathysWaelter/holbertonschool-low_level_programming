#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - concatenates
 * @s1: first string
 * @s2: second string
 * Return: 0.
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int lenS1 = strlen(s1);
	int lenS2 = strlen(s2);

	if (s1 == NULL)
	{
		return (NULL);
	}

	if (s2 == NULL)
	{
		return (NULL);
	}

	s3 = malloc(lenS1 + lenS2 + 1);
	memcpy(s3, s1, lenS1);
	memcpy(s3 + lenS1, s2, lenS2);

	if (s3 == NULL)
	{
		return (NULL);
	}

	s3[lenS1 + lenS2] = '\0';

	return (s3);
}
