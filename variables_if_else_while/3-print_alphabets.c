#include <stdio.h>
/**
 * main - prints the alphabet in lowercas and then in uppercase.
 * Return: return 0 in end.
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	for (c = 'A' ; c <= 'Z' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
