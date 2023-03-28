#include "main.h"
#include <stdio.h>

/**
 * print_rev - print a string in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\n')
	{
		a++;
	}

	for (a -= 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
