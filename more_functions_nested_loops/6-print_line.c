#include <stdio.h>
#include "main.h"
/**
 * print_line - Function that draws a straight line in the terminal
 * @n: It's the number of times the character.
 * Return: return 0 in end.
 */

void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0 ; l < n ; l++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
