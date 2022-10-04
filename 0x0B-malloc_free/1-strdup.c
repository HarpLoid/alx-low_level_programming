#include "main.h"

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
	int l;
	char *s;

	if (str == NULL) /*Validates str in the function*/
	{
		return (NULL);
	}
	
	for (i = 0; str[i] < '\0'; i++) /*Checks the number of elements in str*/
	{
		l++;
	}
	l++;

	s = malloc(l * sizeof(char));
	
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < l; i++)
	{
		s[i] = str[i];
	}

	return (s);
}
