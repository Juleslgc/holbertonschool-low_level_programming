#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - Function that prints a string in reverse.
 * @s: It's a pointer.
 * Return: return void in end.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_print_rev_recursion(s + 4);
	}
	
}