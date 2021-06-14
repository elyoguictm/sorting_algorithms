#include "sort.h"

/**
 * bubble_sort - bubble sort
 * @array: array
 * @size: size of array
 * Return: sorted array
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
