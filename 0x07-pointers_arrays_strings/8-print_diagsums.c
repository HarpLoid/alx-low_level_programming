#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the
 * diagonals of a matrix
 * @a: matrix
 * @size: size of matrix
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int diagsum_1 = 0;
	int diagsum_2 = 0;
	int i, r;

	for (r = 0; r < size; r++)
	{
		i = (r * size) + r;
		diagsum_1 += a[i];
	}

	for (r = 1; r <= size; r++)
	{
		i = (r * size) - r;
		diagsum_2 += a[i];
	}
	printf("%d, %d\n", diagsum_1, diagsum_2);
}
