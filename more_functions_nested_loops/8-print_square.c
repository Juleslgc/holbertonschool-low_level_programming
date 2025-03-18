#include <stdio.h>
#include "main.h"
/**
 * print_square - Function that prints a square.
 * @size: It's a number.
 * Return: return void in end.
 */

void print_square(int size)
{
	int s, a;

	if (size > 0)
	{
		for (a = 0 ; a < size ; a++)
		{
			for (s = 0 ; s < size ; s++)
			{
				_putchar('#');
			}
			if (a == size - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
