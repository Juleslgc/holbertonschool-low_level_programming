#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *create_array - Function that creates an array of char,
 * and initializes it with a specific char.
 * @size: It's a unsigned interger.
 * @c: It's a character.
 * Return: return char in end.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc((size + 1) * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
