#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees alloc_grid
 * @grid: grid to be freed
 * @height: grid height
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
