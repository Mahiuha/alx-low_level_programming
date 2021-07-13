#include <stdlib.h>
#include "holberton.h"

/**
* free_grid - a function that frees up a 2d grid created by script 3
* @grid: a pointer to a pointer. a 2d array. a grid
* @height: the height
*
* Description: this part should return the all clear from valgrind
* Return: none it is void:
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height <= 0)
		return;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
