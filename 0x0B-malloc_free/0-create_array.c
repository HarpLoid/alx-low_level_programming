#include "main.h"

/**
 * create_array - create an array of size "size"
 * and initializes to with char c.
 * @size: size of the array.
 * @c: character to initialize the array with.
 *
 * Return: pointer to the array
 * and NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
