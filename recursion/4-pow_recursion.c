#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - Function that return a value of x raised to the power of y.
 * @x: It's a integer.
 * @y: It's a integer.
 * Return: return integer in end.
 */

int _pow_recursion(int x, int y)
{

	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
