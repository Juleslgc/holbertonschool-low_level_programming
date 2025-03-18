#include <stdio.h>
/**
 * main - Program that prints the number of arguments passed into it.
 * @argc: It's a integer.
 * @argv: It's a character.
 * Return: return integer in end.
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
