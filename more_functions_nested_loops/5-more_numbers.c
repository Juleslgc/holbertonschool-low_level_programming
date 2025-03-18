#include <stdio.h>
#include "main.h"
/**
 * more_numbers - Function that prints 10 times the numbers.
 * Return: return void in end.
 */

void more_numbers(void)
{
	int num, c;

	for (c = 0 ; c <= 9 ; c++)
	{
		for (num = 0 ; num <= 14 ; num++)
		{
			if (num > 9)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
