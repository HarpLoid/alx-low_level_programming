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
	int total = nmemb * size;
	void *ptr;
	unsigned char *c;

	if (nmemb <= 0 || size <= 0 || nmemb == NULL || size == NULL)
	{
		return (NULL);
	}

	ptr = malloc(total);
	if (ptr == NULL)
	{
		return (NULL);
	}

	c = ptr;

	while (total >= 0)
	{
		*c = 0;
		c++;
		total--;
	}
	return (ptr);
}
