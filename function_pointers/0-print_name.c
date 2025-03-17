#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Function that prints a name with a function pointer.
 * @name: It's a pointer that pointer a variable.
 * @f: It's a pointer that pointer a function.
 * Return: return void in end.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *f != NULL)
	{
		f(name);
	}
}
