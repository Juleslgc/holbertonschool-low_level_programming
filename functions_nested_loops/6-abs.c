#include <stdio.h>
#include "main.h"
/**
 * _abs - Write a function that computes the absolute value of an integer.
 * @n: It's a value integer.
 * Return: return -n if n is negative and return n if n is positive.
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	_putchar('\n');
}
