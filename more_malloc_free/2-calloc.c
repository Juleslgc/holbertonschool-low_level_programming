#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Function that allocates memory for an array, using malloc.
 * @nmemb: It's a unsigned integer.
 * @size: It's a unsigned integer.
 * Return: return character in end.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < nmemb ; i++)
	{
		ptr[i] = '\0';
	}
	return (ptr);
}
