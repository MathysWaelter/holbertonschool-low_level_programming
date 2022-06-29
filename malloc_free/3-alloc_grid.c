#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **tab; 
	int i = 0;
	int j = 0;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	tab = malloc(width * sizeof(int*));
	for (i= 0; i < width; i++)
		tab[i] = malloc(height * sizeof(int));

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			tab[i][j] = j + i * height;

	return (tab);
	free(tab);
}
