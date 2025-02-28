#include <stdio.h>
#include "main.h"
/**
 * puts_half - Function that prints half of a string.
 * @str: It's a pointer.
 * Return: return void in end.
 */

void puts_half(char *str)
{
	int len = 0;
	int i;

	for (; str[len] != '\0' ; len++)
	{
		i++;
	}
	for (i = len / 2 ; i < len ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
