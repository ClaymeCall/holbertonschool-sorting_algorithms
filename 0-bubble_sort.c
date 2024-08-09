#include "sort.h"

/**
 *bubble_sort - Sorts and array of integers using bubble sort method
 *@array: Pointer to an array of int.
 *@size: Size of the array, as size_t.
 *
 *Return: void.
 */
void bubble_sort(int *array, size_t size)
{
	int tmp, swapped = 1;
	size_t i;

	if (array == NULL || size < 2)
		return;

	while (swapped == 1)
	{
		swapped = 0;

		for (i = 0; i < size - 1; i++)
		{

			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;

				swapped = 1;

				print_array(array, size);
			}
		}
	}
}
