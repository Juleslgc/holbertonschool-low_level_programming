#include <stdio.h>
#include "main.h"
/**
 * *cap_string - Function that capitalizes all words of a string.
 * @a: It's a pointer.
 * Return: return char in end.
 */

char *cap_string(char *a)
{
	char *p = a;
	char *c = " \t\n;,.!?\"(){}\0";
	int i;
	int next = 1;

	for (; *a != '\0' ;)
	{
		if (next)
		{
			if (*a >= 'a' && *a <= 'z')
			{
				*a -= 32;
			}
			next = 0;
		}
		for (i = 0 ; c[i] ; i++)
		{
			if (*a == c[i])
			{
				next = 1;
			}
		}
		a++;
	}
	return (p);
}
