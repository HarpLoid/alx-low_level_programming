#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array to iterate.
 * @size: size of array.
 * @cmp: fuction to compare array
 * elements.
 *
 * Return: index of first element
 * that does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index, ret_val;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		ret_val = cmp(array[i]);
		if (ret_val != 0)
		{
			index = i;
			break;
		}
	}
	if (ret_val == 0)
	{
		return (-1);
	}
	return (index);
}
