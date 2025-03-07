#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that adds positive numbers.
 * @argc: It's a integer.
 * @argv: It's a character.
 * Return: return integer in end.
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; argv[i][j] != '\0' ; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
