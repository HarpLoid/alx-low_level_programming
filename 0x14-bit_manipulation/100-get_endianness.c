#include "main.h"

/**
 * get_endianness - checks the
 * endianness
 * @void: nothing
 *
 * Return: 1 for little endian
 * 0 for big endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);

	return (0);
}
