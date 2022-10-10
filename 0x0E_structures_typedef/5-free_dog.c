#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees memory allocated
 * for a dog variable
 * @d: pointer to dog variable
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
