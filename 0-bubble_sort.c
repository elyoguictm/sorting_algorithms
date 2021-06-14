#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 *  using the Bubble sort algorithm.
 *
 * @array: given array to be sorted
 * @size: array's size
 */

void bubble_sort(int *array, size_t size)
{
	size_t z, x;
	int tmp;

	for (x = 0; x < size; x++)
	{
		for (z = 0; z < size - 1; z++)
		{
			if (array[z] > array[z + 1])
			{
				tmp = array[z];
				array[z] = array[z + 1];
				array[z + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
