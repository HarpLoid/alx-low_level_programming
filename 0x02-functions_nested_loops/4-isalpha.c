#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * and returns 1 if the character is lowercase
 * and uppercase and returns 0 if it's otherwise.
 * @c: character to check
 *
 * Return: 1 (Success),return 0 (Failure)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
