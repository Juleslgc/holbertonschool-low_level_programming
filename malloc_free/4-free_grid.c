#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Function that free a 2 dimensional
 * grid previously created alloc_grid function.
 * @grid: It's a integer pointer.
 * @height: It's a integer.
 * Return: return void in end.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
