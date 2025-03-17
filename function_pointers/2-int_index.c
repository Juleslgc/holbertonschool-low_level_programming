#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Function that searches for an integer.
 * @array: It's a array pointer.
 * @size: It's the number of elements in the array.
 * @cmp: It's a pointer to the function.
 * Return: return integer in end.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && *cmp != NULL)
	{
		for (i = 0 ; i < size ; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}