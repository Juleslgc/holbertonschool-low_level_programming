#include <stdio.h>
#include "main.h"
/**
 * print_numbers - Function that prints the numbers.
 * Return: return void in end.
 */

void print_numbers(void)
{
	int num;

	for (num = '0' ; num <= '9' ; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
