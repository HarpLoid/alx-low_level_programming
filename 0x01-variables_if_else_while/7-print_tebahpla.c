#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'z';

	/**
	 *for - loop through 'z' to 'a' and displays
	 *the result.
	 *
	 * Return: ch
	 */
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
