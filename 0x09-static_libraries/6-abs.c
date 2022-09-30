#include "main.h"


/**
 * _abs - computes the absolute value
 * of an integer
 * @N: integer arguement
 *
 * Return: Absolute value of number.
 */
int _abs(int N)
{
	if (N < 0)
	{
		N = (N * -1);
		return (N);
	}
	else if (N > 0)
	{
		return (N);
	}
	return (0);
}
