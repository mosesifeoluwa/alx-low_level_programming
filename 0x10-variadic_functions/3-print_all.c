#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print anything
 * @format: list types of arguments
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *a, *b = "";

	va_list lists;

	va_start(lists, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", b, va_arg(lists, int));
					break;
				case 'i':
					printf("%s%d", b, va_arg(lists, int));
					break;
				case 'f':
					printf("%s%f", b, va_arg(lists, double));
					break;
				case 's':
					a = va_arg(lists, char *);
					if (!a)
						a = "(nil)";
					printf("%s%s", b, a);
					break;
				default:
					i++;
					continue;
			}
			b = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(lists);
}
