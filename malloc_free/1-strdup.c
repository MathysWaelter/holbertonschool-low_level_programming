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

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	;
	tab = malloc(i * sizeof(char));
	if (tab == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		tab[i] = str[i];
	}


	return (tab);
}

