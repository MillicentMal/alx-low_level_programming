#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
int binary_search(int *array, size_t size, int value){
int start_index = 0;
int end_index = size;
   while (start_index <= end_index){
      int middle = start_index + (end_index- start_index )/2;
      if (array[middle] == element)
         return middle;
      if (array[middle] < element)
         start_index = middle + 1;
      else
         end_index = middle - 1;
   }
   return -1;
}
