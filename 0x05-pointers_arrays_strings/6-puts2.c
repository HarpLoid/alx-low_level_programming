#include "main.h"
/**
 * puts2 - prints every other character
 * of a string starting with the
 * first character followed by a new line.
 * @str: String to print.
 *
 * Return: void
 */
void puts2(char *str)
{
	int c = 0;

	while (*(str + c))
	{
		_putchar(*(str + c));
		c += 2;
	}
	_putchar('\n');
}
