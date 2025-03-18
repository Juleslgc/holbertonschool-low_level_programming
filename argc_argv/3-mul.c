#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that multiplies two numbers.
 * @argc: It's a interger.
 * @argv: It's a character.
 * Return: return integer in end.
 */

int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
