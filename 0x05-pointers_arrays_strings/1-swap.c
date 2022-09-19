#include "main.h"

/**
 * swap_int - swaps the values of the arguments.
 * @a: pointer of integer to swap.
 * @b: pointer of integer to swap.
 *
 * Return: Always 0 (success)
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
