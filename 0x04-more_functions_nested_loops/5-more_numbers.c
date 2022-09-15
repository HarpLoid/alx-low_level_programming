#include "main.h"

/**
 * more_numbers - print numbers from
 * 0 to 14 ten times.
 *
 * Return: 0 (success)
 */
void more_numbers(void)
{
	int num;
	int count = 0;

	while (count < 10)
	{
		num = 0;

		while (num <= 14)
		{
			if ((num / 10) > 0)
			{
				_putchar('0' + (num / 10));
			}
			_putchar('0' + (num % 10));
			num++;
		}
		count++;
		_putchar('\n');
	}
}
