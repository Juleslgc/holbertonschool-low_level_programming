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
	unsigned char *p = (char *)main;

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
	for (i = 0 ; i < j ; i++)
	{
		printf("%02x ", p[i]);
	}
	printf("%02x\n", p[i]);
	return (0);
}
