#include <stdio.h>
#include "main.h"
/**
 * *_strcat - Function that concatenates two strings.
 * @dest: It's a pointer.
 * @src: It's a pointer.
 * Return: return char in end.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (j = 0 ; dest[j] != '\0' ; j++);

	for (i = 0 ; src[i] != '\0' ;i++, j++)
	{
		dest[j] = src[i];
	}
	dest[j] = '\0';

	return (dest);
}
