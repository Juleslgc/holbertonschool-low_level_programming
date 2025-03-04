#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - Function that prints a string,
 * followed by a new line.
 * @s: It's a pointer.
 * Return: return void in end.
 */

 void _puts_recursion(char *s)
 {
    int i;

    for (i = 0; s[i] != '\0' ; i++)
    {
         _putchar(s[i]); 
    }
    _putchar('\n');
 }