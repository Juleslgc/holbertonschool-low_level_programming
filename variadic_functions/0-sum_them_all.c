#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - Function that returns the sum of all its parameters.
 * @n: It's a value constant.
 * Return: return integer in end.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list(arg);
	int sum = 0;
	unsigned int i;

	va_start(arg, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0 ; i < n ; i++)
	{
		sum += va_arg(arg, unsigned int);
	}
	va_end(arg);

	return (sum);
}
