#include "search_algos.h"

/**
 * binary_search - Searches for a value in
 * a sorted array of integers using the
 * Binary search algorithm
 * @value: value to search for in array
 * @array: array to search for value
 * @size: size of array
 *
 * Return: first index for value
 */
int binary_search(int *array, size_t size, int value)
{
	int start = 0, end = size - 1, mid;

	if (!array)
		return (-1);

	while (start <= end)
	{
		mid = start + ((end - start) / 2);
		printf("Searching in array: ");
		print_array(array, start, end);

		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (-1);
}

/**
 * print_array - prints a given array.
 * @array: pointer to array
 * @start: beginning index to start from
 * @end: index to stop at
 *
 * Return: void
 */
void print_array(int *array, int start, int end)
{
	int i;

	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}
