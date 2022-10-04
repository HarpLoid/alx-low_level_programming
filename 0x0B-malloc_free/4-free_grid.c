#include "main.h"

/**
 * free_grid - frees up allocated memory
 * of a 2D array
 * @grid: array to free up.
 * @height: rows of the array.
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
