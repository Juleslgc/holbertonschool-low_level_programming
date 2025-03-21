#include <stdio.h>
#include <stdlib.h>
/**
 * 
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	unsigned char *p = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	j = atoi(argv[1]);
	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0 ; i < j ; i++)
	{
		printf("%02x ", p[i]);
		
	}
	printf("\n");
	return (0);
}