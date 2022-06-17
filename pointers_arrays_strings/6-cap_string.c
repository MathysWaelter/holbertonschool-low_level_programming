#include "main.h"

/**
 * *cap_string - cap
 * @s: var
 * Return: Always 0.
 */

char *cap_string(char *s)
{
	int a = 0, i;
	int cap = 13;
	char x[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < cap)
		{
			if ((a == 0 || s[a - 1] == x[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;

			i++;
		}

		a++;
	}

	return (s);
}
