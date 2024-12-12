#include "sort.h"
#include <stdbool.h>
/**
 * bubble_sort - sorts an array of integers in ascending order using the Bubble sort algorithm.
 *
 * @list - the list you want to sort.
 *
 *
 *
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t temp;
 	int comprovar = 1;
	
	while (comprovar == 1)
	{
	comprovar = 0;
	for (i = 0; i < size - 1; i++)
	{
		if (array[i] > array[i + 1])
		{
		temp  = array[i];
		array[i] = array[i + 1];
		array[i + 1] = temp;
		comprovar = 1;
		 print_array(array, size);
		}
	}
	}
}
