#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	/**
	 *for - loop through 'a' to 'z' and displays
	 *the result.
	 *
	 * Return: ch
	 */
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
