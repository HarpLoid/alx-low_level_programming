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
	if (d == NULL)
	{
		printf("");
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	if (d->age == NULL)
	{
		printf("Age: (nil)");
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
