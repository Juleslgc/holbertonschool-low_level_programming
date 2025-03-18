#include <stdio.h>
#include "main.h"
/**
 * puts2 - Function that prints every other charactere of
 * a string with the first character.
 * @str: It's a pointer.
 * Return: return void in end.
 */

void puts2(char *str)
{
	int len = 0;
	int i;

	for (; str[len] != '\0' ; len++)
	{
		i++;
	}
	for (i = 0 ; i < len ; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
