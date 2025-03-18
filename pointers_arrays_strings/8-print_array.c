#include <stdio.h>
#include "main.h"
/**
 * print_array - Function that prints n elements of an array of integers.
 * @a: It's a pointer.
 * @n: It's a integer.
 * Return: return void in end.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

