#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function
 * given as a parameter on elements of
 * an array.
 * @array: array to iterate.
 * @size: size of array.
 * @action: fuction to execute on array
 * elements.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size == 0)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
