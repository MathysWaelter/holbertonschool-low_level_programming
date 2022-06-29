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
	int i, j;
	int x;
	int z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	
	s3 = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (s3 = NULL)
		return (NULL);

	for (c = 0; x = 0; x < (i + j + 1); x++)
		{
			if (x < i)
				s3[x] = s1[x];
			else 
				s3[x] = s2[z++];
		}
	return (s3);
}


