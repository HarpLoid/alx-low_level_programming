#include "main.h"

/**
 * clear_bit - set the value
 * of a bit at a given index
 * to 0
 * @n: number to clear the bit
 * at the index
 * @index: index to clear the bit at
 *
 * Return: 1 on sucess -1 on failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;
	unsigned int max_len;

	max_len = (sizeof(unsigned long int) * 8);

	if (index > max_len)
	{
		return (-1);
	}

	mask = ~(mask << index);

	*n = (*n & mask);

	return (1);
}
