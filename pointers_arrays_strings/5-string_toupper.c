#include <stdio.h>
#include "main.h"
/**
 * *string_toupper - Function that changes all lowercase
 * letters of a string to uppercase.
 * @a: It's a pointer.
 * Return: return char in end.
 */

char *string_toupper(char *a)
{
	for (; *a != '\0' ; a++)
	{
		if (*a >= 'a' && *a <= 'z')
		{
			*a -= 32;
		}
	}

	return (a);
}

