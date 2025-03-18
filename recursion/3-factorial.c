#include <stdio.h>
#include "main.h"
/**
 * factorial - Function that returns factorial of a given number.
 * @n: It's a integer.
 * Return: return integer in end.
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
