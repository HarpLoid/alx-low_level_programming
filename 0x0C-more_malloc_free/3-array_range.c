#include "main.h"

/**
 * array_range - creates an array
 * of integers from min to max
 * @min: minimum integer
 * @max: maximimun integer
 *
 * Return: pointer to th array of 
 * integers
 */
int *array_range(int min, int max)
{
	int i, val;
	int *ptr;
	int arr_size;

	if (min > max)
	{
		return (NULL);
	}

	arr_size = (max - min) + 1;

	ptr = malloc(arr_size * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}

	val = min;
	for (i = 0; i <= arr_size; i++)
	{
		if (val <= max)
		{
			ptr[i] = val;
			val++;
		}
	}
	return (ptr);
}
