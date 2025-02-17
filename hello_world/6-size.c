#include <stdio.h>
/**
 * main - Prints the size of various types.
 * Return: return 0 in end.
 */
int main(void)
{
	
	printf("Size of a char: %zu\n byte(s)",sizeof(char));
	printf("Size of an int: %zu\n byte(s)",sizeof(int));
	printf("Size of a long int: %zu\n byte(s)",sizeof(long int));
	printf("Size of a long long int: %zu\n byte(s)",sizeof(long long int));
	printf("Size of a float: %zu\n byte(s)",sizeof(float));
	return (0);
}
