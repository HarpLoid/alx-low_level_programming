#include "main.h"
/**
 * print_triangle - prints a
 * triangle of a size.
 * @size: size of square to print.
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int h;
	int w;
	int d;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (h = 1; h <= size; h++)
	{
		for (w = 1; w <= (size - h); w++)
		{
			_putchar(' ');
		}

		for (d = 1; d <= h; d++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
