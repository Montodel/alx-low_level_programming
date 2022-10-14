#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print string
 * @separator: separator char
 * @n: number of parameters
 * Return void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list parameter;
	char *print;

	va_start(parameter, n);
	for (i = 0; i < n; i++)
	{
		print = va_arg(parameter, char *);
		if (print)
			printf("%s", print);
		else
			printf("(nil)");
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(parameter);
}
