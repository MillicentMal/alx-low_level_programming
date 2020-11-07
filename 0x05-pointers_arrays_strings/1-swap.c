#include "holberton.h"
/**
*swap_int - swaps the values of two integers using their pointers
*@a: pointer of int to be swapped
*@b: pointer of int to be swapped
*/
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}

