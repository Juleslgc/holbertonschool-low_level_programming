#include <stdio.h>
#include "main.h"
/**
 * _prime_number - Function that find if number is prime.
 * @i: It's a integer.
 * @j: It's a integer.
 * Return: return integer in end.
 */

int _prime_number(int i, int j)
{
	if (i < 2 || i % j == 0)
	{
		return (0);
	}
	else if (i / 2 < j)
	{
		return (1);
	}
	else
	{
		return (_prime_number(i, j + 1));
	}
}

/**
 * is_prime_number - Function that returns 1 if the input integer is
 * a prime number, otherwise return 0.
 * @n: It's a integer.
 * Return: return integer in end.
 */

int is_prime_number(int n)
{
	return (_prime_number(n, 2));
}
