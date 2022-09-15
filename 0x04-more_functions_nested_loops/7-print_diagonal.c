#include "main.h"

/**
 * print_diagonal - prints
 * a diagonal line using '\'
 * @n: number of time '\' is printed.
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int row;
	int col;

	if (n > 0)
	{
		for (row = 1; row <= n; row++)
		{
			for (col = 1; col < row; col++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
