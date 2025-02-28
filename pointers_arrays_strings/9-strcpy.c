#include <stdio.h>
#include "main.h"
/**
 * _strcpy - Function that copies the string pointed to
 * by src to the buffer pointed to by dest.
 * @src: It's a pointer.
 * @dest: It's a pointer.
 * Return: return dest in end.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	
	return (dest);
}
