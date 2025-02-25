#include <stdio.h>
/**
 * main - Function for the Fizz-Buzz test
 * Return: return 0 in end.
 */

int main(void)
{
	int num;
	int t = 3;
	int c = 5;

	for (num = 1 ; num <= 100 ; num++)
	{
		if ((num % t) == 0 && (num % c) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((num % t) == 0)
		{
			printf("Fizz");
		}
		else if ((num % c) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}
		if (num == 100)
		{
			continue;
		}
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
