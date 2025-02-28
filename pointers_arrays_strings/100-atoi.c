#include <stdio.h>
#include "main.h"
/**
 * _atoi - Function that convert a string to an integer.
 * @s: It's a pointer.
 * Return: return 0 in end.
 */

int _atoi(char *s)
{
	int i;
	int j;
	int sign = 1;

	for ( i = 0 ; ((s[i] < '0' || s[i] > '9') && s[i] != '\0') ; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
	}
	for (j = 0 ; (s[i] >= '0' && s[i] <= '9') ; i++)
	{
		j = j * 10 + sign * (s[i] - '0');
	}
	return (j);
}
