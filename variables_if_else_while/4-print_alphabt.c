#include <stdio.h>
/**
 * main - prints the alphabet in lowercase except e and q.
 * Return: return 0 in end.
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c == 'e' || c == 'q')
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
