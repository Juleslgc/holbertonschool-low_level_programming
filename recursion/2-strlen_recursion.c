#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - Function that returns the length of a string.
 * @s: It's a pointer.
 * Return: return integer in end.
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	s++;
	i++;
	return (i + _strlen_recursion(s));
}
