#include <stdio.h>
#include "main.h"
/**
 * rev_string - Function that reverses a string.
 * @s: It's a pointer.
 * Return: return void in end.
 */

void rev_string(char *s)
{
	int len = 0;
	int i;
	char j;

	for (; s[len] != '\0' ; len++)
	
	for (i = len - 1 ; i >= len / 2 ; i--)
	{
		j = s[i];
		s[i] = s[len];
		s[len] = j;
	}
}
