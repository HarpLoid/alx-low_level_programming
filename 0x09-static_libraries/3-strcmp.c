#include "main.h"
/**
 * _strcmp - compares two strings
 * and checks if they are equal.
 * @s1: first string to compare.
 * @s2: string to compare.
 *
 * Return: 0 when strings are equal
 * negative or positive when unequal.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}

	}
	return (s1[i] - s2[i]);
}
