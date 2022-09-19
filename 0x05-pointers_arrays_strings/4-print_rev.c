#include "main.h"

/**
 * print_rev - prints a string in 
 * reverse followed by a new line.
 * @s: String to print.
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int c = 0;

	while (*(s + c))
	{
		c++;
	}
	c = c - 1;
	while (c >= 0)
	{
		_putchar(*(s + c));
		c--;
	}
	_putchar('\n');
}
