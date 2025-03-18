#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _realloc - Function that reallocates a memory block using malloc and free.
 * @ptr: It's a pointer.
 * @old_size: It's a unsigned integer.
 * @new_size: It's a unsigned integer.
 * Return: return void in end.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *rea;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	rea = malloc(new_size);
	return (rea);
	free(ptr);
}
