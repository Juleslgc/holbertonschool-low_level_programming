#include <stdio.h>
#include "main.h"
/**
 * *_memcpy - Function that copies memory area.
 * @dest: It's a pointer.
 * @src: It's a pointer.
 * @n: It's a unsigned integer.
 * Return: return char in end.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
