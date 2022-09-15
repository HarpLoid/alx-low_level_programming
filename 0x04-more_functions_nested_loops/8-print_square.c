#include "main.h"

/**
 * print_square - prints a
 * square of a size.
 * @size: size of square to print.
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int l;
	int b;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
