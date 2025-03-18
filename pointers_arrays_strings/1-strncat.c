#include <stdio.h>
#include "main.h"
/**
 * *_strncat - Function that concatenates two strings.
 * @dest: It's a pointer.
 * @src: It's a pointer.
 * @n: It's a integer.
 * Return: return char in end.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (j = 0 ; dest[j] != '\0' ; j++)
		;
	for (i = 0 ; i < n && src[i] != '\0' ; i++, j++)
	{
		dest[j] = src[i];
	}
	dest[j] = '\0';

	return (dest);
}
