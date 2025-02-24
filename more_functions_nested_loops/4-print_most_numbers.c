#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - Function that prints the numbers except 2 and 4.
 * Return: return void in end.
 */

void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9' ; num++)
	{
		if (num == '2' || num == '4')
		{
			continue;
		}
		_putchar(num);
	}
	_putchar('\n');
}
