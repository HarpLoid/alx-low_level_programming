#include "main.h"


/**
 * _islower - checks if a character is lowercase
 * if character is lowercase it returns 1
 * else 0 is returned.
 * @c: character to check
 *
 * Return: 1 (Success),
 * return 0 (Failure)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
