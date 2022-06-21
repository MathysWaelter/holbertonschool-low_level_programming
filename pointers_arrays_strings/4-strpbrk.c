#include "main.h"

/**
 * _strpbrk - search string for any bytes
 * @s: var
 * @accept: var
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, x, j;
	int car = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	j = i;
	}
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (x = 0; s[x] != '\0'; x++)
		{
			if (s[j] == accept[i])
			{
				if (x <= j)
				{
					j = x;
					car = 1;
				}
			}
		}
	}
	if (car == 1)
	{
		return (&s[car]);
	}
	else
	{
	return (0);
	}
}

