#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free 2D grid
 * @grid: - 2D grid
 * @height: largeur
 * Return: 0.
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
