#include <stdio.h>
#include "main.h"
/**
 * *_strchr - Function that locates a character in a string.
 * @s: It's a pointer.
 * @c: It's a char.
 * Return: return char in end.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
