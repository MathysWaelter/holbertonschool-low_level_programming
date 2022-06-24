#include "main.h"

/**
 * _strspn - gets length of a prefix
 * @s: var
 * @accept: var
 * Return: always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int x;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (x = 0; accept[x] != '\0'; x++)
			{
			if (s[i] == accept[x])
			count++;
			}
		}
		else
		return (count);

	}
return (count);
}

