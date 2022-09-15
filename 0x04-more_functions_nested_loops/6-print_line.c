#include "main.h"

/**
 * print_line - print a line using '_'
 * @n: number of time '_' is printed.
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		_putchar('_');

		if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
