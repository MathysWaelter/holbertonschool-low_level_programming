#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - copie a pointer
 * @str: string
 * Return: 0.
 */

char *_strdup(char *str)
{
	char *tab;
	int i;
	int size = 0;


	if (str == NULL)
	{
		return (NULL);
	}
	tab = malloc(size * sizeof(char));

	for (i = 0; str[i] != '\0'; i++)
	{
		tab[i] = str[i];
	}

	size = i;
	return (tab);
}

