#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Program that performs simple operations.
 * @argc: It's a number of argument
 * @argv: It's a array argument
 * Return: Return the sum.
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", f(a, b));
	return (0);
}
