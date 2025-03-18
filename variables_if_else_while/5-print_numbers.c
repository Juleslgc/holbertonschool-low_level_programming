#include <stdio.h>
/**
 * main - prints all single digit numbers of bas 10.
 * Return: return 0 in end.
 */

int main(void)
{
	int num;

	for (num = 0 ; num <= 9 ; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
