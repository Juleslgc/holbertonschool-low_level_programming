#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * t_char - Function print char in variadic function.
 * @list: It's a argument.
 * Return: return void in end.
 */
void t_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * t_int - Function print integer in variadic function.
 * @list: It's a argument.
 * Return: return void in end.
 */
void t_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * t_float - Function print float in variadic function.
 * @list: It's a argument.
 * Return: return void in end.
 */
void t_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * t_str - Function print string in variadic function.
 * @list: It's a argument.
 * Return: return void in end.
 */
void t_str(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - Variadic function that print anything with separator.
 * @format: It's a list of types of arguments passed to the function.
 * Return: return void in end.
 */
void print_all(const char * const format, ...)
{
	tp_t t[] = {
		{"c", t_char},
		{"i", t_int},
		{"f", t_float},
		{"s", t_str},
		{NULL, NULL}
	};
	va_list args;

	unsigned int i;
	unsigned int j;
	char *separator = "";

	va_start(args, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (t[j].tp != NULL)
		{
			if (*t[j].tp == format[i])
			{
				printf("%s", separator);
				t[j].f(args);
				separator = ", ";
			}
		j++;
		}
	i++;
	}
	printf("\n");
	va_end(args);
}
