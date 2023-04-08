#include "main.h"

/**
 * _strspn - Entry point
 * @s: input value
 * @accept: input
 * Return: 0 (Always Succes)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				x++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (x);
		}
		s++;
	}
	return (x);
}
