#include "sort.h"

/**
 * swap - function to swap two values
 * @i: The first element to swap
 * @j: The second element to swap
 *
 * Return: Always void
 *
 */
void swap(int *i, int *j)
{
	int tmp = *i;
	*i = *j;
	*j = tmp;
}

/**
 * lomuto - function to make partition lomuto
 * @array: The array containing data
 * @size: The size of the array
 * @low: The index 0
 * @g_size: The real size of the array
 *
 * Using bubble sort algorithm, sort an array
 *
 * Return: Always void
 *
 */
size_t lomuto(int *array, int low, int size, size_t g_size)
{
	int j, i = low;
	int pivot = array[size];

	j = low;
	while (j < size)
	{
		if (array[j] <= pivot)
		{
			swap(&array[i], &array[j]);
			if (array[i] != array[j])
				print_array(array, g_size);
			i++;
		}
		j++;
	}
	swap(&array[i], &array[size]);
	if (array[i] != array[size])
		print_array(array, g_size);
	return (i);

}

/**
 * quick - function to sort an array in ascending order
 * @array: The array containing data
 * @size: The size of the array
 * @low: The index 0
 * @g_size: The real size of the array
 *
 * Using bubble sort algorithm, sort an array
 *
 * Return: Always void
 *
 */
void quick(int *array, int low, int size, size_t g_size)
{
	int part;

	if (low >= size)
		return;

	part = lomuto(array, low, size, g_size);

	quick(array, low, part - 1, g_size);
	quick(array, part + 1, size, g_size);

}

/**
 * quick_sort - function to sort an array in ascending order
 * @array: The array containing data
 * @size: The size of the array
 *
 * Using bubble sort algorithm, sort an array
 *
 * Return: Always void
 *
 */
void quick_sort(int *array, size_t size)
{
	size_t g_size;

	if (!array || size < 1)
		return;
	g_size = size;
	quick(array, 0, size - 1, g_size);
}
