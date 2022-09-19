#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements
 * of an array of integers.
 * @a: array to print.
 * @n: number of elements in the array.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	/**
	 * n is the length of the array
	 * *a is a pointer to the array 
	 */
	int idx = 0;

	while (idx < n)
	{
		if (idx != (n - 1))
		{
			printf("%d, ", *(a + idx));
		}
		else
		{
			printf("%d", *(a + idx));
		}

		idx ++;
	}
	printf("\n");
}
