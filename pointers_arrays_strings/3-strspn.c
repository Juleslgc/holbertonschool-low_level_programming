#include <stdio.h>
#include "main.h"
/**
 * _strspn - Function that gets the length of a prefix substring.
 * @s: It's a pointer.
 * @accept: It's a pointer.
 * Return: return unsigned integer in end.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0 ; s[i] != '\0' ; s++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (accept[j] == s[i])
			{
				i++;
			}
		}
	}
	return (i++);
}
