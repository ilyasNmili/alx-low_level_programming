#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - check code
 * Return: void
 * @grid : double pointer int
 * @height: height
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
	{
		if (grid[i])
			free(grid[i]);
		i++;
	}
	free(grid);
}
