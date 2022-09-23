#include "main.h"

/**
 * reverse_array - reverses the content
 * of an array
 * @a: array to reverse it's content.
 * @n: number of elements in the array.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i;
	int j = 0;
	int b[100];

	for (i = n - 1; i >= 0; i--)
	{
		b[j] = a[i];
		j++;
	}
	for (i = 0; i < n; i++)
	{
		a[i] = b[i];
	}
}
