#include <stdio.h>
#include "main.h"
/**
 * _isupper - Function that checks for uppercase character.
 * @c: It's a caracter.
 * Return: return 1 if c is uppercase or return 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
