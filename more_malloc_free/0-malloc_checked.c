#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Function that allocates memory using malloc.
 * @b: It's a unsigned integer.
 * Return: return void in end.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b * sizeof(unsigned int));
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
