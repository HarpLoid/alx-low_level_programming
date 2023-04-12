#include "search_algos.h"

/**
 * binary_search - searches for a value in
 * a sorted array of integers
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value
 */
int binary_search(int *array, size_t size, int value)
{
	int n = size, L = 0, R = n - 1, m = 0;

	while (L <= R)
	{
		m = floor(((L + R) / 2));

		print_array(array, L, R);
		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}
	return (-1);
}

/**
 * print_array - prints the array of integers
 * @i: iterator
 * @end: end point
 *
 * Return void
 */
void print_array(int *array, int i, int end)
{
	printf("Searching in array: ");
	while (i <= end)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
		i++;
	}
	printf("\n");
}
