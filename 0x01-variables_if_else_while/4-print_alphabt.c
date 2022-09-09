#include <stdio.h>

/**
 * main - print a to z excluding
 * q and e.
 *
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');

	return (0);
}
