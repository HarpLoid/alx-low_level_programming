#include "search_algos.h"

/**
 * linear_search - Searches for a value in
 * an array of integers using the
 * Linear Search Algorithm
 * @value: value to search for in array
 * @array: array to search for value
 * @size: size of array
 *
 * Return: first index for value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
