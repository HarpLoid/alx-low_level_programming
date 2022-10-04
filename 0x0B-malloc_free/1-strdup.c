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

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	
	return (len);
}

/**
 * _strdup - duplicates a string
 * to an allocated memory location.
 * @str: pointer to a string.
 *
 * Return: pointer to the location of 
 * the duplicate string, NULL on failure.
 */
char *_strdup(char *str)
{
	int i;
	int l = _strlen(str);
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	
	s = malloc(l * sizeof(char));

	for (i = 0; i <= l; i++)
	{
		s[i] = str[i];
	}
	
	return (s);
	free(s);
}
