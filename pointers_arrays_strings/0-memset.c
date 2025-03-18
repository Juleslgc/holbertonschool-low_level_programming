#include <stdio.h>
#include "main.h"
/**
 * *_memset - Function that fills memory with a constant byte.
 * @s: It's a pointer.
 * @b: It's a char.
 * @n: It's a integer.
 * Return: return char in end.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}

