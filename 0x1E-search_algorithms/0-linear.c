#include "search_algos.h"

/**
 * linear_search - searches for a value in an
 * array of integers using the linear search algorithm
 * @array: array of integers
 * @size: number of elements in the array
 * @value: value of integer to search
 *
 * Return: return the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
