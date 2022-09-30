#include "main.h"
/**
 * _memcpy - copies a number of bytes
 * from one memory area of to another
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: number of byte to copy
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
