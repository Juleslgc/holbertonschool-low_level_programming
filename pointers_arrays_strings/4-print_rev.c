#include <stdio.h>
#include "main.h"
/**
 * print_rev - Function that prints a string in reverse.
 * @s: It's a pointer.
 * Return: return void in end.
 */

void print_rev(char *s)
{
	int len = 0;
	int a;

	for (; s[len] != '\0' ; len++)
	{
		a++;
	}
	for (a = len - 1 ; a >= 0 ; a--)
	_putchar(s[a]);
	_putchar('\n');
}
