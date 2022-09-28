#include "main.h"

/**
 * find_root - finds the root number.
 * @n: integer to find the root.
 * @root: root of n
 *
 * Return: root of n.
 */
int find_root(int n, int root)
{
	if (root * root > n)
	{
		return (-1);
	}
	if (root * root == n)
	{
		return (root);
	}
	return (find_root(n, root + 1));
}

/**
 * _sqrt_recursion - finds the square root
 * of n.
 * @n: integer to find power.
 *
 * Return: squareroot of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_root(n, 0));
}
