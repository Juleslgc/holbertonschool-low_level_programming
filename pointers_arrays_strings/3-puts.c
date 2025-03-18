#include <stdio.h>
#include "main.h"
/**
 * _puts - Function that prints a string.
 * @str: It's a pointer.
 * Return: return void in end.
 */

void _puts(char *str)
{
	for (; *str != '\0' ; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
