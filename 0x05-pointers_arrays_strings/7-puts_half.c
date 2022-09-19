#include "main.h"
/**
 * puts_half - prints half of a string
 * starting from the
 * second half followed by a new line.
 * @str: String to print.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int c = 0;
	int n;

	while (*(str + c))
	{
		c++;
	}
	n = c / 2;

	if (c % 2!= 0)
	{
		n += 1;
	}

	while (n < c)
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
