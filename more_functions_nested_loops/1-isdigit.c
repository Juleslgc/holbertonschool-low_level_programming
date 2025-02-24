#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Function that checks for digit.
 * @c: It's a number.
 * Return: return 1 if c is a digit or return 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
