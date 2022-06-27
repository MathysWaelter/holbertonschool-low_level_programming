#include "main.h"
#include <stdlib.h>

/**
 * *create_array - create an array of char
 * @size: var
 * @c: var
 * Return: 0.
 */

char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i;

	tab = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (tab == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		tab[i] = c;
		i++;
	}
	return (tab);
}
