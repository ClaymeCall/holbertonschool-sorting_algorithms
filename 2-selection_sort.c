#include "sort.h"
#include <stdio.h>

/**
 * selection_sort - Sorts an array of integers in ascending order.
 * @array: Pointer to the array of integers.
 * @size: The size of the array.
 *
 * Description: This function implements the selection sort algorithm.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;
	int temp;

	if (size < 2 || array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}

		if (min_index != i)
		{
			temp = array[i];
			array[i] = array[min_index];
			array[min_index] = temp;
			print_array(array, size);
		}
	}
}
