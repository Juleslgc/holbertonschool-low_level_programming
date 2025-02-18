#include <stdio.h>
/**
 * main - prints all single digit numbers but forbidden use function printf.
 *Return: return 0 in end.
 */

int main(void)
{
	int num;

	for (num = '0' ; num <= '9' ; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
