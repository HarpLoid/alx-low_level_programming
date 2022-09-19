#include "main.h"

/**
 * rev_string - prints a string in
 * reverse followed by a new line.
 * @s: String to print.
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int c = 0, n = 0;
	char str[1000];

	while (*(s + c))
	{
		*(str + c) = *(s + c);
		c++;
	}
	c = c - 1;
	while (c >= 0)
	{
		*(s + c) = *(str + n);
		n++;
		c--;
	}
}
