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
 * _strncpy - copies the string in
 * src to dest to the nth character.
 * @src: string to copy.
 * @dest: string to be copied to.
 * @n: number of characters to copy
 *
 * Return: the string in dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len_src = _strlen(src);

	if (n >= len_src)
	{
		for (i = 0; i < len_src; i++)
		{
			dest[i] = src[i];
		}

		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}

	return (dest);
}
