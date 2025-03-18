#include <stdio.h>
#include "main.h"
/**
 * _islower - Write a function that checks for lowercase character.
 * @c: It's a character of value ASCII.
 * Return: return 1 if is lowercase and return 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
