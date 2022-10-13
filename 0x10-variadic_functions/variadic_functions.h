#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums all it's
 * parameters
 * @n: number of  parameters
 *
 * Return: sum of all variable parameters
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - print numbers passed
 * as arguements.
 * @separator: string that seperates the
 * numbers printed.
 * @n: number of arguments to print.
 * @...: variable arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - print strings passed
 * as arguements.
 * @separator: string that seperates the
 * stings printed.
 * @n: number of arguments to print.
 * @...: variable arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...);



#endif /*_VARIADIC_FUNCTIONS_H_*/
