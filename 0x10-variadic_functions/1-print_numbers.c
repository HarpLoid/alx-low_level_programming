#include "variadic_functions.h"

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
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start (ap, n);

	if (separator == NULL)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d%s", va_arg(ap, int), separator);
		}
		else
		{
			printf("%d", va_arg(ap, int));
		}
	}
	printf("\n");
	va_end (ap);
}
