#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: format of argument pased
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, flag = 0;
	char *check, *sep = "";

	va_start(ap, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
			printf("%s%c", sep, va_arg(ap, int));
			flag = 1;
			break;

			case 'i':
			printf("%s%d", sep, va_arg(ap, int));
			flag = 1;
			break;

			case 'f':
			printf("%s%f", sep, va_arg(ap, double));
			flag = 1;
			break;

			case 's':
			check = va_arg(ap, char*);
			if (!(check))
				check = "(nil)";
			printf("%s%s", sep, check);
			flag = 1;
			break;
		}
		if (flag == 1)
			sep = ", ";
		i++;
	}
	va_end(ap);
	printf("\n");
}
