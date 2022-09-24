#include "main.h"
/**
 * leet - encodes a string into numbers
 * @s: string or array to change to encode
 *
 * Return: encoded string.
 */
char *leet(char *s)
{
	int i, j;
	char a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}

	return (s);
}
