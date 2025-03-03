#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - Function that prints the chessboard.
 * @a: It's a pointer
 * Return: return void in end.
 */

 void print_chessboard(char (*a)[8])
 {
    int l;
    int c;

    for (l = 0 ; l < 8 ; l++)
    {
        for (c = 0 ; c < 8 ; c++)
        {
            _putchar(a[l][c]);
        }
        _putchar('\n');
    }
 }