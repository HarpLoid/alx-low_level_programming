#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: pointer to character string
 *
 * Return: value of length of string.
 */
int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	return (len);
}


/**
 * _strncat - concatenates two strings to the
 * nth character
 * @dest: destination of concatenated string.
 * @src: string to concatenate with destination string.
 * @n: the nth character to append.
 *
 * Return: concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest;
	int len_src;
	int i;

	len_dest = _strlen(dest);
	len_src = _strlen(src);

	if (n >= len_src)
	{
		for (i = 0; i < len_src; i++)
		{
			dest[len_dest + i] = src[i];
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			dest[len_dest + i] = src[i];
		}
	}

	return (dest);
}
