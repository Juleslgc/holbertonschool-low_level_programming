#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - Function that concatenates all the arguments of your program.
 * @ac: It's a integer.
 * @av: It's a character.
 * Return: return character in end.
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	char *a;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < ac ; i++)
	{
		for(j = 0 ; av[i][j] != '\0' ; j++)
		;
		len += j;
		printf("%d\n", len);
		a = malloc(len * sizeof(char));
		if (a == NULL)
		{
			free(a);
			return (NULL);
		}
		printf("%s\n", av[i]);
	}
	return (a);
}