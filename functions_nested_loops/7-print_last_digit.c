#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - A function that prints the last digit of a number
 * @n: It's a value
 * Return: return a in end.
 */
int print_last_digit(int n)
{
	int a = n % 10;

	if (a < 0)
	{
		a = a * (-1);
	}
	_putchar('0' + a);
	return (a);
}
