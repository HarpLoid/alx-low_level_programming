#include "main.h"

/**
 * _strchr - finds a character in
 * a string.
 * @s: string to search.
 * @c: character to locate.
 *
 * Return: string from character c.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return ('\0');
	}
}
