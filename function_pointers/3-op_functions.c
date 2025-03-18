#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Function that addition two integers
 * @a: It's a integer
 * @b: It's a integer
 * Return: return sum in end
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function that subtraction two integers
 * @a: It's a integer
 * @b: It's a integer
 * Return: return difference in end
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function that multiplication two integers
 * @a: It's a integer
 * @b: It's a integer
 * Return: return product in end
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function that division two integers
 * @a: It's a integer
 * @b: It's a integer
 * Return: return result of the division in end
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a / b);
	}
}

/**
 * op_mod - Function that modulo two integers
 * @a: It's a integer
 * @b: It's a integer
 * Return: return the remainder of the division in end
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a % b);
	}
}
