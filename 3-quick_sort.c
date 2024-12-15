#include "sort.h"
/**
 * swap - change places two integers
 *@a: pointer to first interger
 *@b: pointer to second interger
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
 *lomuto_partition - function implements Lomuto partition
 *@array: array to sort
 *@start: start the index
 *@end: ending the index
 *@size: size of the array
 *Return: i + 1
 */
int lomuto_partition(int *array, int start, int end, size_t size)
{
	int pivot = array[end];
	int i = start - 1;
	int j;

	for (j = start; j < end; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
		if (i != j)
		{
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
		}
	}
	if (i + 1 != end)
	{
		swap(&array[i + 1], &array[end]);
		print_array(array, size);
	}

	return (i + 1);
}
/**
 *recursive_sort - performs the recursive part of quick sort
 *@array: array to sort
 *@start: start the index
 *@end: ending the index
 *@size: size of the array
 */
void recursive_sort(int *array, int start, int end, size_t size)
{
	if (start < end)
	{
	int pivot_idx = lomuto_partition(array, start, end, size);

	recursive_sort(array, start, pivot_idx - 1, size);
	recursive_sort(array, pivot_idx + 1, end, size);
	}
}
/**
 *quick_sort -integers in ascending order using the quick sort
 *@array: array to index
 *@size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	return;

	recursive_sort(array, 0, size - 1, size);
}
