#include "main.h"

/**
 * set_bit - set the value
 * of a bit at a given index
 * to 1
 * @n: number to set the bit
 * at the index
 * @index: index to set the bit at
 *
 * Return: 1 on sucess -1 on failure.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;
	unsigned int max_len;

	max_len = (sizeof(unsigned long int) * 8);

	if (index > max_len)
	{
		return (-1);
	}

	mask <<= index;

	*n = (*n | mask);

	return (1);
}
