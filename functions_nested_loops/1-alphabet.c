#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Write a function that prints
 * the alphabet in lowercase.
 * Return: not return.
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
