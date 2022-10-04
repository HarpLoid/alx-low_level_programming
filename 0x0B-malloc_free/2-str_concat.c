#include "main.h"

/**
 * str_concat - concatenates two
 * strings.
 * @s1: string to add to.
 * @s2: string to add to s1.
 *
 * Return: the memory address
 * of concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int len_s1 = 0, len_s2 = 0;
	char *cat_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++)
	{
		len_s1++;
	}
	for (j = 0; s2[j]; j++)
	{
		len_s2++;
	}
	len_s2++;

	cat_str = malloc((len_s1 + len_s2) * sizeof(char));
	if (cat_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len_s1; i++)
	{
		cat_str[i] = s1[i];
	}

	for (j = 0; j < len_s2; j++)
	{
		cat_str[len_s1 + j] = s2[j];
	}

	return (cat_str);
}
