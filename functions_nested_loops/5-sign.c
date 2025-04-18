#include <stdio.h>
#include "main.h"
/**
 * print_sign - Write a function that prints the sign of a number.
 * @n: It's a number.
 * Return: return 1 if is greater than zero or return 0 if is zero
 * or return -1 if is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
