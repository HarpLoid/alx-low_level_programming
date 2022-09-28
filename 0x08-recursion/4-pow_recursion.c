#include "main.h"
/**
 * _pow_recursion - finds x raised
 * to power y.
 * @x: integer to find power.
 * @y: integer power to raise x to.
 *
 * Return: x raised to power y.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	
	return (x * _pow_recursion(x, y - 1));
}
