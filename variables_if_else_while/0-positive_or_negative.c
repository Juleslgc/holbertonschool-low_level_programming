#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - assign a random number to the variable n
 * and whether it is positive or negative.
 * RETURN : returns 0 in end.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand();

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);

	return (0);
}
