#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - A function that prints every minute of the day of Jack Bauer.
 * Return: return void in end.
 */

void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0 ; a <= 23; a++)
	{

		for (b = 0 ; b <= 59 ; b++)
		{
			_putchar('0' + (a / 10));
			_putchar('0' + (a % 10));
			_putchar(':');
			_putchar('0' + (b / 10));
			_putchar('0' + (b % 10));
			_putchar('\n');
		}
	}
}
