#include "main.h"

/**
 * puts2 - function should print only one char out
 * of two
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int k = 0;
	int a = 0;
	char *x = str;
	int i;

	while (*x != '\0')
	{
		x++;
		k++;
	}
	a = k - 1;
	for (i = 0; i <= a; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
