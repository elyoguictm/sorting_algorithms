#include "sort.h"

/**
 * quick_sort - sorts an array with the quick sort method
 * @array: Array to sort
 * @size: Size of the array
 * ----------------------------------
 */
void quick_sort(int *array, size_t size)
{
	my_quick_sort(array, 0, size - 1, size);
}


/**
 * my_quick_sort - sorts an array but with recurtion
 * @array: Array to sort
 * @start: Start of the array
 * @end: End of the array
 * @size: size of the array to print
 * ----------------------------------
 */
void my_quick_sort(int *array, int start, int end, size_t size)
{
	int new_end;

	if (start < end)
	{
		new_end = my_partition(array, start, end, size);
		my_quick_sort(array, start, new_end - 1, size);
		my_quick_sort(array, new_end + 1, end, size);
	}

}

/**
 * my_partition - computes a partition of the sort method
 * @array: Array to sort
 * @start: Start of the partition
 * @end: End of the partition
 * @size: size of the array to print
 * ----------------------------------
 * Return: the last index
 */
int my_partition(int *array, int start, int end, size_t size)
{
	int pivot = array[end], tmp;
	int down_arrow = start, up_arrow = start;

	while (down_arrow <= end)
	{
		/* If meets the condition */
		if (array[down_arrow] < pivot)
		{
			tmp = array[down_arrow];
			array[down_arrow] = array[up_arrow];
			array[up_arrow] = tmp;

			if (up_arrow != down_arrow)
				print_array(array, size);
			/* up moves to the next */
			up_arrow++;
		}
		/* down moves to the next */
		down_arrow++;
	}

	tmp = array[up_arrow];
	array[up_arrow] = array[end];
	array[end] = tmp;

	if (array[end] != pivot)
		print_array(array, size);

	return (up_arrow);
}
