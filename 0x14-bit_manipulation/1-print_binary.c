#include "main.h"

/**
 * print_binary - prints binary
 * representation of a number
 * @n: integer to be represented
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int n_dup = n, mask = 1;
	int len = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n_dup)
	{
		n_dup >>= 1;
		len++;
	}
	len -= 1;

	if (len)
	{
		mask <<= len;
	}

	while (mask)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}
}
