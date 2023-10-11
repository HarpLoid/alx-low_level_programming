#include "search_algos.h"

/**
* jump_search -  searches for a value in a sorted
* array of integers using the Jump search algorithm
* @array: pointer to the first element of the array to search
* @size: number of elements in array
* @value: the value to search for
*
* Return: index of the value or -1 if array is NULL
* or value is not found
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i, start = 0, end = sqrt(size);

	if (!array)
		return (-1);

	printf("Value checked array[%ld] = [%d]\n", start, array[start]);

	while (array[end] < value && start < size)
	{
		start = end;
		end = end + sqrt(size);
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		if (end > size - 1)
			break;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", start, end);

	for (i = start; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
