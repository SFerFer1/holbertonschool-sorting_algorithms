#include "sort.h"
/**
 * selection_sort -using the Bubble sort algorithm.
 *
 * @array: the list you want to sort.
 *
 * @size: the list you want to sort.
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int  temp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min_idx != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}




}
}

