#include <stdio.h>
/**
 * main - prints the alphabet in lowercase.
 * Return: return 0 in end.
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
