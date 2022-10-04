#include "main.h"

/**
 * alloc_grid - allocates memory
 * for a 2D array and initializes it to 0.
 * @width: width of the grid.
 * @height: height of grid.
 *
 * Return: null on failure and
 * null if width or height 0 or less
 * than 0.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int*));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}

	}
	return (grid);
}
