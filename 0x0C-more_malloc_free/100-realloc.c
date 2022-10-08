#include "main.h"
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to old memory block
 * @old_size: size of old memory block
 * @new_size: size of reallocted memory
 *
 * Return: pointer to new memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		free(ptr);
		return (new_ptr);
	}
	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return(NULL);
	}
	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < old_size; i++)
		{
			*((char *)new_ptr + i) = *((char *)ptr + i);
		}
		free(ptr);
	}
	return (new_ptr);
}
