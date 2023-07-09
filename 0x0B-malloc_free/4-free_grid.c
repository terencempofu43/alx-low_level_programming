#include "main"
#include <stdio>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: grid
 * @hieght: hieght of grid
 *
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
