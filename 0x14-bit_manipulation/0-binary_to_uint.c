#include "main.h"

/**
 * _pow - raises a base number
 * to a given power
 * @base: base number
 * @power: power to raise to
 *
 * Return: Result
 */
int _pow(int base, unsigned int power)
{
	int res = 1;

	while (power != 0)
	{
		res *= base;
		power--;
	}
	return (res);
}

/**
 *_strlen - finds the length of a
 * string
 * @s: String to find it's length
 *
 * Return: length of string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * binary_to_uint - converts binary
 * to unsigned integer.
 * @b: string of char '0'
 * and '1'
 *
 * Return: Converted number or
 * 0 if b has a character that isn't
 * 1 or 0 and b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, len = 0, res = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}

	len = _strlen(b);

	for (i = (len - 1), n = 0; i >= 0; i--, n++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			res += ((b[i] - '0') * _pow(2, n));
		}
		else
		{
			res = 0;
			break;
		}
	}
	return (res);
}
