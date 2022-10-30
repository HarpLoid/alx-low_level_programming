#include "main.h"

/**
 * flip_bits - returns number of
 * bits needed to be flipped
 * to get one number from another
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned int bits = 0;

	diff = n ^ m;

	do {
		bits += (diff & 1);
		diff >>= 1;
	} while (diff > 0);

	return (bits);
}
