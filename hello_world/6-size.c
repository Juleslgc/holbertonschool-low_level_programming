#include <stdio.h>
/**
 * main - Prints the size of various types.
 * Return: return 0 in end.
 */
int main(void)
{
	char typechar;
	int typeint;
	long int typelong;
	long long int typelonglong;
	float typefloat;

	printf("Size of a char: %zu\n byte(s)",sizeof(typechar));
	printf("Size of an int: %zu\n byte(s)",sizeof(typeint));
	printf("Size of a long int: %zu\n byte(s)",sizeof(typelong));
	printf("Size of a long long int: %zu\n byte(s)",sizeof(typelonglong));
	printf("Size of a float: %zu\n byte(s)",sizeof(typefloat));
	return (0);
}
