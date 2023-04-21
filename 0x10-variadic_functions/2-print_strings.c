#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings
 * @separator: string to print between strings
 * @n: number of strings
 * @...: variable number of strings
 *
 * Description: if seperator is NULL, nil is not printed
 * if one strings is NULL, nil is printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *a;
	unsigned int i;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(str, char *);

		if (a == NULL)
			printf("(nil)");
		else
			printf("%s", a);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
