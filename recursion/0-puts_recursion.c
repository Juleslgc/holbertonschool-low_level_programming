#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - Function that prints a string,
 * followed by a new line.
 * @s: It's a pointer.
 * Return: return void in end.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
	_putchar('\n');
}
