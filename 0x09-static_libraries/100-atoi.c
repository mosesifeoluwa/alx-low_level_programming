#include "main.h"

/**
 * _atoi - convert string into integer
 * @s: string to use
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int x = 1, i = 0;
	unsigned int y = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '0')
	{
		if (s[i] == '-')
			x *= -1;
		i++;
	}

	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		y = (y * 10) + (s[i] - '0');
		i++;
	}
	y *= x;
	return (y);
}
