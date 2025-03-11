#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - Function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: It's a character.
 * Return: return char in end.
 */

char *_strdup(char *str)
{
	int i;
	char *ptr;

	for (i = 0 ; str[i] != '\0' ; i++)
	;
	ptr = malloc((i + 1) * (sizeof(char)));
	if (str == NULL && ptr == 0)
	{
		return (NULL);
	}
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
