#include "search_algos.h"

/**
* exponential_search - searches for a value in a sorted array of integers
* using the Exponential search algorithm
* @array: pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
*
* Return: index of value or -1 if array is NULL
* or value is not found.
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, start, end, mid;

	if (!array)
		return (-1);

	while (array[i] < value && i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	start = i / 2;
	if (i + 1 > size)
		end = size - 1;
	else
		end = i + 1;

	printf("Value found between indexes [%ld] and [%ld]\n", start, end);

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
