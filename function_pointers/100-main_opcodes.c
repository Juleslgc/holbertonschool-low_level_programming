#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that  prints the opcodes of its own main function.
 * @argc: It's a count argument.
 * @argv: It's a argument.
 * Return: return int in end.
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	unsigned char *p = (unsigned char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	j = atoi(argv[1]);
	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}
	if (j > 0)
	{
		for (i = 0 ; i < (j - 1) ; i++)
		{
			printf("%02hhx ", p[i]);
		}
		printf("%02hhx\n", p[i]);
	}
	return (0);
}
