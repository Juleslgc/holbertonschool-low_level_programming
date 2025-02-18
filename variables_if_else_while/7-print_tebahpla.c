#include <stdio.h>
/**
 * main - prints the alphabet in lowercase in reverce.
 * Return: return 0 in end.
 */
int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a' ; --c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
