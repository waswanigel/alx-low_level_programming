#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns pointer to a 2D array of integers
 * @width: x-axis
 * @height: y-axis
 * Return: 2D array, null on failure, null if h/w <=0
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0, **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
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

