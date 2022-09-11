#include <stdio.h>

/**
 * main - prints all possible combinations
 * of two digits.
 *
 * Returns: Always 0 (Success)
 */
int main(void)
{
	int tens = '0', units = '0';

	while (tens <= '9')
	{
		units = tens + 1;

		while (units <= '9')
		{
			putchar(tens);
			putchar(units);

			if ((tens != '8') || (units != '9'))
			{
				putchar(',');
				putchar(' ');
			}

			units++;
		}

		tens++;
	}
	putchar('\n');

	return (0);
}
