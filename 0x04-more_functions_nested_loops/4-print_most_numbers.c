#include "main.h"

/**
 * print_numbers - prints numbers
 * from 0 to 9 excluding 2 and 4
 *
 * Return: Always 0 (success)
 */
void print_most_numbers(void)
{
       char n = '0';

	while (n <= '9')
	{
		if ((n != '2') && (n != '4'))
		{
			_putchar(n);
		}
		n++;
	}
	_putchar('\n');
}
