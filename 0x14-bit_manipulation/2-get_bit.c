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
	unsigned long int mask = 1;
	unsigned int max_len;

	max_len = (sizeof(unsigned long int) * 8);

	if (index > max_len)
	{
		return (-1);
	}

	mask <<= index;

	if (n & mask)
		return (1);

	return (0);
}
