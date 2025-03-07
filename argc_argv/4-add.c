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
	int i;
	int sum = 0;
	
	for (i = 1 ; i < argc ; i++)
	{
		int num = atoi(argv[i]);
		
		if (num == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
