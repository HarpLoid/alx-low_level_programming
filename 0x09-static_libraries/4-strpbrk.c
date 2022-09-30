#include "main.h"

/**
 * _strpbrk - searchs a string for
 * any of a set of bytes.
 * @s: string to search.
 * @accept: string of characters to check.
 *
 * Return: string from character.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
	}
	return ('\0');
}
