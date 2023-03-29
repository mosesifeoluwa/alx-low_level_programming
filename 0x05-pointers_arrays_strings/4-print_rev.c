#include "main.h"

/**
 * print_rev - print the reverse of a string
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int k = 0;
	int a;

	while (*s != '\0')
	{
		k++;
		s++;
	}
	s--;
	for (a = k; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
