#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: pointer to character string
 *
 * Return: value of length of string.
 */
int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i]; i++)
	{
		len++;
	}
	return (len);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes to concatenate
 * from s2.
 *
 * Return: concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, lens1, lens2;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	lens1 = _strlen(s1);
	lens2 = _strlen(s2);
	s = malloc(lens1 + lens2);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lens1; i++)
	{
		s[i] = s1[i];
	}
	if (n >= lens2)
	{
		for (j = 0; j < lens2; j++)
		{
			s[lens1 + j] = s2[j];
		}
		s[lens1 + j + 1] = '\0';
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			s[lens1 + j] = s2[j];
		}
		s[lens1 + j + 1] = '\0';
	}
	return (s);
}
