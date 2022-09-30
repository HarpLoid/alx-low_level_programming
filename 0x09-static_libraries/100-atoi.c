#include "main.h"
/**
 * _atoi (char *s);
 * converts a string to an integer
 * @s: string to convert
 *
 * Return: integer value.
 */
int _atoi(char *s)
{
	int sign = 1;
	int number = 0;

	while (s[0] != '\0')
	{
		if (s[0] == '-')
		{
			sign *= -1;
		}
		else if (s[0] >= '0' && s[0] <= '9')
		{
			number = (number * 10) + (s[0] - '0') * sign;
		}
		else if (number)
		{
			break;
		}
		s++;
	}
	return (number);
}
