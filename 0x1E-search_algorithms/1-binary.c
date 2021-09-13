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

#include <stdio.h>
int iterativeBinarySearch(int array[], int start_index, int end_index, int value){
   while (start_index <= end_index){
      int middle = start_index + (end_index- start_index )/2;
      if (array[middle] == value)
         return middle;
      if (array[middle] < value)
         start_index = middle + 1;
      else
         end_index = middle - 1;
   }
   return -1;
}
