#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string in
 * src to dest.
 * @src: string to copy.
 * @dest: string to be copied to.
 *
 * Return: the string in dest
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (*(src + n))
	{
		*(dest + n) = *(src + n);
		n++;
	}
	*(dest + n) = '\0';

	return (dest);
}
