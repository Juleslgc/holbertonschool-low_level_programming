#include <stdio.h>
#include "main.h"
/**
 * swap_int - Function that swaps the values of two integers.
 * @a: It's a value.
 * @b: It's a second value.
 * Return: return void in end.
 */

void swap_int(int *a, int *b)
{
	int s = 0;

	s = *b;
	*b = *a;
	*a = s;
}
