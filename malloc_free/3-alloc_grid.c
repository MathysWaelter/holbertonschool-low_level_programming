#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - grid
 * @width: largeur
 * @height: longeur
 * Return: tab.
 */

int **alloc_grid(int width, int height)
{
	int **tab;
	int i = 0;
	int j = 0;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	tab = malloc(height * sizeof(int *));
	if (tab == NULL)
	{
		free(tab);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(width * sizeof(int));
		if (tab == NULL)
		{
			free(tab);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			tab[i][j] = 0;

	return (tab);
}
