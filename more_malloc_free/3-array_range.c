#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - Function that creates an array of integers.
 * @min: It's a integer.
 * @max: It's a integer.
 * Return: return integer in end.
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; min <= max ; i++, min++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
