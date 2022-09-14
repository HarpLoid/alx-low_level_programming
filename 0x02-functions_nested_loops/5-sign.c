#include "main.h"

/**
 * print_sign - prints the sign of a n
 * @n: number to check
 *
 * Return: 1 (if sign is positive),
 * return 0 (if n is 0),
 * return -1 (if sign is negative)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
