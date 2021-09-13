#include <stdio.h>
#include <stdlib.h>
/**
*linear_search - does a linear search on an array of size size
*@size: the number of elements in array
*@value: the value to search for
*Return: index
*/

int linear_search(int *array, size_t size, int value)
{
size_t i = 0;

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == *(array + i))
			return (i);
		i++;
	}
	return (-1);
}
