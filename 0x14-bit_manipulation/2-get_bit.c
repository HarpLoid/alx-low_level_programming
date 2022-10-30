#include "main.h"

/**
 * get_bit - returns the value
 * of a bit at a given index
 * @n: number to find the bit
 * at the index
 * @index: index to find the bit at
 *
 * Return: bit at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1, n_copy;
	int len = 0;

	while (n_copy)
	{
		n_copy >>= 1;
		len++;
	}

	if (index >= len)
	{
		return (-1);
	}

	mask <<= index;

	if (n & mask)
		return (1);

	return (0);
}
