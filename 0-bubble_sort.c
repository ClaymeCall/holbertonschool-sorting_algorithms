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
	int tmp, sorted = 0;
	size_t i = 1;

	while (sorted == 0)
	{
		sorted = 1;
		i = 1;
		while (i < size)
		{

			if (array[i] < array[i - 1])
			{
				tmp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = tmp;

				sorted = 0;

				print_array(array, size);
			}
			i++;
		}
	}
}
