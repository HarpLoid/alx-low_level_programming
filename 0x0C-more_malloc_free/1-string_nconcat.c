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
	int i, j, len, num = n;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (num < 0)
	{
		return (NULL);
	}
	if (num >= _strlen(s2))
	{
		num = _strlen(s2);
	}
	
	len = _strlen(s1) + num + 1;

	s = malloc(sizeof(*s) * len);
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < num; j++)
	{
		s[i + j] = s2[j];
	}
	s[i + j] = '\0';
	
	return (s);
}
