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
	unsigned int c = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		int found = 0;

		for (j = 0 ; accept[j] != '\0' ; j++)
			{
				if (s[i] == accept[j])
				{
					found = 1;
					break;
				}
			}
		if (found == 0)
		{
			break;
		}
		c++;
	}
	return (c);
}
