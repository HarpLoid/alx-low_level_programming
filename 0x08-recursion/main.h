#ifndef MAIN_H
#define	MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _puts_recursion - prints a string
 * followed by newline.
 * @s: array to print.
 *
 * Return: void.
 */
void _puts_recursion(char *s);

/**
 * _print_rev_recursion - prints a string
 * in reverse.
 * @s: array to print.
 *
 * Return: void.
 */
void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - returns length of string
 *
 * @s: string to find it's length.
 *
 * Return: length of string.
 */
int _strlen_recursion(char *s);

/**
 * factorial - finds the factorial
 * of n.
 * @n: integer to find it's factorial.
 *
 * Return: factorial of n.
 */
int factorial(int n);

/**
 * _pow_recursion - finds x raised
 * to power y.
 * @x: integer to find power.
 * @y: integer power to raise x to.
 *
 * Return: x raised to power y.
 */
int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - finds the square root
 * of n.
 * @n: integer to find power.
 *
 * Return: squareroot of n.
 */
int _sqrt_recursion(int n);

/**
 * is_prime_number - checks if a number
 * is a prime_number or not
 * @n: integer to check.
 *
 * Return: 1 if prime number
 * and 0 if not prime number.
 */
int is_prime_number(int n);


#endif /* _MAIN_H_ */
