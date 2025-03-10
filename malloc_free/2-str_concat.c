#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *str_concat - Function that concatenates two strings.
 * @s1: It's a character.
 * @s2: It's a character.
 * Return: return a character in end.
 */

char *str_concat(char *s1, char *s2)
{
    int i, j;
    char *ptr;

    for (i = 0 ; s1[i] != '\0' ; i++);
    for (j = 0 ; s2[j] != '\0' ; j++);
    ptr = malloc((i + j + 1) * sizeof(char));
    if (ptr == NULL)
    {
        return (NULL);
    }
    for (i = 0 ; s1[i] != '\0' ; i++)
    {
        ptr[i] = s1[i];
    }
    for (j = 0 ; s2[j] != '\0' ; j++)
    {
        ptr[i + j] = s2[j];
    }
    ptr[i + j] = '\0';
    return (ptr);

}