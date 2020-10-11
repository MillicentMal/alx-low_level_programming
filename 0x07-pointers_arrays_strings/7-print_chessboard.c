#include "holberton.h"
/**
*print_chessboard- prints the chessboard.
*@a: pointer to a 2 dimensional array.
*
*Return:void.
*/
void print_chessboard(char (*a)[8])
{
int i, j;
char *k = (char *)a;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar((char) *((k + i * 8) + j));
}
_putchar('\n');
}
}

