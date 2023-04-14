#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted
 * array of integers using the jump search algorithm
 * @array: array of integers
 * @size: size of the array
 * @value: value to be searched
 *
 * Return: the index of the value of the array
 * or -1 if array is NULL or value is not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start = 0, jump = 0, step = floor(sqrt(size));

	if (array == NULL || size == 0)
		return (-1);

	while (jump < size && array[jump] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		start = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", start, jump);

	jump = jump < size - 1 ? jump : size - 1;
	while (start < jump && array[start] < value)
	{
		start++;
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	}

	if (array[start] == value)
		return (start);
	else
		return (-1);
}
