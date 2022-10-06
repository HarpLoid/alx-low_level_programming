#include "main.h"

/**
 * malloc_checked - a function that
 * allocates memory using malloc
 * @b: size of memory to allocate
 *
 * Return: pointer to allocted memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
