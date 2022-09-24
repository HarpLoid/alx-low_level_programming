#include "main.h"

/**
 * cap_string - capitalizes all words in string
 * @s: string or array to change to capitalize
 *
 * Return: capitalized string.
 */
char *cap_string(char *s)
{
	int i = 0, j, k;
	char a[14] = {' ', '\n', '\t', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};
	char null = '\0';
	
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] -= 32;
	}
	i++;

	while (s[i] != null)
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
		i++;
	}
	return (s);
}
