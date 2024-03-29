#include "hash_tables.h"

/**
 * key_index - gives the index
 * of a key
 * @key: the key to give index of
 * @size: size of the array of the
 * hash table
 *
 * Return: index where the key/value
 * should be stored in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (size == 0)
		return (0);

	index = (hash_djb2(key)) % size;

	return (index);
}
