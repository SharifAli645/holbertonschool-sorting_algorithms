#include "sort.h"
/**
 * quick_sort - function that sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array of integers
 * @size: size of the array
 *
 * Return: always void
 **/
void quick_sort(int *array, size_t size)
{
	int pv, tmp, i = 0, j;

	if (array == NULL || size < 1)
		return;
	pv = size - 1;
	while (&array[pv] != &array[i])
	{
		while (array[i] < array[pv] && &array[pv] != &array[i])
			i++;
		if (&array[pv] == &array[i])
		{
			pv--;
			i = 0;
			continue;
		}
		j = i;
		while (array[j] >= array[pv] && &array[pv] != &array[j])
			j++;
		if (&array[pv] == &array[j])
		{
			tmp = array[pv];
			array[pv] = array[i];
			array[i] = tmp;
			print_array(array, size);
			continue;
		}
		tmp = array[j];
		array[j] = array[i];
		array[i] = tmp;
		print_array(array, size);
		i++;
	}
}
