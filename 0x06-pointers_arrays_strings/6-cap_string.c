#include "main.h"

/**
 * cap_string - capitalizes all words in string
 * @s: string or array to change to capitalize
 *
 * Return: capitalized string.
 */
char *cap_string(char *s)
{
	int i, j, k;
	char a[14] = {' ', '\n', '\t', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};
	char null = '\0';

	for (i = 0; s[i] != null; i++)
	{
		for (j = 0; a[j] != null; j++)
		{
			if (s[i] == a[j])
			{
				k = i + 1;
				if (s[k] >= 'a' && s[k] <= 'z')
				{
					i = k;
					s[i] -= 32;
				}
			}
		}
	}

	return (s);
}
