#include "main.h"
#include <stdio.h>
/**
 * *leet - Function that encodes a string into 1337.
 * @s: It's a pointer.
 * Return: return char in end.
 */

char *leet(char *s)
{
	char *p = s;
	char *letter = "aAeEoOtTlL";
	char *code = "4433007711";
	int i;

	for (; *s != '\0'; s++)
	{
		for (i = 0 ; letter[i] ; i++)
		{
			if (*s == letter[i])
			{
				*s = code[i];
			}
		}
	}
	return (p);
}
