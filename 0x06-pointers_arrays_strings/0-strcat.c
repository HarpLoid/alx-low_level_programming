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
 * _strcat - concatenates two strings
 * @dest: destination of concatenated string.
 * @src: string to concatenate with destination string.
 *
 * Return: concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int len_dest;
	int len_src;
	int i;

	len_dest = _strlen(dest);
	len_src = _strlen(src);

	for (i = 0; i <= len_src; i++)
	{
		dest[len_dest + i] = src[i];
	}

	return (dest);
}
