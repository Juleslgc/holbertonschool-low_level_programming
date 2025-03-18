#include <stdio.h>
/**
 * main - Program that prints all arguments it receives.
 * @argc: It's a integer.
 * @argv: It's a character.
 * Return: return integer in end.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}
