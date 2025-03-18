#include <stdio.h>
#include "main.h"
/**
 * *_strncpy - Function that copies the string.
 * @src: It's a pointer.
 * @dest: It's a pointer.
 * @n: It's a integer.
 * Return: return dest in end.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n ;)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
