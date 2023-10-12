#include "main.h"
/**
 * free_grid - grid free
 * @grid: grid of memories
 * @height: int
 * Return: pointer
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

