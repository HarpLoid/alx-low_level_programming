#include "main.h"

/**
 * _isupper - checks if the input:
 *  is an uppercase character
 *  @c: character to check
 *
 *  Return: returns 1 if uppercase
 *  returns 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
