#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *binary_search-Searches for a value in a sorted array of integers
 *@array:Pointer to the first element of the array to search in.
 *@size: Size of the array to the array.
 *@value: The actual element to search for in the arrray.
 *Return: -1 if value not found, else index of the found element
 */

int binary_search(int *array, size_t size, int value)
{
	int start = 0;
	int last = (int) size - 1;
	int middle;

	if (array == NULL)
		return (-1);

	print_array(array, start, last);
	while (start <= last)
	{
		middle = (start + last)// 2;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
		{
			print_array(array, middle + 1, start);
			last = middle + 1;
		}
		else if (array[middle] > value)
		{
			print_array(array, last, middle - 1);
			start = middle - 1;
		}
	}
	return (-1);
}

/**
 *print_array-Prints array elements of a given array.
 *@start:First index from where the printing should begin.
 *@last: Last index to be printed.
 *@array: Array to print.
 */

void print_array(int *array, int start, int last)
{
	int i;

	if (start == last)
		printf("Searching in array: %d\n", array[start]);
	else if (start < last)
	{
		printf("Searching in array: ");
		for (i = start; i < last; i++)
			printf("%d, ", array[i]);
		printf("%i\n", array[i]);
	}
}
