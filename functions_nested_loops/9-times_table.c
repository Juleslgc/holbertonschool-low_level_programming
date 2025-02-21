#include <stdio.h>
#include "main.h"
/**
 * times_table - A function that prints the 9 times tables, starting with 0.
 * Return: return void in end.
 */

void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 9 ; b++)
		{
			c = a * b;

			if (b != 0)
			{
				_putchar(',');
				if (c < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
			}
			if (c >= 10)
			{
				_putchar('0' + (c / 10));
			}
			_putchar('0' + (c % 10));
		}
		_putchar('\n');
	}
}
