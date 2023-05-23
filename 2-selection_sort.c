#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: array of integers
 * @size: size of the array
 *
 * Return: always void
 **/
void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t e = 0;
	int tmp, min, flag;

	if (array == NULL || size < 1)
		return;
	while (i < size)
	{
		min = array[i];
		flag = 0;
		while (e < size)
		{
			if (array[e] < min)
			{
				min = array[e];
				flag = e;
			}
			e++;
		}
		if (flag)
		{
			tmp = array[i];
			array[i] = array[flag];
			array[flag] = tmp;
			print_array(array, size);
		}
		i++;
		e = i;
	}
}
