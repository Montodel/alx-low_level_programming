#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - sums of all its parameters
 * @n: number of arguments
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int s = 0;
	unsigned int i;
	va_list parametres;

	va_start(parametres, n);
	for (i = 0; i < n; i++)
	{
		s += va_arg(parametres, int);
	}
	va_end(parametres);
	return (s);
}
