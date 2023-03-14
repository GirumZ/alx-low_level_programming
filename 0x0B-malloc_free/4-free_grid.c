#include "main.h"
/**
 * free_grid - frees grid memory
 * @grid: the memory to be freed
 * @height: the height of the grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	for (height -= 1; height >= 0; height--)
		free(grid[height]);
	free(grid);
}
