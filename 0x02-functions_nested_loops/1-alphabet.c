#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase
 *
 * Return: Always 0 (success)
 *
 */
void print_alphabet(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		_putchar(letters);
		letters++;
	}
	_putchar('\n');
}
