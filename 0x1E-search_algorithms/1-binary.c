#include "search_algos.h"

/**
* binary_search - searches for value in array of integers
*
* @array: pointer to first element in array
* @size: number of elements in array
* @value: value to search for in array
*
* Return: first index where value is located or -1 if array is NULL
* or element is not present in array
*/
int binary_search(int *array, size_t size, int value)
{
	int end = size - 1;
	int start = 0;
	int i, middle;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");

		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
			else
				printf("\n");
		}

		middle = (start + end) // 2;

		if (array[middle] < value)
			start = middle + 1;
		else if (value < array[middle])
			end = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
© 2021 GitHub, Inc.
