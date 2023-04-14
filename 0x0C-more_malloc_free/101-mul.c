#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if string contains non-digit character
 * @s: string to be evaluated
 *
 * Return: 0 if non-digit is found, 1 if otherwise
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns length of a string
 * @s: string to be evaluated
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * errors - handles errors
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive num
 * @argc: num of arg
 * @argv: array of arg
 *
 * Return: 0 (Always Success)
 */

int main(int argc, char *argv[])
{
	char *a, *b;
	int x, y, z, i, m, n, p, *r, k = 0;

	a = argv[1], b = argv[2];
	if (argc != 3 || !is_digit(a) || !is_digit(b))
		errors();
	x = _strlen(a), y = _strlen(b);
	z = x + y + 1;
	r = malloc(sizeof(int) * z);
	if (!r)
		return (1);
	for (i = 0; i <= x + y; i++)
		r[i] = 0;
	for (x = x - 1; x >= 0; x--)
	{
		m = a[x] - '0';
		p = 0;
		for (y = _strlen(b) - 1; y >= 0; y--)
		{
			n = b[y] - '0';
			p += r[x + y + 1] + (m * n);
			r[x + y + 1] = p % 10;
			p /= 10;
		}

		if (p > 0)
			r[x + y + 1] += p;
	}
	for (i = 0; i < z - 1; i++)
	{
		if (r[i])
			k = 1;
		if (k)
			_putchar(r[i] + '0');
	}
	if (!k)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);
}
