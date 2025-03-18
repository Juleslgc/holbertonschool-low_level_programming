#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Write a function that checks for alphabetic character.
 * @c: It's character in ASCII.
 * Return: return 1 if is a alphabetic character and return 0 otherwise.
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
