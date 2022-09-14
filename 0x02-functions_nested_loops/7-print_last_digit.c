#include "main.h"

/**
 * print_last_digit - prints the last digit
 * a number
 * @n: an integer arguement
 *
 * Return: the value of the last digit
 */
int print_last_digit(long int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	_putchar('0' + (n % 10));

	return (n % 10);
}
