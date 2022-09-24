#include "main.h"
/**
 * string_toupper - changes the characters
 * in lowercase to uppercase
 * @s: string or array to change to uppercase
 *
 * Return: uppercased string.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}

	return (s);
}
