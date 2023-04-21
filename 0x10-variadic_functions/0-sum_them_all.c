#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all parameters
 * @n: number of parameters
 * @...: variable number of parameters
 *
 * Return: n == 0 - 0 else sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, add = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		add += va_arg(ap, int);

	va_end(ap);
	return (add);
}
