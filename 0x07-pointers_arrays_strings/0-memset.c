#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: array to fill
 * @b: constant to fill the array
 * @n: number of byte to fill the array
 *
 * Return: the array of the memory.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
