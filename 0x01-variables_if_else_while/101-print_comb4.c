#include <stdio.h>

/**
 * main - prints all possible combinations
 * of two digits.
 *
 * Returns: Always 0 (Success)
 */
int main(void)
{
	int h = '0', t = '0', u = '0';

	while (h <= '9')
	{
		t = h + 1;

		while (t <= '9')
		{
			u = t + 1;

			while (u <= '9')
			{
				putchar(h);
				putchar(t);
				putchar(u);

				if ((h != '7') || (t != '8') || (u != '9'))
				{
					putchar(',');
					putchar(' ');
				}
				u++;
			}
			t++;
		}
		h++;
	}
	putchar('\n');
	return (0);
}
