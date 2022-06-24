#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: var
 * @needle: var
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int x = 0;

	while (needle[x] != '\0')
		x++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
			break;
		}
		if (i != x)
			haystack++;
		else
		return (haystack);
	}
	return (0);
}
