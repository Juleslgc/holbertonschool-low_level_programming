#include "variadic_functions.h"
/**
 * print_numbers - Variadic function that print numbers with separator.
 * @separator: It's a character to separator number.
 * @n: It's a numbers of integer passed to the function.
 * Return: return void in end.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	
	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(list, int));

		if (i < n - 1 && separator != NULL)
		{
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
