#include <stdio.h>
#include "main.h"
/**
 * _sqrt - Function that find the square root.
 * @i: It's a integer.
 * @j: It's a integer.
 * Return: return integer in end.
 */

int _sqrt(int i, int j)
{
	if (j * j == i)
	{
		return (j);
	}
	else if (j * j > i)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(i, j + 1));
	}

}

/**
 * _sqrt_recursion - Function that return the natural square root of a number.
 * @n: It's a integer.
 * Return: return integer in end.
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (_sqrt(n, 1));
	}
}
