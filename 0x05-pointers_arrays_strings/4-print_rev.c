#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string
 * Return: 0 (Alway Success)
 */

void print_rev(char *s)
{
	int longi = 0;
	int a;

	while (*s != '\n')
	{
		longi++;
		s++;
	}
	s--;
	for (a = longi; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
