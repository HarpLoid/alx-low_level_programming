#include "main.h"
/**
 * _calloc - allocates memory and initialises
 * it to zero.
 * @nmemb: number of elements.
 * @size: size of bytes to allocate.
 *
 * Return: pointer to the memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int c;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (c = 0; c < nmemb * size; c++)
	{
		*((char *)ptr + c) = 0;
	}
	return (ptr);
}
