#include <stdio.h>
#include "main.h"
/**
 * *_strstr - Function that locates a substring.
 * @haystack: It's a pointer.
 * @needle: It's a pointer.
 * Return: return char in end.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0 ; haystack[i] != '\0' ; haystack++)
	{
		for (j = 0; needle[j] != '\0' ; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == 0)
		{
			return (haystack);
		}
	}
	return ('\0');
}
