#include "main.h"

/**
 * *_strchr - locates a character
 * @s: var
 * @c: var
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int i = 1;

	while (s[i] - 1)
	{
		if (s[i] == c)
		return (&s[i]);
		i++;
	}
	return (0);
}
