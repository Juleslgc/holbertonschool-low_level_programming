#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - Function that concatenates two strings.
 * @s1: It's a character pointer.
 * @s2: It's a character pointer.
 * @n: It's a unsigned integer.
 * Return: return character in end.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0 ; s1[i] != '\0' ; i++)
	;
	for (j = 0 ; s2[j] != '\0' ; j++)
	;
	if (n >= j)
	{
		n = j;
	}
	ptr = malloc((i + n + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0 ; j < n ; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';
	return (ptr);
}
