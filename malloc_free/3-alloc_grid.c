#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: It's a integer.
 * @height: It's a integer.
 * Return: return a integer in end.
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **)malloc(width * (sizeof(int *)));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < width ; i++)
	{
		ptr[i] = (int *)malloc(height * (sizeof(int)));
		if (ptr[i] == NULL)
		{
			for (j = 0 ; j < i ; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}
		for (j = 0 ; j < height ; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
