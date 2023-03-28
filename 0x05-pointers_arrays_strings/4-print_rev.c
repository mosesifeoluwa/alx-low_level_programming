#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int a = 0;
	int b;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	s--;
	for (b = a; b > 0; a--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
