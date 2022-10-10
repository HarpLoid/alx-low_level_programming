#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the values
 * elements of dog
 * @d: pointer to variable of 
 * type dog.
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
