#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets in lowercase 10 times
 *
 * Return: Always 0 (success)
 *
 */
void print_alphabet_x10(void)
{
	int count = 1;
	char letters;

	while (count <= 10)
	{
		letters = 'a';
		while (letters <= 'z')
		{
			_putchar(letters);
			letters++;
		}
		_putchar('\n');
		count++;
	}
}
