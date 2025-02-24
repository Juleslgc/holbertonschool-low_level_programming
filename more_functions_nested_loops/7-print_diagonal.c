#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - Function that draws a diagonal.
 * @n: It's the number of times the character.
 * Return: return void in end.
 */

void print_diagonal(int n)
{
	int d, s;

	if (n > 0)
	{
		for (d = 0 ; d < n ; d++)
		{
			for (s = 0 ; s < d ; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
