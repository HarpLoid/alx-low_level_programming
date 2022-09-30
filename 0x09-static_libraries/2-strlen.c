#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: pointer to character string
 *
 * Return: value of length of string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
