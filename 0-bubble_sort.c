#include "sort.h"

/**
 * bubble_sort - function to sort an array in ascending order
 * @array: The array containing data
 * @size: The size of the array
 *
 * Using bubble sort algorithm, sort an array
 *
 * Return: Always void
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int run = 1, flag, temp;

	if (!array || size < 1)
		return;
	while (run)
	{
		flag = 0;
		i = 0;
		while (i < size - 1)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				flag = 1;
				print_array(array, size);
			}
			i++;
		}
		if (flag)
			run = 1;
		else
			run = 0;
	}
}
