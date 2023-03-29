#include "main.h"

/**
 * _atoi - converts a string to an int
 * @s: string to be converted
 *
 * Return: the int converted
 */

int _atoi(char *s)
{
	int i = 0;
	int a = 0;
	int b = 0;
	int len = 0;
	int c = 0;
	int d = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && c == 0)
	{
		if (s[i] == '-')
			++a;

		if (s[i] >= '0' && s[i] <= '9')
		{
			d = s[i] - '0';
			if (a % 2)
				d = -d;
			b = (b * 10 + d);
			c = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			c = 0;
		}
		i++;
	}
	if (c == 0)
		return (0);

	return (b);
}
