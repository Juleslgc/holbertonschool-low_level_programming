#include <stdio.h>
#include "main.h"
/**
 * *_strpbrk - Function that searches a string for any of a set of bytes.
 * @s: It's a pointer.
 * @accept: It's a pointer.
 * Return: return char in end.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
