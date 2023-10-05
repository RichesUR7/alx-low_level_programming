#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function name
 * @grid: parameter 1
 * @height: parameter 2
 * Return: no return
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
