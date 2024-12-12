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
	int i;
	size_t temp;
	int espacio = sizeof(array);
 	bool comprovar;

	while (comprovar == false)
	{
	comprovar = true;
	for (i = 0; i < espacio + 1; i++)
	{
		if (array[i] > array[i + 1])
		{
		print_array(array, size);
		temp  = array[i];
		array[i] = array[i + 1];
		array[i + 1] = temp;
		comprovar = false;
		}
	}
	}
}
