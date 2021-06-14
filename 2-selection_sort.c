#include "sort.h"

/**
 * selection_sort - sorts an array
 *
 * @array: array of int
 * @size: size
 */
 
void selection_sort(int *array, size_t size)
{
  size_t z, x, tmp, tim;

  for (z = 0; z < size; z++)
    {
      tim = z;
      for (x = z; x < size; x++)
	{
	  if (array[x] < array[tim])
	    tim = x;
	}
      if (z != tim)
	{
	  tmp = array[z];
	  array[z] = array[tim];
	  array[tim] = tmp;
	  print_array(array, size);
	}
    }
}
