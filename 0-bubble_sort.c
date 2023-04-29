#include "sort.h"

/**
 * bubble_sort - This function sorts an array of size 'size'
 * in ascending order
 *
 * @array: An array to be sorted
 * @size: size of the array
 * Return: void function
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (size == 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 ; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
