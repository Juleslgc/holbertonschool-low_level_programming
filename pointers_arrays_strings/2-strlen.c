#include <stdio.h>
#include "main.h"
/**
 * _strlen - Function that returns the length of a string.
 * @s: It's a char.
 * Return: return 0 in end.
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s != '\0' ; s++)

	a++;

	return (a);
}
