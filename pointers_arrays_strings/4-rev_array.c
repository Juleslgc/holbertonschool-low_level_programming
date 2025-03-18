#include <stdio.h>
#include "main.h"
/**
 * reverse_array - Function that reverse the content
 * of an array of integers.
 * @a: It's a pointer.
 * @n: It's a integer.
 * Return: return void in end.
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp = 0;

	for (i = 0 ; i < n / 2 ; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
