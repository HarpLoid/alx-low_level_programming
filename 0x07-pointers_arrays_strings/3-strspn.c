#include "main.h"

/**
 * _strspn - gets the length of a prefix
 * substring.
 * @s: string to search.
 * @accept: string of characters to check.
 *
 * Return: string from character c.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}
