#include "variadic_functions.h"

/**
 * print_strings - print strings passed
 * as arguements.
 * @separator: string that seperates the
 * strings printed.
 * @n: number of arguments to print.
 * @...: variable arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	va_start (ap, n);

	if (separator == NULL)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);

		if (str == NULL)
		{
			printf("nil");
		}
		if (i != (n - 1))
		{
			printf("%s%s", str, separator);
		}
		else
		{
			printf("%s", str);
		}
	}
	printf("\n");
	va_end (ap);
}
